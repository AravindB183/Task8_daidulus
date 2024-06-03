// This application is provided as is, without any support

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

USTRUCT(BlueprintType)
struct FParameters
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAA Parameters")
    float RCirWcb = 2000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAA Parameters")
    float RCirArt = 8000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAA Parameters")
    float RCirSst = 12000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAA Parameters")
    bool UpdateArtRadius = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAA Parameters")
    bool UpdateArtRadiusCheck = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAA Parameters")
    float Tt = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DAA Parameters")
    float RCirArtScale = 0.0f;
};

UCLASS()
class UEREFERENCEAPP_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();
    UFUNCTION(BlueprintCallable, Category = "DAA Calculation")
    void RasDaa(const FVector Ownship, const FVector Intruder, const FVector OwnshipHeadingSpeed, const FVector IntruderHeadingSpeed, float& StartAngle, float& EndAngle, int32& Alert, FParameters Parameters, FParameters& TestOutParameters);

    UFUNCTION(BlueprintCallable, Category = "Data Saving")
    void SaveDataIntoCsvFile(int32 FirstTimeEntry, const FVector LocationInDegreesofOwnship, const FVector LocationInXYZofOwnship, const float HeadingofOwnship, const float SpeedofOwnship, const FVector LocationInDegreesofIntruder, const FVector LocationInXYZofIntruder, const float HeadingofIntruder, const float SpeedofIntruder, float StartAngle, float EndAngle, int32 ThreatLevel);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
