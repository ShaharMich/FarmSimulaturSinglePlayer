// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SaleSystem.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FARMSIM_API USaleSystem : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USaleSystem();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Storage")
    int32 WheatCount;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Storage")
    int32 FlourCount;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Storage")
    int32 SesameCount;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Storage")
    int32 TahiniCount;

    UFUNCTION(BlueprintCallable, Category = "Storage")
    void AddProduct(FString ProductName, int32 Amount);

    UFUNCTION(BlueprintCallable, Category = "Storage")
    void RemoveProduct(FString ProductName, int32 Amount);

	UFUNCTION(BlueprintCallable, Category = "Storage")
    int32 GetTotalProducts();

	UFUNCTION(BlueprintCallable, Category = "Storage")
    int32 IsAvailable(FName ProductName);

    UFUNCTION(BlueprintCallable, Category = "Budget")
    int GetProductPrice(FName ProductName);
};
