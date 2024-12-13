// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponCompCPP.h"


void UWeaponCompCPP::OnPickUp()
{
	if (AFirstPersonCharacterCPP* castobj = Cast<AFirstPersonCharacterCPP>(GetOwner()))
	{
		M_FirstPersonCharacter = castobj;
		
		
	}
	

}


void UWeaponCompCPP::AfterShoot(const FVector& Location, const FRotator& rotation, int &RandomInt)
{
	RandomInt = UKismetMathLibrary::RandomIntegerInRange(0, 9);



	if (RandomInt >= 0 && RandomInt <= 3) {
		GetWorld()->SpawnActor<AProjectileAmmoActor>(spawnProjectile, Location, rotation);
	}

	else if (RandomInt >= 4 && RandomInt <= 5) {
		GetWorld()->SpawnActor<AThunderAmmoActor>(spawnThunder, Location, rotation);
	}

	else if (RandomInt >= 6 && RandomInt <= 7) {
		GetWorld()->SpawnActor<AFireAmmoActor>(spawnFire, Location, rotation);
	}

	else if (RandomInt >= 8 && RandomInt <= 9) {
		GetWorld()->SpawnActor<ATurnedAmmoActor>(spawnTurned, Location, rotation);
	}
}

void UWeaponCompCPP::AfterSpawn(const FVector& Location)
{
	
	
	//UGameplayStatics::PlaySoundAtLocation(GetWorld(), "Content/FPWeapon/Audio/FirstPersonTemplateWeaponFire02.uasset", Location);



}



void UWeaponCompCPP::PreSpawn(FVector& Location, FRotator& rotation)
{

	APlayerCameraManager* myCameraManager = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0);
	rotation = myCameraManager->GetCameraRotation();

	FVector rotationResult = rotation.RotateVector(M_ProjectileOffset);
	FVector sockLocal = GetSocketLocation("Ammo");

	Location = (rotationResult + sockLocal);

}