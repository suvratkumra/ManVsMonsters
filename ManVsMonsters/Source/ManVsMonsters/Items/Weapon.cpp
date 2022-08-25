// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "../Characters/ManCharacter.h"
#include "Components/TextBlock.h"
#include "../HUD/PickupUserWidget.h"
#include "Kismet/GameplayStatics.h"
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

void AWeapon::BeginPlay()
{
	Super::BeginPlay();

	PickupWidgetPointer = Cast<UPickupUserWidget>(PickupWidget2->GetUserWidgetObject());
	if (PickupWidgetPointer)
	{
		PickupWidgetPointer->SetVisibility(ESlateVisibility::Hidden);		// it should be hidden at the start of the game. only visible when hovered over.
		if (PickupWidgetPointer->AmmoText)
		{
			UE_LOG(LogTemp, Warning, TEXT("HELLOsdfsdO"));
			PickupWidgetPointer->AmmoText->SetText(FText::FromString("129791"));
		}
		
	}
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

void AWeapon::SetWeaponAmmo()
{
}

