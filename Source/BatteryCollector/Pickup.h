// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

UCLASS()
class BATTERYCOLLECTOR_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();
	/** Return the mesh for the Pickup */
	FORCEINLINE class UStaticMeshComponent * GetMesh() const {
		return pickupMesh;
	}
	/** Return whether the pickup is active */
	UFUNCTION(BlueprintPure, Category = "Pickup")
	bool IsActive();
	/** Allows other classes to change if the pickup is active  */
	UFUNCTION(BlueprintCallable, Category = "Pickup")
	void SetActive(bool newPickupState);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	/** True when the pickup can be used, false when pickup can no longer be used.*/
	bool bIsActive;

private:
	/** Static mesh to represent the pickup in the level */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Pickup", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent * pickupMesh;
	
};
