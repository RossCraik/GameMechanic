// Fill out your copyright notice in the Description page of Project Settings.


#include "FireAmmoActor.h"

// Sets default values
AFireAmmoActor::AFireAmmoActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFireAmmoActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFireAmmoActor::AfterHit(const AActor* otherActor, const UPrimitiveComponent* otherComp, FTransform& MakeTransform)
{

	FRotator rotation = FRotator(0.0, 0.0, 0.0);
	FVector scale = FVector(1.0, 1.0, 1.0);
	FVector location;
	
	if (otherComp->ComponentHasTag("Enemy")) {
		location = otherActor->GetActorLocation();
		location = location * FVector(1.0, 1.0, 0.0);
		MakeTransform = UKismetMathLibrary::MakeTransform(location, rotation, scale);

		GetWorld()->SpawnActor<ALavaActor>(spawnLava, location, rotation);
	}
	
	Destroy();
}


// Called every frame
void AFireAmmoActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

