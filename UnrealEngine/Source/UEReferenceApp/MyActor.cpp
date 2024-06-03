#include "MyActor.h"
#include "Kismet/KismetMathLibrary.h" // For math functions

AMyActor::AMyActor()
{
    // Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
}

void AMyActor::BeginPlay()
{
    Super::BeginPlay();
}

void AMyActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AMyActor::RasDaa(const FVector Ownship, const FVector Intruder, const FVector OwnshipHeadingSpeed, const FVector IntruderHeadingSpeed, float& StartAngle, float& EndAngle, int32& Alert, FParameters Parameters, FParameters& TestOutParameters)
{

    float IntruderHeading = IntruderHeadingSpeed.X;
    float IntruderSpeed = IntruderHeadingSpeed.Y;

    double a = UKismetMathLibrary::Sin(UKismetMathLibrary::DegreesToRadians(-IntruderHeading));
    double b = UKismetMathLibrary::Cos(UKismetMathLibrary::DegreesToRadians(-IntruderHeading));
    double c = a * Intruder.X + b * Intruder.Y;

    // solve the 2nd order polynomial
    double coeff1, coeff2, coeff3;
    if (a == 0) {
        coeff1 = 1;
        coeff2 = ((-2.0) * Ownship.X) / coeff1;
        coeff3 = (Ownship.X * Ownship.X + (c / b - Ownship.Y) * (c / b - Ownship.Y) - (OwnshipHeadingSpeed.Y * Parameters.Tt) * (OwnshipHeadingSpeed.Y * Parameters.Tt)) / coeff1;
    }
    else if (b == 0) {
        coeff1 = 1;
        coeff2 = ((-2.0) * Ownship.Y) / coeff1;
        coeff3 = (Ownship.Y * Ownship.Y + (c / a - Ownship.X) * (c / a - Ownship.X) - (OwnshipHeadingSpeed.Y * Parameters.Tt) * (OwnshipHeadingSpeed.Y * Parameters.Tt)) / coeff1;
    }
    else {
        coeff1 = 1 + (a / b) * (a / b);
        coeff2 = (2.0) * ((a / b) * (Ownship.Y - c / b) - Ownship.X) / coeff1;
        coeff3 = (Ownship.X * Ownship.X + (Ownship.Y - c / b) * (Ownship.Y - c / b) - (OwnshipHeadingSpeed.Y * Parameters.Tt) * (OwnshipHeadingSpeed.Y * Parameters.Tt)) / coeff1;
    }

    double det_val = (coeff2 / 2) * (coeff2 / 2) - coeff3;

    std::vector<std::vector<double>> crss_pnt(2, std::vector<double>(2));
    if (a == 0 && det_val >= 0) {
        crss_pnt[0][0] = (-1.0) * (coeff2 / 2) + sqrt(det_val) * (-1);
        crss_pnt[1][0] = (-1.0) * (coeff2 / 2) + sqrt(det_val) * 1;
        crss_pnt[0][1] = crss_pnt[1][1] = c / b;
    }
    else if (b == 0 && det_val >= 0) {
        crss_pnt[0][1] = (-1.0) * (coeff2 / 2) + sqrt(det_val) * (-1);
        crss_pnt[1][1] = (-1.0) * (coeff2 / 2) + sqrt(det_val) * 1;
        crss_pnt[0][0] = crss_pnt[1][0] = c / a;
    }
    else if (det_val >= 0) {
        crss_pnt[0][0] = (-1.0) * (coeff2 / 2) + sqrt(det_val) * (-1);
        crss_pnt[1][0] = (-1.0) * (coeff2 / 2) + sqrt(det_val) * 1;
        crss_pnt[0][1] = c / b - a / b * crss_pnt[0][0];
        crss_pnt[1][1] = c / b - a / b * crss_pnt[1][0];
    }
    else {
        crss_pnt = { {NAN, NAN}, {NAN, NAN} };
    }

    std::vector<double> crss_pnt_ang(2);
    if (std::all_of(crss_pnt.begin(), crss_pnt.end(), [](const std::vector<double>& v) { return !std::isnan(v[0]) && !std::isnan(v[1]); })) {
        for (int i = 0; i < 2; ++i) {
            crss_pnt_ang[i] = atan2(crss_pnt[i][1] - Ownship.Y, crss_pnt[i][0] - Ownship.X) * 180.0 / PI;
        }
    }

    double min_crss_pnt_ang = *std::min_element(crss_pnt_ang.begin(), crss_pnt_ang.end());
    double max_crss_pnt_ang = *std::max_element(crss_pnt_ang.begin(), crss_pnt_ang.end());


    // Decision of band color
    double dist_acs = sqrt(pow(Intruder.X - Ownship.X, 2) + pow(Intruder.Y - Ownship.Y, 2));

    // Alert variables: order -> [sst, art, wcb]
    if (dist_acs > Parameters.RCirArt && dist_acs <= Parameters.RCirSst) {
        Alert = 1;
        if (!Parameters.UpdateArtRadius && !Parameters.UpdateArtRadiusCheck) {
            Parameters.UpdateArtRadius = true;
            Parameters.UpdateArtRadiusCheck = true;
        }
        else {
            Parameters.UpdateArtRadius = false;
        }
    }
   // else if (dist_acs > Parameters.RCirWcb && dist_acs <= Parameters.RCirArt) {
    else if (dist_acs <= Parameters.RCirArt) {
        Alert = 2;
    }
    else {
        Alert = 0;
        Parameters.UpdateArtRadiusCheck = false;
    }

    // Calculate ART radius
    if (Parameters.UpdateArtRadius) {
        double del_vel = (-1.0) * (OwnshipHeadingSpeed.Y * IntruderSpeed) * (cos((OwnshipHeadingSpeed.X - IntruderHeading) * PI / 180) + sin((OwnshipHeadingSpeed.X - IntruderHeading) * PI / 180));
        Parameters.RCirArt = Parameters.RCirArt + del_vel * Parameters.RCirArtScale;
        Parameters.UpdateArtRadius = false;
        Parameters.UpdateArtRadiusCheck = true;
    }

    StartAngle = min_crss_pnt_ang;
    EndAngle = max_crss_pnt_ang;

 
}

void AMyActor::SaveDataIntoCsvFile(int32 FirstTimeEntry, const FVector LocationInDegreesofOwnship, const FVector LocationInXYZofOwnship, const float HeadingofOwnship, const float SpeedofOwnship, const FVector LocationInDegreesofIntruder, const FVector LocationInXYZofIntruder, const float HeadingofIntruder, const float SpeedofIntruder, float StartAngle,float EndAngle,int32 ThreatLevel)
{
    FString FilePath = FPaths::ProjectDir() + TEXT("\\Data\\datafromunreal.csv");
    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    // Ensure the directory exists
    FString DirectoryPath = FPaths::GetPath(FilePath);
    if (!PlatformFile.DirectoryExists(*DirectoryPath))
    {
        PlatformFile.CreateDirectory(*DirectoryPath);
    }
    bool bFileExists = PlatformFile.FileExists(*FilePath);

    // Prepare the header line if the file doesn't exist
    FString HeaderLine = TEXT("OwnshipLong, OwnshipLat, Ownshipheight, OwnshipLoc.X, OwnshipLoc.Y, OwnshipLoc.Z, HeadingofOwnship, SpeedofOwnship, IntruderLong, IntruderLat,Intruderheight, IntruderLoc.X, IntruderLoc.Y, IntruderLoc.Z, HeadingofIntruder, SpeedofIntruder, StartAngle, EndAngle, ThreatLevel\n");

    if (!bFileExists)
    {
        // Write the headerline
        FFileHelper::SaveStringToFile(HeaderLine, *FilePath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FILEWRITE_None);
    }
    else if (FirstTimeEntry == 1)
    {
        FString EndLine = TEXT("#################, #################, #################,#################,#################,#################,#################,#################,#################,#################,#################,#################,#################,#################,#################,#################,#################,#################,#################\n");

        // Write the EndLine
        FFileHelper::SaveStringToFile(EndLine, *FilePath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FILEWRITE_Append);
        FirstTimeEntry = 0;
    }
    
    // Prepare the line to be written
    FString LineToWrite = FString::Printf(TEXT("%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%d\n"),
        LocationInDegreesofOwnship.X, LocationInDegreesofOwnship.Y, LocationInDegreesofOwnship.Z, LocationInXYZofOwnship.X, LocationInXYZofOwnship.Y, LocationInXYZofOwnship.Z,
        HeadingofOwnship, SpeedofOwnship, LocationInDegreesofIntruder.X, LocationInDegreesofIntruder.Y, LocationInDegreesofIntruder.Z, LocationInXYZofIntruder.X, LocationInXYZofIntruder.Y, LocationInXYZofIntruder.Z, HeadingofIntruder, SpeedofIntruder, StartAngle, EndAngle, ThreatLevel);
    // Write the data
    FFileHelper::SaveStringToFile(LineToWrite, *FilePath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FILEWRITE_Append);

}


