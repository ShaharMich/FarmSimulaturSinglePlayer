// Copyright to Shahar Michel, All Rights Reserved.

#include "FarmHUD.h"
#include "Kismet/GameplayStatics.h"
#include "Budget.h"

UBudget::UBudget()
{
    CurrentBudget = 50.0f; // Initial budget
}

float UBudget::GetBudget() const
{
    return CurrentBudget;
}

void UBudget::DecreaseBudget(float Amount)
{
    if (CanAfford(Amount))
    {
        CurrentBudget -= Amount;
        CurrentBudget = FMath::Max(CurrentBudget, 0.0f);
        APlayerController* Player = UGameplayStatics::GetPlayerController(GetWorld(), 0);
        if (Player)
        {
            AFarmHUD* HUD = Cast<AFarmHUD>(Player->GetHUD());
            if (HUD)
            {
                HUD->UpdateBudget(CurrentBudget);
            }
        }
    }
}

void UBudget::IncreaseBudget(float Amount)
{
    CurrentBudget += Amount;
    APlayerController* Player = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (Player)
    {
        AFarmHUD* HUD = Cast<AFarmHUD>(Player->GetHUD());
        if (HUD)
        {
            HUD->UpdateBudget(CurrentBudget);
        }
    }
}

bool UBudget::CanAfford(float Amount) const
{
    return CurrentBudget >= Amount;
}
