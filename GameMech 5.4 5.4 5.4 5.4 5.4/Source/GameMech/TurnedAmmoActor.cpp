// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnedAmmoActor.h"

// Sets default values
ATurnedAmmoActor::ATurnedAmmoActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATurnedAmmoActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATurnedAmmoActor::AfterHit(const AActor* otherActor, const UPrimitiveComponent* otherComp)
{
	if (otherComp->ComponentHasTag("Enemy")) {


		otherActor->CanModify();

		otherActor->Tags;

		TArray<FName> NewTags;

		// Iterate over the current tags and add tags to NewTags, excluding the one we want to remove
		for (const FName& Tag : otherActor->Tags)
		{
			if (Tag != "Enemy")
			{
				NewTags.Add(Tag);
			}
		}

		// Replace the Actor's tags with the filtered list (excluding the tag to remove)
		//otherActor->Tags = NewTags;




		Destroy();
		
	}
	else {
		Destroy();
	}
}

// Called every frame
void ATurnedAmmoActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

