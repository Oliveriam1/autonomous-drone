#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SimulationManager.generated.h"

UCLASS()
class DRONE_API ASimulationManager : public AActor
{
	GENERATED_BODY()

public:
	ASimulationManager();

	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;
};
