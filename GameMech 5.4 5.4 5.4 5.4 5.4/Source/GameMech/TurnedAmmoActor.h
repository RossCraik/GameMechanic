// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "kismet/KismetArrayLibrary.h"

#include "TurnedAmmoActor.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), Blueprintable)

class GAMEMECH_API ATurnedAmmoActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATurnedAmmoActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable) void AfterHit(const AActor* otherActor, const UPrimitiveComponent* otherComp);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
