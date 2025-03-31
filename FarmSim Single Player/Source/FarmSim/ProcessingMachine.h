// Copyright to Shahar Michel, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FarmSimCharacter.h"
#include "Harvest.h"
#include "ProcessingMachine.generated.h"

class AFarmSimCharacter;

UCLASS()
class FARMSIM_API AProcessingMachine : public AActor
{
	GENERATED_BODY()
	
public:	
	AProcessingMachine();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	USceneComponent* RootComp;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	UStaticMeshComponent* TriggerMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Processing")
	FName RequiredSeedType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Processing")
	FName ProcessedProduct;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Processing")
	bool bIsProcessing;

	UFUNCTION(BlueprintCallable)
	void ActivateProcessing(AFarmSimCharacter* Player);

	void ProcessByCharacter(AFarmSimCharacter* Character);

	void ProcessSeed();
};

