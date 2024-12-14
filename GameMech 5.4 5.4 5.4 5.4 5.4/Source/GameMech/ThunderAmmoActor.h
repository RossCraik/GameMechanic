// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TestDummyActor.h"

#include "Kismet/GameplayStatics.h"

#include "ThunderAmmoActor.generated.h"



UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), Blueprintable)
class GAMEMECH_API AThunderAmmoActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AThunderAmmoActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable) void AfterHit(AActor* otherActor, const UPrimitiveComponent* otherComp);

	UPROPERTY(BlueprintReadWrite) FVector M_UpImpulseForce = FVector(0, 0, 10000);



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
