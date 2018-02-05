// Fill out your copyright notice in the Description page of Project Settings.

#include "Pickup.h"
#include "Components/StaticMeshComponent.h"
#include "BatteryCollector.h"

// Sets default values
APickup::APickup() {
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Initialize bIsActive to be true.
	bIsActive = true;

	//Create the static mesh component
	pickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupMesh"));
	SetRootComponent(pickupMesh);
}

// Called when the game starts or when spawned
void APickup::BeginPlay() {
	Super::BeginPlay();
}

// Returns active state
bool APickup::IsActive() {
	return bIsActive;
}

// Changes active state
void APickup::SetActive(bool newPickupState) {
	bIsActive = newPickupState;
}