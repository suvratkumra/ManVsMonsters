// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupWidgetHUD.h"
#include "Components/TextBlock.h"

APickupWidgetHUD::APickupWidgetHUD()
{
	PrimaryActorTick.bCanEverTick = true;
}

void APickupWidgetHUD::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UE_LOG(LogTemp, Warning, TEXT("Working"));
	if (AmmoText)
	{
		AmmoText->SetText(FText::FromString("Common Af"));
		UE_LOG(LogTemp, Warning, TEXT("Text Set"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Does not exist even here"));
	}
}

void APickupWidgetHUD::SetWeaponStatus(FString WeaponStatus)
{
	UE_LOG(LogTemp, Warning, TEXT("heree"));
	if (AmmoText)
	{
		AmmoText->SetText(FText::FromString(WeaponStatus));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Does not exist"));
	}
}
