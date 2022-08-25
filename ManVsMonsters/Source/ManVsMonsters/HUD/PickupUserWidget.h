// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PickupUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class MANVSMONSTERS_API UPickupUserWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	//virtual void BeginPlay() override;
	virtual void NativeConstruct() override;

public:

	FString AmmoVariable;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* WeaponTypeText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		UTextBlock* AmmoText;

	UFUNCTION()
		void SetWeaponAmmo(FString AmmoAmount);

};
