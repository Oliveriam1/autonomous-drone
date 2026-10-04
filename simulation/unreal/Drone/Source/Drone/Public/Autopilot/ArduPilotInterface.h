#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ArduPilotInterface.generated.h"

UCLASS(ClassGroup=(Drone), meta=(BlueprintSpawnableComponent))
class DRONE_API UArduPilotInterface : public UActorComponent
{
	GENERATED_BODY()

public:
	UArduPilotInterface();
};
