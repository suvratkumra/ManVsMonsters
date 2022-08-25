// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PickupWidgetHUD.generated.h"

/**
 * 
 */
UCLASS()
class MANVSMONSTERS_API APickupWidgetHUD : public AHUD
{
	GENERATED_BODY()
	
protected:
	//virtual void BeginPlay() override;

public:
	APickupWidgetHUD();

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* WeaponTypeText;

	UPROPERTY(meta = (BindWidget))
		UTextBlock* AmmoText;

	UFUNCTION()
	void SetWeaponStatus(FString WeaponStatus);
};
