#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GPSSensorComponent.generated.h"

UCLASS(ClassGroup=(Drone), meta=(BlueprintSpawnableComponent))
class DRONE_API UGPSSensorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UGPSSensorComponent();
};
