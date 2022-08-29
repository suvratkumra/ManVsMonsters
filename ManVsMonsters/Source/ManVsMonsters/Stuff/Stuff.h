// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Items/WeaponState.h"
#include "GameFramework/Actor.h"
#include "Stuff.generated.h"

UCLASS()
class MANVSMONSTERS_API AStuff : public AActor
{
	GENERATED_BODY()

private:
	// we need a skeletal mesh for the weapon or any other thing we add in the future
	UPROPERTY(EditAnywhere, Category = "Item Properties")
		class USkeletalMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, Category = "Item Properties")
		class USphereComponent* CollisionSphere;

	UPROPERTY(EditAnywhere, Category = "Item Properties")
		class UWidgetComponent* PickupWidget;
	
	bool bPickupWidgetVisible = false;

	/** Weapon Property Variables. */
	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
		EWeaponType WeaponType;

	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
		FText WeaponAmmo;

	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
		FText WeaponName;

	EWeaponState WeaponState;

	FVector E_KeyColor;
	bool bKeyColorDirection = false;

	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
		float E_KeyInterpolationSpeed = 50.f;
	
	UPROPERTY()
		class UPickupUserWidget* PickupWidgetPointer;

	UPROPERTY()
		class AManCharacter* Character;
	
public:	
	AStuff();

	void ShowPickupWidget(bool bVisible);
	void SetAllStarsVisibility(bool bVisible);
	void SetWeaponType();
	void SetWeaponInitialProperties();
	void SetPickupKeyBlink(bool bPickupVisible);

	void SetWeaponState(EWeaponState State);
	void OnDropped();
	void OnEquippedSecondary();
	void OnEquipped();
	void OnWeaponStateSet();
	void Dropped(); 
	void ThrowWeapon();


protected:
	virtual void BeginPlay() override;
	UFUNCTION()
		virtual void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		virtual void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:	
	virtual void Tick(float DeltaTime) override;
	FORCEINLINE UPickupUserWidget* GetPickupWidgetPointer() const { return PickupWidgetPointer; }
	FORCEINLINE USkeletalMeshComponent* GetMesh() const { return Mesh; }
	FORCEINLINE USphereComponent* GetCollisionSphere() const { return CollisionSphere; }
	FORCEINLINE UWidgetComponent* GetWidget() const { return PickupWidget; }
};
