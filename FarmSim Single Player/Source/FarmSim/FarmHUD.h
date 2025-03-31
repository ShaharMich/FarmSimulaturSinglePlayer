// Copyright to Shahar Michel, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FarmHUD.generated.h"

/**
 * 
 */
UCLASS()
class FARMSIM_API AFarmHUD : public AHUD
{
	GENERATED_BODY()
	

private:
    float CurrentBudget;

public:
    virtual void DrawHUD() override;

    void UpdateBudget(float NewBudget);
};

