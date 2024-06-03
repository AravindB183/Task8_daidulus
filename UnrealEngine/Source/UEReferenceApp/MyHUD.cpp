// This application is provided as is, without any support


#include "MyHUD.h"

void AMyHUD::DrawHUD()
{
    Super::DrawHUD();

    // Set up the text color and position for drawing
    FLinearColor TextColor = FLinearColor::White;
    FVector2D TextPosition = FVector2D(50, 50); // Starting position for the text

    // Convert differences to string
   /** FString PosDiffText = FString::Printf(TEXT("Position Difference: %s"), *PositionDifference.ToString());
    FString VelDiffText = FString::Printf(TEXT("Velocity Difference: %s"), *VelocityDifference.ToString());
    FString HeadDiffText = FString::Printf(TEXT("Heading Difference: %f"), HeadingDifference);

    // Draw the text on the HUD
    DrawText(PosDiffText, TextColor, TextPosition.X, TextPosition.Y, GEngine->GetSmallFont());
    DrawText(VelDiffText, TextColor, TextPosition.X, TextPosition.Y + 15, GEngine->GetSmallFont()); // Slightly below the previous text
    DrawText(HeadDiffText, TextColor, TextPosition.X, TextPosition.Y + 30, GEngine->GetSmallFont()); // Slightly below the previous text
    **/
    // Get the cube actor's location
/**   AActor* AIntruderCPP = UGameplayStatics::GetActorOfClass(GetWorld(), AIntruderCPP::StaticClass()); // Replace ACubeActor with your cube actor's class
   if (AIntruderCPP)
    {
        FVector Location = AIntruderCPP->GetActorLocation();
        FString LocationText = FString::Printf(TEXT("Intruder Location: X=%f, Y=%f, Z=%f"), Location.X, Location.Y, Location.Z);
        FVector Speed = AIntruderCPP->GetVelocity();
        FString SpeedText = FString::Printf(TEXT("\nIntruder Speed: %f"),&Speed);
        // Draw the location on the screen
        DrawText(LocationText, FColor::White, 50, 50, nullptr);
        DrawText(SpeedText, FColor::White, 50, 50, nullptr);
    }**/

}

void AMyHUD::CalculateAndDisplayDifferences(FVector OwnshipLocation, FVector OwnshipVelocity, float OwnshipHeading, FVector IntruderLocation, FVector IntruderVelocity, float IntruderHeading, FVector& PositionDifference, FVector& VelocityDifference, float& HeadingDifference)
{

    // Calculate and store position and velocity differences
    PositionDifference = OwnshipLocation - IntruderLocation;
    VelocityDifference = OwnshipVelocity - IntruderVelocity;
    HeadingDifference = OwnshipHeading - IntruderHeading;
    /** if (!Intruder || !Ownship) return;

     FVector IntruderLocation = Intruder->GetActorLocation();
     FVector OwnshipLocation = Ownship->GetActorLocation();



     // Calculate and store heading difference
     FRotator IntruderRotation = Intruder->GetActorRotation();
     FRotator OwnshipRotation = Ownship->GetActorRotation();
     HeadingDifference = FMath::FindDeltaAngleDegrees(OwnshipRotation.Yaw, IntruderRotation.Yaw);

     **/

     //FString TheFloatStr = FString::SanitizeFloat(HeadingDifference);
     //DrawText(*TheFloatStr, FColor::White, 50, 50, nullptr);
     //DrawText("VelocityDifference", FColor::White, 50, 50, nullptr)


}
