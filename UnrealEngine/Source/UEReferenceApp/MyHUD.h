// This application is provided as is, without any support

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyHUD.generated.h"

/**
 * 
 */
UCLASS()
class UEREFERENCEAPP_API AMyHUD : public AHUD
{
	GENERATED_BODY()
	
public:
    // Override the DrawHUD method
    virtual void DrawHUD() override;
    // Function to calculate differences - make it BlueprintCallable to expose to Blueprints
    UFUNCTION(BlueprintCallable, Category = "HUD Data")
    void CalculateAndDisplayDifferences(FVector OwnshipLocation, FVector OwnshipVelocity, float OwnshipHeading, FVector IntruderLocation, FVector IntruderVelocity, float IntruderHeading, FVector& PositionDifference, FVector& VelocityDifference, float& HeadingDifference);

    /**public:
        // Variables to store the calculated differences - make these BlueprintReadWrite to expose to Blueprints
        UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "HUD Data")
        FVector PositionDifference;

        UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "HUD Data")
        FVector VelocityDifference;

        UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "HUD Data")
        float HeadingDifference;
        **/
};
