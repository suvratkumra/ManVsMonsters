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

public:

	FString AmmoVariable;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* WeaponTypeText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		UTextBlock* AmmoText;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		UTextBlock* WeaponName;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UImage* Star1Image;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UImage* Star2Image;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UImage* Star3Image;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UImage* Star4Image;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UImage* Star5Image;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* E_Key;
};
