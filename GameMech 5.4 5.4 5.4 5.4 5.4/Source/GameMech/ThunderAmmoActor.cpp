// Fill out your copyright notice in the Description page of Project Settings.


#include "ThunderAmmoActor.h"

// Sets default values
AThunderAmmoActor::AThunderAmmoActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AThunderAmmoActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AThunderAmmoActor::AfterHit(const AActor* otherActor, const UPrimitiveComponent* otherComp)
{
	const AActor* myactor;

	if (otherComp->ComponentHasTag("Enemy")) {
		//cast to

		myactor = Cast<AActor>(otherActor);

		//add Impulse

	}
	Destroy();

}

// Called every frame
void AThunderAmmoActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

