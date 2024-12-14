// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "ProjectileAmmoActor.h"
#include "FireAmmoActor.h"
#include "ThunderAmmoActor.h"
#include "TurnedAmmoActor.h"
#include "FirstPersonCharacterCPP.h"

#include "WeaponCompCPP.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), Blueprintable)
class GAMEMECH_API UWeaponCompCPP : public USkeletalMeshComponent
{
	GENERATED_BODY()
	
protected:

	UPROPERTY(BlueprintReadWrite) TSubclassOf<AProjectileAmmoActor> spawnProjectile;
	UPROPERTY(BlueprintReadWrite) TSubclassOf<AThunderAmmoActor> spawnThunder;
	UPROPERTY(BlueprintReadWrite) TSubclassOf<AFireAmmoActor> spawnFire;
	UPROPERTY(BlueprintReadWrite) TSubclassOf<ATurnedAmmoActor> spawnTurned;



	UPROPERTY(BlueprintReadWrite) int M_RandInt = 0;
	UPROPERTY(BlueprintReadWrite) FVector M_ProjectileOffset = FVector(100, 0, -10);

	UPROPERTY(BlueprintReadWrite) AFirstPersonCharacterCPP* M_FirstPersonCharacter;



	UFUNCTION(BlueprintCallable) void AfterShoot(const FVector& Location, const FRotator& rotation, int& RandomInt);

	UFUNCTION(BlueprintCallable)void AfterSpawn(const FVector& Location);

	UFUNCTION(BlueprintCallable) void PreSpawn(FVector& Location, FRotator& rotation);

private:

	/** The Character holding this weapon*/
	AFirstPersonCharacterCPP* Character;

};
