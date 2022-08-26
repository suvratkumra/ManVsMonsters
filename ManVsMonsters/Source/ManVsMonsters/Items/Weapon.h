// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "WeaponState.h"
#include "Weapon.generated.h"

/**
 * 
 */
UCLASS()
class MANVSMONSTERS_API AWeapon : public AItem
{
	GENERATED_BODY()

private:
	/** Weapon Property Variables. */
	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
		EWeaponType WeaponType;

	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
		FText WeaponAmmo;

	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
		FText WeaponName;

	bool bPickupWidgetVisibility = false;

	FVector E_KeyColor;
	bool bKeyColorDirection = false;

	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
		float E_KeyInterpolationSpeed = 50.f;

public:
	AWeapon();
	virtual void Tick(float DeltaTime) override;
	void SetWeaponInitialProperties();
	void SetWeaponType();
	void SetAllStarsVisibility(bool bVisible);
	void SetPickupKeyBlink(bool bVisible);

protected:
	virtual void BeginPlay() override;
	UFUNCTION()
	virtual void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UFUNCTION()
	virtual void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UPROPERTY(EditAnywhere)
	class UPickupUserWidget* PickupWidgetPointer;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> PickupWidgetClass;

	UPROPERTY(EditAnywhere, Category = "Item Properties")
		class UWidgetComponent* PickupWidget2;

public:
	FORCEINLINE UPickupUserWidget* GetPickupWidgetPointer() const{ return PickupWidgetPointer; }

};
