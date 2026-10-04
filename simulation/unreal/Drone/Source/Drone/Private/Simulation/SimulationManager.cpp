#include "Simulation/SimulationManager.h"

ASimulationManager::ASimulationManager()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASimulationManager::BeginPlay()
{
	Super::BeginPlay();
}

void ASimulationManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
