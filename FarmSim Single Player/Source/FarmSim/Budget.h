// Copyright to Shahar Michel, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Budget.generated.h"

UCLASS(Blueprintable)
class FARMSIM_API UBudget : public UActorComponent
{
    GENERATED_BODY()

private:
    float CurrentBudget;

public:
    UBudget();

    UFUNCTION(BlueprintCallable, Category = "Budget")
    float GetBudget() const;

    UFUNCTION(BlueprintCallable, Category = "Budget")
    void DecreaseBudget(float Amount);

    UFUNCTION(BlueprintCallable, Category = "Budget")
    void IncreaseBudget(float Amount);

    UFUNCTION(BlueprintCallable, Category = "Budget")
    bool CanAfford(float Amount) const;

};
