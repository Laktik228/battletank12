// Fill out your copyright notice in the Description page of Project Settings.

#include "Tank.h"
#include "battletank1.h"




// Sets default values
ATank::ATank()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// No need to protect points as added at construction

}


// Called when the game starts or when spawned
void ATank::BeginPlay()
{
	Super::BeginPlay();
}




