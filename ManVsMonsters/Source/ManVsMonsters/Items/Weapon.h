// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Weapon.generated.h"

/**
 * 
 */
UCLASS()
class MANVSMONSTERS_API AWeapon : public AItem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
		FText WeaponType;

public:
	AWeapon();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;
	UFUNCTION()
	virtual void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UFUNCTION()
	virtual void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	void SetWeaponAmmo();

	UPROPERTY(EditAnywhere)
	class UPickupUserWidget* PickupWidgetPointer;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> PickupWidgetClass;

	UPROPERTY(EditAnywhere, Category = "Item Properties")
		class UWidgetComponent* PickupWidget2;

};
