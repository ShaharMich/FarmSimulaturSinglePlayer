// Copyright to Shahar Michel, All Rights Reserved.

#include "ProcessingMachine.h"
#include "FarmSimCharacter.h"
#include "Engine/World.h"

AProcessingMachine::AProcessingMachine()
{
	PrimaryActorTick.bCanEverTick = true;
	bIsProcessing = false;

	PrimaryActorTick.bCanEverTick = true;

	bReplicates = true;
	SetReplicateMovement(true);

	RequiredSeedType = "Ingredient";
    ProcessedProduct = "Product";

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	SetRootComponent(RootComp);

	TriggerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TriggerMesh"));
	TriggerMesh->SetupAttachment(RootComp);
	TriggerMesh->SetIsReplicated(true);

	auto TriggerMeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if(TriggerMeshAsset.Succeeded())
	{
		TriggerMesh->SetStaticMesh(TriggerMeshAsset.Object);
		TriggerMesh->SetRelativeScale3D(FVector(1.5f, 2.0f, 0.5f));
		TriggerMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 10.0f));
	}
}

void AProcessingMachine::BeginPlay()
{
	Super::BeginPlay();
}

void AProcessingMachine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AProcessingMachine::ActivateProcessing(AFarmSimCharacter* Player)
{
    if (bIsProcessing || !Player) return;

    // Check if the player has a seed
    if (Player->HasSeeds)
    {
        if (Player && Player->HeldSeed.IsEqual(RequiredSeedType, ENameCase::IgnoreCase))
        {
            bIsProcessing = true;
            Player->HasSeeds = false;
            Player->HeldSeed = "Seed";

            GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, FString::Printf(TEXT("Processing %s..."), *RequiredSeedType.ToString()));

            // Start a timer to process the seed
            FTimerHandle ProcessingTimer;
            GetWorld()->GetTimerManager().SetTimer(ProcessingTimer, [this, Player]()
            {
                Player->HeldSeed = ProcessedProduct;

                GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, FString::Printf(TEXT("You received %s!"), *ProcessedProduct.ToString()));

                bIsProcessing = false; // Reset processing flag

            }, 3.0f, false);

        }
        else
        {
            // Inform the player they don't have the correct seed
            GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("You don't have the correct seed to process!"));
        }
    }
    else
    {
        // Inform the player if they don't have a seed or if it's not in the right state
        GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("You need to hold a seed to use the machine!"));
    }
}



void AProcessingMachine::ProcessByCharacter(AFarmSimCharacter* Character)
{
    if (Character)
    {
        
    }
}
