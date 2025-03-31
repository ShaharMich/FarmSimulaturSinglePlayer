// Copyright to Shahar Michel, All Rights Reserved.


#include "SaleSystem.h"

USaleSystem::USaleSystem()
{
	PrimaryComponentTick.bCanEverTick = true;

	WheatCount = 0;
    FlourCount = 0;
    SesameCount = 0;
    TahiniCount = 0;
}

void USaleSystem::BeginPlay()
{
	Super::BeginPlay();
	
}

void USaleSystem::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void USaleSystem::AddProduct(FString ProductName, int32 Amount)
{
    if (ProductName == "Wheat")
        WheatCount += Amount;
    else if (ProductName == "Flour")
        FlourCount += Amount;
    else if (ProductName == "Sesame")
        SesameCount += Amount;
    else if (ProductName == "Tahini")
        TahiniCount += Amount;
}

void USaleSystem::RemoveProduct(FString ProductName, int Amount)
{
    if (ProductName == "Wheat" && WheatCount >= Amount) WheatCount -= Amount;
    else if (ProductName == "Flour" && FlourCount >= Amount) FlourCount -= Amount;
    else if (ProductName == "Sesame" && SesameCount >= Amount) SesameCount -= Amount;
    else if (ProductName == "Tahini" && TahiniCount >= Amount) TahiniCount -= Amount;
}


int32 USaleSystem::GetTotalProducts()
{
	FString DebugMessage = FString::Printf(
        TEXT("You have in stock: Wheat: %d | Flour: %d | Sesame: %d | Tahini: %d"),
        WheatCount, FlourCount, SesameCount, TahiniCount
    );

    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, DebugMessage);
    return WheatCount + FlourCount + SesameCount + TahiniCount;
}


int32 USaleSystem::IsAvailable(FName ProductName)
{
    if (ProductName == "Wheat") return WheatCount;
    if (ProductName == "Flour") return FlourCount;
    if (ProductName == "Sesame") return SesameCount;
    if (ProductName == "Tahini") return TahiniCount;
    return 0; 
}

int USaleSystem::GetProductPrice(FName ProductName)
{
    if (ProductName == "Wheat") return 5;
    if (ProductName == "Flour") return 10;
    if (ProductName == "Sesame") return 8;
    if (ProductName == "Tahini") return 15;
    return 0; 
}
