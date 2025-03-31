// Copyright to Shahar Michel, All Rights Reserved.

#include "NPCSpawner.h"
#include "NPC.h"
#include "Engine/World.h"
#include "AIController.h"
#include "Kismet/KismetMathLibrary.h"

ANPCSpawner::ANPCSpawner()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ANPCSpawner::BeginPlay()
{
    Super::BeginPlay();

	SpawnLocation = GetActorLocation();
    
    SpawnNPC(nullptr); // Initial NPC spawn
}

void ANPCSpawner::SpawnNPC(AActor* DestroyedActor) 
{
    if (NPCClass)
    {
        FVector RandomOffset = FVector(FMath::RandRange(-100, 100), FMath::RandRange(-100, 100), 0);
        FVector FinalSpawnLocation = SpawnLocation + RandomOffset;

        UWorld* World = GetWorld();
        if (World)
        {
            ANPC* NewNPC = World->SpawnActor<ANPC>(NPCClass, FinalSpawnLocation, FRotator::ZeroRotator);
            if (NewNPC)
            {
                // Assign AIController properly
                AAIController* AIController = World->SpawnActor<AAIController>(AAIController::StaticClass());
                if (AIController)
                {
                    AIController->Possess(NewNPC);
                }

                // Ensure NPC is destroyed properly and respawned
                NewNPC->OnDestroyed.AddDynamic(this, &ANPCSpawner::SpawnNPC);                
            }
        }
    }
}







