// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"

UENUM()
enum class EFiringState: uint8 
{
	Locked,	
	Aiming,
	Reloading
};

// Forward Declaration
class UTankBarrel;
class AProjectile;
class UTankTurret;

// Holds barrel's properties and Elevate method
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BATTLETANK1_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = Firing)
	void Fire();
	// Sets default values for this component's properties
	UFUNCTION(BlueprintCallable)
	void Initialise(UTankBarrel* BarrelToSet, UTankTurret* TurretToSet);
	void AimAt(FVector HitLocation);

protected:
	UPROPERTY(BlueprintReadOnly)
	EFiringState FiringState = EFiringState::Locked;
private:
	UTankAimingComponent();
	UTankBarrel* Barrel = nullptr;
	UTankTurret* Turret = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = Firing)
	float LaunchSpeed = 4000;
	
	void MoveBarrelTowards(FVector AimDirection);

	UPROPERTY(EditAnywhere, Category = Setup)
	TSubclassOf<AProjectile> ProjectileBlueprint;


	float ReloadTime = 3;
	double LastTimeShot = 0;

};