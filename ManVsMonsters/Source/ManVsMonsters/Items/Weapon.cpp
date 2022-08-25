// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "../Characters/ManCharacter.h"
#include "Components/TextBlock.h"
#include "../HUD/PickupUserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Image.h"
#include "Components/WidgetComponent.h"

AWeapon::AWeapon()
{
	PrimaryActorTick.bCanEverTick = true;

	PickupWidget2 = CreateDefaultSubobject<UWidgetComponent>(TEXT("PopupWidget"));
	PickupWidget2->SetupAttachment(RootComponent);

	/** Very important to set these as we want our pawn to oveerlap with the sphere in order to trigger the events. */
	GetCollisionSphere()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	GetCollisionSphere()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	GetCollisionSphere()->OnComponentBeginOverlap.AddDynamic(this, &AWeapon::OnSphereBeginOverlap);
	GetCollisionSphere()->OnComponentEndOverlap.AddDynamic(this, &AWeapon::OnSphereEndOverlap);
}

void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWeapon::SetWeaponInitialProperties()
{
	PickupWidgetPointer = Cast<UPickupUserWidget>(PickupWidget2->GetUserWidgetObject());
	if (PickupWidgetPointer)
	{
		PickupWidgetPointer->SetVisibility(ESlateVisibility::Hidden);		// it should be hidden at the start of the game. only visible when hovered over.
		if (PickupWidgetPointer->AmmoText)
		{
			PickupWidgetPointer->AmmoText->SetText(WeaponAmmo);
		}
		if (PickupWidgetPointer->WeaponName)
		{
			PickupWidgetPointer->WeaponName->SetText(WeaponName);
		}
		if (PickupWidgetPointer->WeaponTypeText)
		{
			SetAllStarsVisibility(false);
			SetWeaponType();
		}
	}
}

void AWeapon::SetWeaponType()
{
	switch (WeaponType)
	{
		case EWeaponType::EWT_Used:
			if (PickupWidgetPointer->WeaponTypeText)
			{
				PickupWidgetPointer->WeaponTypeText->SetText(FText::FromString("Used"));

				/*Setting the text color to grey*/
				FLinearColor LinearColor;
				LinearColor.R = .51f;
				LinearColor.G = .49f;
				LinearColor.B = .49f;
				LinearColor.A = 1.f;
				PickupWidgetPointer->WeaponTypeText->SetColorAndOpacity(LinearColor);
			}

			if (PickupWidgetPointer->Star1Image) PickupWidgetPointer->Star1Image->SetVisibility(ESlateVisibility::Visible);
			break;
		case EWeaponType::EWT_Common:
			if (PickupWidgetPointer->WeaponTypeText) 
			{
				/*Setting the text color to light grey?*/
				FLinearColor LinearColor;
				LinearColor.R = 122.f / 255.f;
				LinearColor.G = 155.f / 255.f;
				LinearColor.B = 121.f / 255.f;
				LinearColor.A = 1.f;
				PickupWidgetPointer->WeaponTypeText->SetColorAndOpacity(LinearColor);

				PickupWidgetPointer->WeaponTypeText->SetText(FText::FromString("Common"));
			}

			if (PickupWidgetPointer->Star1Image) PickupWidgetPointer->Star1Image->SetVisibility(ESlateVisibility::Visible);
			if (PickupWidgetPointer->Star2Image) PickupWidgetPointer->Star2Image->SetVisibility(ESlateVisibility::Visible);
			break;
		case EWeaponType::EWT_Uncommon:
			if (PickupWidgetPointer->WeaponTypeText)
			{
				PickupWidgetPointer->WeaponTypeText->SetText(FText::FromString("Uncommon"));
			
				/*Setting the text color to green*/
				FLinearColor LinearColor;
				LinearColor.R = 117.f / 255.f;
				LinearColor.G = 198.f / 255.f;
				LinearColor.B = 114.f / 255.f;
				LinearColor.A = 1.f;
				PickupWidgetPointer->WeaponTypeText->SetColorAndOpacity(LinearColor);
			}
				
			if (PickupWidgetPointer->Star1Image) PickupWidgetPointer->Star1Image->SetVisibility(ESlateVisibility::Visible);
			if (PickupWidgetPointer->Star2Image) PickupWidgetPointer->Star2Image->SetVisibility(ESlateVisibility::Visible);
			if (PickupWidgetPointer->Star3Image) PickupWidgetPointer->Star3Image->SetVisibility(ESlateVisibility::Visible);
			break;

		case EWeaponType::EWT_Rare:
			if (PickupWidgetPointer->WeaponTypeText)
			{
				PickupWidgetPointer->WeaponTypeText->SetText(FText::FromString("Rare"));
				/*Setting the text color to blue*/
				FLinearColor LinearColor;
				LinearColor.R = 88.f / 255.f;
				LinearColor.G = 88.f / 255.f;
				LinearColor.B = 213.f / 255.f;
				LinearColor.A = 1.f;
				PickupWidgetPointer->WeaponTypeText->SetColorAndOpacity(LinearColor);
			}
				
			if (PickupWidgetPointer->Star1Image) PickupWidgetPointer->Star1Image->SetVisibility(ESlateVisibility::Visible);
			if (PickupWidgetPointer->Star2Image) PickupWidgetPointer->Star2Image->SetVisibility(ESlateVisibility::Visible);
			if (PickupWidgetPointer->Star3Image) PickupWidgetPointer->Star3Image->SetVisibility(ESlateVisibility::Visible);
			if (PickupWidgetPointer->Star4Image) PickupWidgetPointer->Star4Image->SetVisibility(ESlateVisibility::Visible);
			break;
		case EWeaponType::EWT_Legendary:
			if (PickupWidgetPointer->WeaponTypeText)
			{
				PickupWidgetPointer->WeaponTypeText->SetText(FText::FromString("Legendary"));
				/*Setting the text color to golden*/
				FLinearColor LinearColor;
				LinearColor.R = 255.f / 255.f;
				LinearColor.G = 223.f / 255.f;
				LinearColor.B = 0.f;
				LinearColor.A = 1.f;
				PickupWidgetPointer->WeaponTypeText->SetColorAndOpacity(LinearColor);
			}
			if (PickupWidgetPointer->Star1Image) PickupWidgetPointer->Star1Image->SetVisibility(ESlateVisibility::Visible);
			if (PickupWidgetPointer->Star2Image) PickupWidgetPointer->Star2Image->SetVisibility(ESlateVisibility::Visible);
			if (PickupWidgetPointer->Star3Image) PickupWidgetPointer->Star3Image->SetVisibility(ESlateVisibility::Visible);
			if (PickupWidgetPointer->Star4Image) PickupWidgetPointer->Star4Image->SetVisibility(ESlateVisibility::Visible);
			if (PickupWidgetPointer->Star5Image) PickupWidgetPointer->Star5Image->SetVisibility(ESlateVisibility::Visible);
			break;
	}
}

/** Setting the visibility of all the stars */
void AWeapon::SetAllStarsVisibility(bool bVisible)
{
	if (!PickupWidgetPointer)
	{
		PickupWidgetPointer = Cast<UPickupUserWidget>(PickupWidget2->GetUserWidgetObject());
	}
	else
	{
		if (PickupWidgetPointer->Star1Image) PickupWidgetPointer->Star1Image->SetVisibility(ESlateVisibility::Hidden);
		if (PickupWidgetPointer->Star2Image) PickupWidgetPointer->Star2Image->SetVisibility(ESlateVisibility::Hidden);
		if (PickupWidgetPointer->Star3Image) PickupWidgetPointer->Star3Image->SetVisibility(ESlateVisibility::Hidden);
		if (PickupWidgetPointer->Star4Image) PickupWidgetPointer->Star4Image->SetVisibility(ESlateVisibility::Hidden);
		if (PickupWidgetPointer->Star5Image) PickupWidgetPointer->Star5Image->SetVisibility(ESlateVisibility::Hidden);
	}
}

void AWeapon::BeginPlay()
{
	Super::BeginPlay();

	// calling to set the initial properties of the weapon
	SetWeaponInitialProperties();
}


void AWeapon::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//UE_LOG(LogTemp, Warning, TEXT("HELLOO"));
	AManCharacter* Character = Cast<AManCharacter>(OtherActor);
	if (OtherActor)
	{
		PickupWidgetPointer->SetVisibility(ESlateVisibility::Visible);
		
	}
	
}

void AWeapon::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AManCharacter* Character = Cast<AManCharacter>(OtherActor);
	if (OtherActor)
	{
		PickupWidgetPointer->SetVisibility(ESlateVisibility::Hidden);
	}
}


