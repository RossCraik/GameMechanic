// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "FireAmmoActor.h"
#include "ThunderAmmoActor.h"
#include "TurnedAmmoActor.h"

#include "WeaponCompCPP.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), Blueprintable)
class GAMEMECH_API UWeaponCompCPP : public USkeletalMeshComponent
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(BlueprintReadWrite) int M_RandInt = 0;
	UPROPERTY(BlueprintReadWrite) FVector M_ProjectileOffset = FVector(100, 0, -10);

	UFUNCTION(BlueprintCallable) void AfterShoot(const FTransform MakeTransform, const FVector Location);

	UFUNCTION(BlueprintCallable)void AfterSpawn();

	UFUNCTION(BlueprintCallable) void actorspawnIG(const FTransform& MakeTransform, const FVector& Location, const FRotator& rotation);

	UFUNCTION(BlueprintCallable) void PreSpawn(FTransform& MakeTransform, FVector& Location, FRotator& rotation);

};
