// Copyright to Shahar Michel, All Rights Reserved.

#include "GrowingPlants.h"

AGrowingPlants::AGrowingPlants()
{
	PrimaryActorTick.bCanEverTick = true;

	bReplicates = true;
	SetReplicateMovement(true);

	SeedName = FName("Seed");
	ProductName = FName("Product");

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	SetRootComponent(RootComp);

	Point1 = CreateDefaultSubobject<UArrowComponent>(TEXT("Point1"));
	Point1->SetupAttachment(RootComp);
	Point1->SetRelativeLocation(FVector(0.0f, 0.0f, -120.0f));

	Point2 = CreateDefaultSubobject<UArrowComponent>(TEXT("Point2"));
	Point2->SetupAttachment(RootComp);
	Point2->SetRelativeLocation(FVector(0.0f, 0.0f, -30.0f));

	Point3 = CreateDefaultSubobject<UArrowComponent>(TEXT("Point3"));
	Point3->SetupAttachment(RootComp);
	Point3->SetRelativeLocation(FVector(0.0f, 0.0f, -210.0f));

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComp);
	Mesh->SetIsReplicated(true);

	Harvest = CreateDefaultSubobject<UHarvest>(TEXT("Harvest"));

}


void AGrowingPlants::BeginPlay()
{
	Super::BeginPlay();

	FVector PlantPoint = GetActorLocation() + Point1->GetRelativeLocation();
	FVector WaterPoint = GetActorLocation() + Point2->GetRelativeLocation();
	FVector RippPoint = GetActorLocation() + Point3->GetRelativeLocation();

	Harvest->SetPoints(PlantPoint, WaterPoint, RippPoint);
	
}


void AGrowingPlants::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

