#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DroneMotorComponent.generated.h"

UCLASS(ClassGroup=(Drone), meta=(BlueprintSpawnableComponent))
class DRONE_API UDroneMotorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UDroneMotorComponent();
};
