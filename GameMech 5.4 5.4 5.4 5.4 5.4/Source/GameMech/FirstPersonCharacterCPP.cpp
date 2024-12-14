// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstPersonCharacterCPP.h"

#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/LocalPlayer.h"

// Sets default values
AFirstPersonCharacterCPP::AFirstPersonCharacterCPP()
{
 	
}

// Called when the game starts or when spawned
void AFirstPersonCharacterCPP::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFirstPersonCharacterCPP::CameraInput(const float& x, const float& y)
{
	AddControllerYawInput(x);
	AddControllerPitchInput(y);
}

void AFirstPersonCharacterCPP::MovementInput(const float& x, const float& y)
{
	AddMovementInput(GetActorRightVector(), x);

	AddMovementInput(GetActorForwardVector(), y);

}

void AFirstPersonCharacterCPP::JumpInput()
{
	ACharacter::Jump();
	
}

void AFirstPersonCharacterCPP::StopJumpInput()
{
	ACharacter::StopJumping();
}

// Called every frame
void AFirstPersonCharacterCPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFirstPersonCharacterCPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

