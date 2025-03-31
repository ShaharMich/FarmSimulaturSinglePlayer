// Copyright to Shahar Michel, All Rights Reserved.

#include "Harvest.h"
#include "Math/UnrealMathUtility.h"


UHarvest::UHarvest()
{
	PrimaryComponentTick.bCanEverTick = true;

	SetIsReplicatedByDefault(true);

	MoveTime = 3.0f;
	ArePointsSet = false;
	IsActivated = false;

	PlantedPoint = FVector::Zero();
	WateredPoint = FVector::Zero();
	RippedPoint = FVector::Zero();
	CurrentState = EHarvestState::Ripped;
	
}


void UHarvest::SetPoints(FVector Point1, FVector Point2, FVector Point3)
{
	if(Point1 == Point2 && Point2 == Point3) return;

	PlantedPoint = Point1;
	WateredPoint = Point2;
	RippedPoint = Point3;
}


void UHarvest::BeginPlay()
{
	Super::BeginPlay();

	for(AActor* TA : TriggerActors)
	{
		AHarvestGround* HarvestGround = Cast<AHarvestGround>(TA);
		if (HarvestGround)
		{
			HarvestGround->OnPlanted.AddDynamic(this, &UHarvest::OnHarvestGroundPlanted);
			HarvestGround->OnWatered.AddDynamic(this, &UHarvest::OnHarvestGroundWatered);
			HarvestGround->OnRipped.AddDynamic(this, &UHarvest::OnHarvestGroundRipped);
		}
	}
	
}


void UHarvest::OnHarvestGroundPlanted()
{
	CurrentState = EHarvestState::Planted;
	FString ActorName = CropName.ToString(); 
	FString Message = ActorName + TEXT(" has been Planted!");
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, Message);
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *Message);
}

void UHarvest::OnHarvestGroundWatered()
{
	CurrentState = EHarvestState::Watered;
	FString ActorName = CropName.ToString(); 
	FString Message = ActorName + TEXT(" has been Watered!");
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, Message);
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *Message);
}

void UHarvest::OnHarvestGroundRipped()
{
	CurrentState = EHarvestState::Ripped;
	FString ActorName = CropName.ToString(); 
	FString Message = ActorName + TEXT(" has been Ripped!");
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, Message);
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *Message);
}



void UHarvest::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	AActor* MyOwner = GetOwner();
	if (MyOwner && MyOwner->HasAuthority())
	{
		FVector CurrentLocation = MyOwner->GetActorLocation();
		float Speed = FVector::Distance(RippedPoint, WateredPoint) / MoveTime;
		FVector TargetLocation = (CurrentState == EHarvestState::Planted) ? PlantedPoint : 
                      (CurrentState == EHarvestState::Watered) ? WateredPoint : 
                      RippedPoint;
		if (!CurrentLocation.Equals(TargetLocation))
		{
			FVector NewLocation = FMath::VInterpConstantTo(CurrentLocation, TargetLocation, DeltaTime, Speed);
			MyOwner->SetActorLocation(NewLocation);
		}
	}
}



