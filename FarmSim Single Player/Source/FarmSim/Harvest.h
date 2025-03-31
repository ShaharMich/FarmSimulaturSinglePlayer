// Copyright to Shahar Michel, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HarvestGround.h"
#include "Harvest.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FARMSIM_API UHarvest : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UHarvest();

protected:
	
	void BeginPlay();

public:	
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction);

	FVector PlantedPoint;
	FVector WateredPoint;
	FVector RippedPoint;

	bool ArePointsSet;

	UPROPERTY(EditAnywhere)
	float MoveTime;

	UPROPERTY(EditAnywhere)
	TArray<AActor*>TriggerActors;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	bool IsActivated;

	UFUNCTION(BlueprintCallable)
	void SetPoints(FVector Point1, FVector Point2, FVector Point3);

	UFUNCTION()
	void OnHarvestGroundPlanted();

	UFUNCTION()
	void OnHarvestGroundWatered();

	UFUNCTION()
	void OnHarvestGroundRipped();

	UPROPERTY(EditAnywhere)
    EHarvestState CurrentState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Crop")
	FName CropName = "DefaultCrop";
		
};
