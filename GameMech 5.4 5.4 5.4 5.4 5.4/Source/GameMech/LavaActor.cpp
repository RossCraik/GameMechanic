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

void ALavaActor::afterOverlap(AActor* otherActor, const UPrimitiveComponent* otherComp)
{
	if (otherComp->ComponentHasTag("Enemy")) {


		if (ATestDummyActor* dumby = Cast<ATestDummyActor>(otherActor)) {

			dumby->Destroy();



		}



	}
}

void ALavaActor::TimertoDestroy()
{


	GetWorld()->GetTimerManager().SetTimer(TimerHandle_AttackDelay, this, &ALavaActor::DestroyThisLava, 5, false);
}

void ALavaActor::DestroyThisLava()
{
	Destroy();
}

// Called every frame
void ALavaActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

