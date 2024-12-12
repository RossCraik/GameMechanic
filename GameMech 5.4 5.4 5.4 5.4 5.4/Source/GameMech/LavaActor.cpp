// Fill out your copyright notice in the Description page of Project Settings.


#include "LavaActor.h"

// Sets default values
ALavaActor::ALavaActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALavaActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ALavaActor::afterOverlap(const AActor* otherActor, const UPrimitiveComponent* otherComp)
{
	if (otherComp->ComponentHasTag("Enemy")) {
		
	}
}

// Called every frame
void ALavaActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
