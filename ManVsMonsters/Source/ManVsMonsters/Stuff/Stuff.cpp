// Fill out your copyright notice in the Description page of Project Settings.

// This is the base class for everything we want in diff weapons and items
#include "Stuff.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "../HUD/PickupUserWidget.h"
#include "../Characters/ManCharacter.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AStuff::AStuff()
{
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	SetRootComponent(Mesh);

	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Collision Sphere"));
	CollisionSphere->SetupAttachment(RootComponent);
	CollisionSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	CollisionSphere->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);

	PickupWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Pickup Widget"));
	PickupWidget->SetupAttachment(RootComponent);
	PickupWidget->SetVisibility(false);

}

// Called when the game starts or when spawned
void AStuff::BeginPlay()
{
	Super::BeginPlay();

	Character = Cast<AManCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	
	// calling to set the initial properties of the weapon
	SetWeaponInitialProperties();

	// now we want overlapping events to show the pickup widget and remove it when suitable.
	CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &AStuff::OnSphereBeginOverlap);
	CollisionSphere->OnComponentEndOverlap.AddDynamic(this, &AStuff::OnSphereEndOverlap);
}

// Called every frame
void AStuff::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/** Setting the blinking E_Key */
	SetPickupKeyBlink(bPickupWidgetVisible);
}

void AStuff::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ShowPickupWidget(true);
	AManCharacter* Char = Cast<AManCharacter>(OtherActor);
	if (Char) Char->SetOverlappingWeapon(this);
}

void AStuff::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ShowPickupWidget(false); 
	AManCharacter* Char = Cast<AManCharacter>(OtherActor);
	if (Char) Char->SetOverlappingWeapon(nullptr);
}

/** Change the color of the blinking E_Key*/
void AStuff::SetPickupKeyBlink(bool bPickupVisible)
{
	if (bPickupVisible && PickupWidget)
	{
		if (bKeyColorDirection == false)			// here we want to change the color from Red to White, 
		{
			if (GetWorld())
			{
				E_KeyColor.Y = FMath::FInterpTo(E_KeyColor.Y, 1.f, GetWorld()->GetDeltaSeconds(), E_KeyInterpolationSpeed);
				E_KeyColor.Z = FMath::FInterpTo(E_KeyColor.Z, 1.f, GetWorld()->GetDeltaSeconds(), E_KeyInterpolationSpeed);
				if (E_KeyColor.Y == 1.f && E_KeyColor.Z == 1.f) bKeyColorDirection = true;			// now we want to reverse it
			}

		}
		else
		{
			if (GetWorld())
			{
				E_KeyColor.Y = FMath::FInterpTo(E_KeyColor.Y, 0.f, GetWorld()->GetDeltaSeconds(), E_KeyInterpolationSpeed);
				E_KeyColor.Z = FMath::FInterpTo(E_KeyColor.Z, 0.f, GetWorld()->GetDeltaSeconds(), E_KeyInterpolationSpeed);
				if (E_KeyColor.Y == 0.f && E_KeyColor.Z == 0.f) bKeyColorDirection = false;			// now we want to reverse it
			}
		}


		PickupWidgetPointer = PickupWidgetPointer == nullptr ? Cast<UPickupUserWidget>(PickupWidget->GetUserWidgetObject()) : PickupWidgetPointer;
		if (PickupWidgetPointer)
		{
			if (PickupWidgetPointer->E_Key)
			{
				//UE_LOG(LogTemp, Warning, TEXT("Here"));
				FLinearColor LinearColor(E_KeyColor);
				PickupWidgetPointer->E_Key->SetColorAndOpacity(LinearColor);
			}
		}
	}
	else if (!bPickupVisible && PickupWidget)
	{
		E_KeyColor.Y = E_KeyColor.Z = 0.f;				// resetting it back to red;
	}
}

void AStuff::SetWeaponInitialProperties()
{
	PickupWidgetPointer = Cast<UPickupUserWidget>(PickupWidget->GetUserWidgetObject());
	if (PickupWidgetPointer)
	{
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

void AStuff::SetWeaponType()
{
	switch (WeaponType)
	{
	case EWeaponType::EWT_Damaged:
		if (PickupWidgetPointer->WeaponTypeText)
		{
			PickupWidgetPointer->WeaponTypeText->SetText(FText::FromString("Damaged"));

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

void AStuff::ThrowWeapon()
{
	FRotator MeshRotation{ 0.f, Mesh->GetComponentRotation().Yaw, 0.f };
	Mesh->SetWorldRotation(MeshRotation, false, nullptr, ETeleportType::TeleportPhysics);

	const FVector MeshForward{ Mesh->GetForwardVector() };
	const FVector MeshRight{ Mesh->GetRightVector() };
	// Direction in which we throw the Weapon
	FVector ImpulseDirection = MeshRight.RotateAngleAxis(-20.f, MeshForward);

	float RandomRotation{ 30.f };
	ImpulseDirection = ImpulseDirection.RotateAngleAxis(RandomRotation, FVector(0.f, 0.f, 1.f));
	ImpulseDirection *= 20'000.f;
	Mesh->AddImpulse(ImpulseDirection);

	SetOwner(nullptr);

}

void AStuff::SetWeaponState(EWeaponState State)
{
	WeaponState = State;

	OnWeaponStateSet();
}

void AStuff::OnWeaponStateSet()
{
	switch (WeaponState)
	{
	case EWeaponState::EWS_Equipped:
		OnEquipped();
		break;
	case EWeaponState::EWS_EquippedSecondary:
		OnEquippedSecondary();
		break;
	case EWeaponState::EWS_Dropped:
		OnDropped();
		break;
	case EWeaponState::EWS_Falling:
		// Set mesh properties
		Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		Mesh->SetSimulatePhysics(true);
		Mesh->SetEnableGravity(true);
		Mesh->SetVisibility(true);
		Mesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		Mesh->SetCollisionResponseToChannel(
			ECollisionChannel::ECC_WorldStatic,
			ECollisionResponse::ECR_Block);
		// Set AreaSphere properties
		CollisionSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		CollisionSphere->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
		CollisionSphere->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		SetWeaponState(EWeaponState::EWS_Dropped);
		// Set CollisionBox properties
		break;
	}
}

void AStuff::OnEquipped()
{
	ShowPickupWidget(false);
	CollisionSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Mesh->SetSimulatePhysics(false);
	Mesh->SetEnableGravity(false);
	Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

void AStuff::OnEquippedSecondary()
{
	ShowPickupWidget(false);
	CollisionSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Mesh->SetSimulatePhysics(false);
	Mesh->SetEnableGravity(false);
	Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

void AStuff::OnDropped()
{
	
	Mesh->SetSimulatePhysics(true);
	Mesh->SetEnableGravity(true);			// enabled by default but still, need to set simulate physics before this line. never forget
	Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	Mesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	Mesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
	Mesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);
	//UE_LOG(LogTemp, Warning, TEXT("LolziePolzie"));
	CollisionSphere->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	CollisionSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	CollisionSphere->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
}

void AStuff::Dropped()
{
	SetWeaponState(EWeaponState::EWS_Dropped);
	FDetachmentTransformRules DetachRules(EDetachmentRule::KeepWorld, true);
	Mesh->DetachFromComponent(DetachRules);
	SetOwner(nullptr);
}

/** Setting the visibility of all the stars */
void AStuff::SetAllStarsVisibility(bool bVisible)
{
	if (!PickupWidgetPointer)
	{
		PickupWidgetPointer = Cast<UPickupUserWidget>(PickupWidget->GetUserWidgetObject());
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

void AStuff::ShowPickupWidget(bool bVisible)
{
	PickupWidget->SetVisibility(bVisible);
	bPickupWidgetVisible = bVisible;			// for the blinking effect.
}


