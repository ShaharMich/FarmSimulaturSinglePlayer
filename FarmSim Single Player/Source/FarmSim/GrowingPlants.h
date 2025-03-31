// Copyright to Shahar Michel, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ArrowComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Harvest.h"
#include "GrowingPlants.generated.h"

UCLASS()
class FARMSIM_API AGrowingPlants : public AActor
{
	GENERATED_BODY()
	
public:	
	AGrowingPlants();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	USceneComponent* RootComp;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	UArrowComponent* Point1;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	UArrowComponent* Point2;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	UArrowComponent* Point3;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	UHarvest* Harvest;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Seed")
	FName SeedName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Seed")
	FName ProductName;
};
