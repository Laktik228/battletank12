// Fill out your copyright notice in the Description page of Project Settings.

#include "TankMovementComponent.h"
#include "TankTrack.h"

void UTankMovementComponent::Initialise(UTankTrack* RightTrackToSet, UTankTrack* LeftTrackToSet) {
	if (!RightTrackToSet || !LeftTrackToSet) { return; }
	RightTrack = RightTrackToSet;
	LeftTrack = LeftTrackToSet;
}
void UTankMovementComponent::IntendMoveForward(float Throw)
{
	LeftTrack->SetThrottle(Throw);
	RightTrack->SetThrottle(Throw);
}


