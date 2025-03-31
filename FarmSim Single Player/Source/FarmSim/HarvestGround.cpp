// Copyright to Shahar Michel, All Rights Reserved.

#include "HarvestGround.h"

AHarvestGround::AHarvestGround()
{
 	
	PrimaryActorTick.bCanEverTick = true;

	bReplicates = true;
	SetReplicateMovement(true);

	CurrentState = EHarvestState::Ripped;
	Activated = false;

	SeedName = FName("Seed");

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

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComp);
	Mesh->SetIsReplicated(true);

	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if(MeshAsset.Succeeded())
	{
		Mesh->SetStaticMesh(MeshAsset.Object);
		Mesh->SetRelativeScale3D(FVector(1.0f, 1.5f, 0.1f));
		Mesh->SetRelativeLocation(FVector(0.0f, 0.0f, 7.0f));
	}
	
}

void AHarvestGround::BeginPlay()
{
	Super::BeginPlay();
	
	TriggerMesh->SetVisibility(false);
	TriggerMesh->SetCollisionProfileName(FName("OverlapAll"));

}

void AHarvestGround::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}

void AHarvestGround::ActivateHarvesting()
{
	if(HasAuthority())
	{
		TArray<AActor*> OverlappingActors;
		AActor* TriggerActor = 0;
		TriggerMesh->GetOverlappingActors(OverlappingActors);

		for(int ActorIdx = 0; ActorIdx < OverlappingActors.Num(); ++ActorIdx)
		{
			AActor* A = OverlappingActors[ActorIdx];
			if(A->ActorHasTag("Player"))
			{
				TriggerActor = A;
				break;
			}
			
		}

		if(TriggerActor)
		{
			if (CurrentState == EHarvestState::Ripped)
			{
				CurrentState = EHarvestState::Planted;
				OnPlanted.Broadcast();
			}
			else if (CurrentState == EHarvestState::Planted)
			{
				CurrentState = EHarvestState::Watered;
				OnWatered.Broadcast();
			}
			else if (CurrentState == EHarvestState::Watered)
			{
				CurrentState = EHarvestState::Ripped;
				OnRipped.Broadcast();
			}
		}
	}
}

