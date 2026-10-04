#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "DronePawn.generated.h"

UCLASS()
class DRONE_API ADronePawn : public APawn
{
	GENERATED_BODY()

public:
	ADronePawn();

	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;
};
