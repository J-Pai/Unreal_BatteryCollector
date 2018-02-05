// Fill out your copyright notice in the Description page of Project Settings.
#include "BatteryPickup.h"
// If you get the error "Pointer to incomplete class type is not allowed" make sure
// to include the header file below...
#include "Components/StaticMeshComponent.h" 

//Set default values
ABatteryPickup::ABatteryPickup() {
	GetMesh()->SetSimulatePhysics(true);
}


