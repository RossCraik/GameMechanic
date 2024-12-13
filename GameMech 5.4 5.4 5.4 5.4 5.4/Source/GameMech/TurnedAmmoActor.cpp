// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnedAmmoActor.h"

// Sets default values
ATurnedAmmoActor::ATurnedAmmoActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATurnedAmmoActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATurnedAmmoActor::AfterHit(AActor* otherActor, const UPrimitiveComponent* otherComp)
{
	if (otherComp->ComponentHasTag("Enemy")) {
		
		
		otherActor->Tags[0] = FName("NotEnemy");
		Destroy();
		
	}
	else {
		Destroy();
	}
}

// Called every frame
void ATurnedAmmoActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

