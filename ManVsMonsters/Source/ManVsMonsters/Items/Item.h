// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponState.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS()
class MANVSMONSTERS_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	AItem();


	UPROPERTY(EditAnywhere, Category = "Item Properties")
		class UWidgetComponent* PickupWidget;
	
private:
	// we need a skeletal mesh for the weapon or any other thing we add in the future
	UPROPERTY(EditAnywhere, Category = "Item Properties")
	class USkeletalMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, Category = "Item Properties")
		class USphereComponent* CollisionSphere;

	


protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	FORCEINLINE USkeletalMeshComponent* GetMesh() const { return Mesh; }
	FORCEINLINE USphereComponent* GetCollisionSphere() const { return CollisionSphere; }
	FORCEINLINE UWidgetComponent* GetWidget() const { return PickupWidget; }
};
