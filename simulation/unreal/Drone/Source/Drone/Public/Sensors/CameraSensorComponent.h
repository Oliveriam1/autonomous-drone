#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CameraSensorComponent.generated.h"

UCLASS(ClassGroup=(Drone), meta=(BlueprintSpawnableComponent))
class DRONE_API UCameraSensorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UCameraSensorComponent();
};
