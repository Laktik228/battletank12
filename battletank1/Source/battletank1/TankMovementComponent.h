// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NavMovementComponent.h"
#include "TankMovementComponent.generated.h"

class UTankTrack;
/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BATTLETANK1_API UTankMovementComponent : public UNavMovementComponent
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void Initialise(UTankTrack* RightTrack, UTankTrack* LeftTrack);
	UFUNCTION(BlueprintCallable)
	void IntendMoveForward(float Throw);

private:
	UTankTrack* RightTrack = nullptr;
	UTankTrack* LeftTrack = nullptr;
};
