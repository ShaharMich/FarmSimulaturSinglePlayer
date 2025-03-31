// Copyright to Shahar Michel, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProductsStorage.generated.h"

UCLASS()
class FARMSIM_API AProductsStorage : public AActor
{
	GENERATED_BODY()
	
public:	
	AProductsStorage();

protected:
	void BeginPlay();

public:	
	void Tick(float DeltaTime);

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	USceneComponent* RootComp;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	UStaticMeshComponent* TriggerMesh;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	UStaticMeshComponent* Mesh;
};
