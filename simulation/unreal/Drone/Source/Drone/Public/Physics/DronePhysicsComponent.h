#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DronePhysicsComponent.generated.h"

UCLASS(ClassGroup=(Drone), meta=(BlueprintSpawnableComponent))
class DRONE_API UDronePhysicsComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UDronePhysicsComponent();
};
