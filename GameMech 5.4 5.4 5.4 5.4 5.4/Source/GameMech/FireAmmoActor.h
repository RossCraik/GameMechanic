// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"

#include "FireAmmoActor.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), Blueprintable)
class GAMEMECH_API AFireAmmoActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFireAmmoActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable) void AfterHit(const AActor* otherActor, const UPrimitiveComponent* otherComp, FTransform& MakeTransform);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
