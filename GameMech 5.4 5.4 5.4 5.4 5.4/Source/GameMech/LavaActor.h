// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestDummyActor.h"
#include "Kismet/KismetMathLibrary.h"

#include "LavaActor.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), Blueprintable)
class GAMEMECH_API ALavaActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALavaActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable) void afterOverlap(AActor* otherActor, const UPrimitiveComponent* otherComp);

	UFUNCTION(BlueprintCallable) void TimertoDestroy();

	UFUNCTION(BlueprintCallable) void DestroyThisLava();


	FTimerHandle TimerHandle_AttackDelay;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
