// Copyright to Shahar Michel, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NPC.generated.h"

UCLASS()
class FARMSIM_API ANPC : public ACharacter
{
    GENERATED_BODY()

public:
    ANPC();

protected:
    virtual void BeginPlay() override;

private:
    void UpdateAnimation(); 

    UPROPERTY(EditAnywhere, Category = "Animation")
    UAnimationAsset* WalkAnimation;

    UPROPERTY(EditAnywhere, Category = "Animation")
    UAnimationAsset* IdleAnimation;

public:	
    virtual void Tick(float DeltaTime) override;

    // AI Movement
    UPROPERTY(EditAnywhere, Category = "AI")
    class USplineComponent* PathSpline;

    UFUNCTION()
    void MoveToCounter();

    UPROPERTY(EditAnywhere, Category = "AI")
    FVector CounterLocation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    class UWidgetComponent* PurchaseWidget;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Purchase")
    FName DesiredProduct;

    void ChooseRandomProduct();

	UFUNCTION()
	void CompletePurchase();

    UPROPERTY(EditAnywhere, Category = "Interaction")
    class USphereComponent* InteractionSphere;

    void Interact();

};
