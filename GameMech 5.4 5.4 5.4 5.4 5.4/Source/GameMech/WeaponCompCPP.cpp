// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponCompCPP.h"

void UWeaponCompCPP::AfterShoot()
{
	int RandomInt = UKismetMathLibrary::RandomIntegerInRange(0, 10);

	if (RandomInt >= 0 && RandomInt <= 3) {

	}

	else if (RandomInt >= 4 && RandomInt <= 5) {

	}

	else if (RandomInt >= 6 && RandomInt <= 7) {

	}

	else if (RandomInt >= 8 && RandomInt <= 9) {

	}
}
