// Fill out your copyright notice in the Description page of Project Settings.


#include "TestDummyActor.h"

// Sets default values
ATestDummyActor::ATestDummyActor()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestDummyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestDummyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATestDummyActor::AfterTick()
{


	if (GetActorLocation().Z > 3000)
	{
		Destroy();
	}
}

// Called to bind functionality to input
void ATestDummyActor::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ATestDummyActor::movements()
{

}