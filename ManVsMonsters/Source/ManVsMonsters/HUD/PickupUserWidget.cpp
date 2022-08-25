// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupUserWidget.h"
#include "Components/TextBlock.h"
#include "../Items/Weapon.h"

void UPickupUserWidget::NativeConstruct()
{
	Super::NativeConstruct();
	
	/*if (AmmoText)
	{
		AmmoText->SetText(FText::FromString("123"));
	}*/
	
}


void UPickupUserWidget::SetWeaponAmmo(FString AmmoAmount)
{
	UE_LOG(LogTemp, Warning, TEXT("Hellooo"));
	if (AmmoText)
	{
		AmmoText->SetText(FText::FromString(AmmoAmount));
	}
}
