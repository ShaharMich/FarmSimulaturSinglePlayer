// Copyright to Shahar Michel, All Rights Reserved.


#include "NPC.h"
#include "Components/SplineComponent.h"
#include "Components/SphereComponent.h"
#include "AIController.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Components/WidgetComponent.h"

ANPC::ANPC()
{
    PrimaryActorTick.bCanEverTick = true;

	CounterLocation = FVector(-120.f, 280.f, 0.f);
    AIControllerClass = AAIController::StaticClass();
    // Spline for movement
    PathSpline = CreateDefaultSubobject<USplineComponent>(TEXT("PathSpline"));
    PathSpline->SetupAttachment(RootComponent);

    // Widget for displaying purchase intention
    PurchaseWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("PurchaseWidget"));
    PurchaseWidget->SetupAttachment(RootComponent);

    InteractionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionSphere"));
    InteractionSphere->SetupAttachment(RootComponent);
    InteractionSphere->SetSphereRadius(300.f);
    InteractionSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    InteractionSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
    InteractionSphere->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

}

void ANPC::BeginPlay()
{
    Super::BeginPlay();

    AAIController* AIController = Cast<AAIController>(GetController());

    if (PurchaseWidget)
    {
        PurchaseWidget->SetVisibility(true);
        PurchaseWidget->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
        PurchaseWidget->SetWidgetSpace(EWidgetSpace::World);  // This makes the widget appear in the world.
        PurchaseWidget->SetRelativeLocation(FVector(0.f, 0.f, 100.f)); // Adjust the height as needed.

    }
    
	ChooseRandomProduct();

    MoveToCounter();
}

void ANPC::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    UpdateAnimation();
}

void ANPC::MoveToCounter()
{
    AAIController* AIController = Cast<AAIController>(GetController());
    
    if (!AIController) // If no AIController, try again after a delay
    {
        GetWorldTimerManager().SetTimerForNextTick(this, &ANPC::MoveToCounter);
        return;
    }


    UE_LOG(LogTemp, Warning, TEXT("Moving to: %s"), *CounterLocation.ToString());
    AIController->MoveToLocation(CounterLocation);
}


void ANPC::ChooseRandomProduct()
{
    TArray<FName> Products = { TEXT("Wheat"), TEXT("Sesame"), TEXT("Flour"), TEXT("Tahini") };
    int32 RandomIndex = FMath::RandRange(0, Products.Num() - 1);
    DesiredProduct = Products[RandomIndex];

    if (PurchaseWidget && PurchaseWidget->GetUserWidgetObject())
    {
        UUserWidget* Widget = PurchaseWidget->GetUserWidgetObject();
        if (Widget)
        {
            UTextBlock* ProductText = Cast<UTextBlock>(Widget->GetWidgetFromName(TEXT("ProductTextBlock")));  // Ensure the TextBlock's name matches the one in UMG

            if (ProductText)
            {
                ProductText->SetText(FText::FromName(DesiredProduct)); 
            }
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("NPC wants to buy: %s"), *DesiredProduct.ToString());
}


void ANPC::CompletePurchase()
{
    UE_LOG(LogTemp, Warning, TEXT("NPC bought %s"), *DesiredProduct.ToString());
    Destroy(); // Remove NPC after buying
}


void ANPC::UpdateAnimation()
{
    if (GetMesh() && GetCharacterMovement())
    {
        float Speed = GetCharacterMovement()->Velocity.Size(); // Get movement speed
        
        if (Speed > 10.0f) // If NPC is moving, play walking animation
        {
            if (WalkAnimation)
            {
                GetMesh()->PlayAnimation(WalkAnimation, true);
            }
        }
        else // If NPC is idle, play idle animation
        {
            if (IdleAnimation)
            {
                GetMesh()->PlayAnimation(IdleAnimation, true);
            }
        }
    }
}

