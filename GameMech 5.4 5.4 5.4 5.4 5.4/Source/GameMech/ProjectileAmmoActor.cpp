// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileAmmoActor.h"

// Sets default values
AProjectileAmmoActor::AProjectileAmmoActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AProjectileAmmoActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AProjectileAmmoActor::AfterHit(AActor* otherActor, const UPrimitiveComponent* otherComp)
{
	Destroy();
}

// Called every frame
void AProjectileAmmoActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

