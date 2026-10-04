#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IMUSensorComponent.generated.h"

UCLASS(ClassGroup=(Drone), meta=(BlueprintSpawnableComponent))
class DRONE_API UIMUSensorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UIMUSensorComponent();
};
