#include "Drone/DronePawn.h"
#include "Components/SceneComponent.h"

ADronePawn::ADronePawn()
{
	PrimaryActorTick.bCanEverTick = true;
	SetRootComponent(CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot")));
}

void ADronePawn::BeginPlay()
{
	Super::BeginPlay();
}

void ADronePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
