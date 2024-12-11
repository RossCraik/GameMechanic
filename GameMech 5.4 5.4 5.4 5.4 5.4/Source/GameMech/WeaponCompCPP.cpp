// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponCompCPP.h"

void UWeaponCompCPP::AfterShoot(const FTransform MakeTransform, const FVector Location)
{
	int RandomInt = UKismetMathLibrary::RandomIntegerInRange(0, 10);



	if (RandomInt >= 0 && RandomInt <= 3) {
		//GetWorld()->SpawnActor<>();
	}

	else if (RandomInt >= 4 && RandomInt <= 5) {
		GetWorld()->SpawnActor<AThunderAmmoActor>()->AddActorWorldTransform(MakeTransform);
		//GetWorld()->SpawnActorAbsolute(MakeTransform);
	}

	else if (RandomInt >= 6 && RandomInt <= 7) {
		GetWorld()->SpawnActor<AFireAmmoActor>();
	}

	else if (RandomInt >= 8 && RandomInt <= 9) {
		GetWorld()->SpawnActor<ATurnedAmmoActor>();
	}
}

void UWeaponCompCPP::AfterSpawn()
{
	//
	// UGameplayStatics::PlaySoundAtLocation();

}

void UWeaponCompCPP::actorspawnIG(const FTransform& MakeTransform, const FVector& Location, const FRotator& rotation)
{

	FActorSpawnParameters SpawnInfo;
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	GetWorld()->SpawnActor<AThunderAmmoActor>(AThunderAmmoActor::StaticClass(), Location, rotation, SpawnInfo);
}

void UWeaponCompCPP::PreSpawn(FTransform& MakeTransform, FVector& Location, FRotator& rotation)
{

	APlayerCameraManager* myCameraManager = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0);
	rotation = myCameraManager->GetCameraRotation();

	FVector rotationResult = rotation.RotateVector(M_ProjectileOffset);
	FVector sockLocal = GetSocketLocation("Ammo");

	Location = (rotationResult + sockLocal);
	MakeTransform = UKismetMathLibrary::MakeTransform(Location, rotation, FVector(1, 1, 1));

}