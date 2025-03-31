// Copyright to Shahar Michel, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NPCSpawner.generated.h"

UCLASS()
class FARMSIM_API ANPCSpawner : public AActor
{
    GENERATED_BODY()

public:
    ANPCSpawner();

protected:
    virtual void BeginPlay() override;

public:
    UFUNCTION()
    void SpawnNPC(AActor* DestroyedActor);

    UPROPERTY(EditAnywhere, Category = "NPC")
    TSubclassOf<class ANPC> NPCClass;

    UPROPERTY(EditAnywhere, Category = "Spawn")
    FVector SpawnLocation;

	UPROPERTY()
	TArray<ANPC*> NPCQueue;
	
	const int32 MaxQueueSize = 5;
};

