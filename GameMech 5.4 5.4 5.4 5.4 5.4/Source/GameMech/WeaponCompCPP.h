// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "WeaponCompCPP.generated.h"
#include "Kismet/KismetMathLibrary.h"

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

	UFUNCTION(BlueprintCallable) void AfterShoot();

};
