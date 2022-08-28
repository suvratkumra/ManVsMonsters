// Fill out your copyright notice in the Description page of Project Settings.


#include "ManCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/SkeletalMeshSocket.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "../Items/Weapon.h"
#include "Components/SphereComponent.h"
#include "Components/CapsuleComponent.h"
#include "../HUD/PickupUserWidget.h"
#include "Sound/SoundCue.h"
#include "Camera/CameraComponent.h"
#include "particles/ParticleSystemComponent.h"


AManCharacter::AManCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Boom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->bUsePawnControlRotation = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Follow Camera"));
	Camera->SetupAttachment(CameraBoom);

}

void AManCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (Camera)
	{
		DefaultPOV = Camera->FieldOfView;
		CurrentPOV = DefaultPOV;
	}

	if (BaseWeaponClass)
	{
		if (GetWorld())
		{
			/** First Spawn the weapon */
			PrimaryWeapon = GetWorld()->SpawnActor<AWeapon>(BaseWeaponClass);
			
		}
		if (PrimaryWeapon)
		{
			PrimaryWeapon->SetWeaponState(EWeaponState::EWS_Equipped);
			PrimaryWeapon->SetOwner(this);
	
			/** Attaching the weapon to right hand. */
			AttachActorToRightHand(PrimaryWeapon);			// attaching the primary weapon to hand
			if (SecondaryWeapon)
			{
				AttachActorToSpine(SecondaryWeapon);		// if bychance secondary weapon exists, attaching that to the spine
			}
		}
	}

}

void AManCharacter::AttachActorToRightHand(AWeapon* WeaponToAttach)
{
	// get the socket on the hand where the gun needs to go
	const USkeletalMeshSocket* GunSocket = GetMesh()->GetSocketByName(FName("GunSocket"));
	if (WeaponToAttach)
	{
		GunSocket->AttachActor(WeaponToAttach, GetMesh());
	}
	
}

void AManCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SetHUDCrosshairs();

	AdjustingAimingPOV(DeltaTime);

}

void AManCharacter::AdjustingAimingPOV(float DeltaTime)
{
	if (bAiming)
	{
		CurrentPOV = FMath::FInterpTo(CurrentPOV, ZoomedPOV, DeltaTime, 30.f);
	}
	else
	{
		CurrentPOV = FMath::FInterpTo(CurrentPOV, DefaultPOV, DeltaTime, 30.f);
	}
	if (Camera)
	{
		Camera->SetFieldOfView(CurrentPOV);
	}
}

void AManCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(FName("MoveForward"), this, &AManCharacter::MoveForward);
	PlayerInputComponent->BindAxis(FName("MoveRight"), this, &AManCharacter::MoveRight);
	PlayerInputComponent->BindAxis(FName("LookUp"), this, &AManCharacter::LookUp);
	PlayerInputComponent->BindAxis(FName("LookRight"), this, &AManCharacter::LookRight);

	PlayerInputComponent->BindAction(FName("Jump"), EInputEvent::IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction(FName("Jump"), EInputEvent::IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction(FName("Run"), EInputEvent::IE_Pressed, this, &AManCharacter::RunningButtonPressed);
	PlayerInputComponent->BindAction(FName("Fire"), EInputEvent::IE_Pressed, this, &AManCharacter::FireButtonPressed);
	PlayerInputComponent->BindAction(FName("Fire"), EInputEvent::IE_Released, this, &AManCharacter::FireButtonReleased);
	PlayerInputComponent->BindAction(FName("Aim"), EInputEvent::IE_Pressed, this, &AManCharacter::AimButtonPressed);
	PlayerInputComponent->BindAction(FName("Aim"), EInputEvent::IE_Released, this, &AManCharacter::AimButtonReleased);
	PlayerInputComponent->BindAction(FName("Equip"), EInputEvent::IE_Pressed, this, &AManCharacter::EquipButtonPressed);
	PlayerInputComponent->BindAction(FName("PrimaryWeapon"), EInputEvent::IE_Pressed, this, &AManCharacter::PrimaryWeaponButtonPressed);
	PlayerInputComponent->BindAction(FName("SecondaryWeapon"), EInputEvent::IE_Pressed, this, &AManCharacter::SecondaryWeaponButtonPressed);

}

// for switching to secondary weapon
void AManCharacter::SecondaryWeaponButtonPressed()
{
	if (SecondaryWeapon && bUsingPrimary)
	{
		HandleSwapWeapon();
		CanFire = false;
		bFireButtonHeld = false;
		GetWorldTimerManager().SetTimer(DisableFireTimerHandle, this, &AManCharacter::EndFireTimer, 1.f);
	}

		
}

// for switching to primary weapon
void AManCharacter::PrimaryWeaponButtonPressed()
{
	if (PrimaryWeapon && !bUsingPrimary)
	{
		HandleSwapWeapon();
		CanFire = false;
		bFireButtonHeld = false;
		GetWorldTimerManager().SetTimer(DisableFireTimerHandle, this, &AManCharacter::EndFireTimer, 1.f);
	}
}

void AManCharacter::FinishFireTimerHandle()
{
	// now we will re-enable the canFire boolean so that the weapon can fire.
	CanFire = true;
	bFireButtonHeld = true;
}

void AManCharacter::HandleSwapWeapon()
{
	AWeapon* TempWeapon = PrimaryWeapon;
	PrimaryWeapon = SecondaryWeapon;
	SecondaryWeapon = TempWeapon;
	AttachActorToRightHand(PrimaryWeapon);			// as now the active weapon is the secondary weapon, attaching that to the right hand of the actor
	AttachActorToSpine(SecondaryWeapon);			// as now previous active weapon is secondary weapon, attaching that to the spine of the character.

	// playing animation montage for the swapping of the weapon;
	UAnimInstance* AnimMontage = GetMesh()->GetAnimInstance();
	if (AnimMontage && SwapWeaponMontage)
	{
		AnimMontage->Montage_Play(SwapWeaponMontage);
		AnimMontage->Montage_JumpToSection(FName("PlayMontage"));
	}

	// now setting primary to false so that we can switch to primary when 1 is clicked
	bUsingPrimary = !bUsingPrimary;			// opposite of what the value is right now.
}



void AManCharacter::EquipButtonPressed()
{
	if (PrimaryWeapon && SecondaryWeapon == nullptr)
	{
		HandleEquippingSecondaryWeapon();
	}
	else if (PrimaryWeapon && SecondaryWeapon)
	{
		if (OverlappingWeapon)
		{
			PrimaryWeapon->GetMesh()->DetachFromParent(true, true);
			PrimaryWeapon->GetMesh()->SetSimulatePhysics(true);
			PrimaryWeapon->GetMesh()->SetEnableGravity(true);
			PrimaryWeapon->GetMesh()->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
			PrimaryWeapon->Destroy();

			PrimaryWeapon = OverlappingWeapon;
			AttachActorToRightHand(PrimaryWeapon);
			PrimaryWeapon->GetPickupWidgetPointer()->SetVisibility(ESlateVisibility::Hidden);
			
			PrimaryWeapon->SetWeaponState(EWeaponState::EWS_Equipped);
			PrimaryWeapon->SetOwner(this);
		}
		
	}
	
}

void AManCharacter::HandleEquippingSecondaryWeapon()
{
	if (OverlappingWeapon)
	{	
		SecondaryWeapon = OverlappingWeapon;
		SecondaryWeapon->SetWeaponState(EWeaponState::EWS_EquippedSecondary);
		AttachActorToSpine(SecondaryWeapon);

		SecondaryWeapon->SetOwner(this);
	}
	//OverlappingWeapon = nullptr;
}

void AManCharacter::AttachActorToSpine(AWeapon* WeaponToAttach)
{
	const USkeletalMeshSocket* Socket = GetMesh()->GetSocketByName(FName("SecondaryWeaponSocket"));
	if (Socket) Socket->AttachActor(WeaponToAttach, GetMesh());
}

void AManCharacter::MoveForward(float AxisValue)
{
	// have to use controller in this
	if (!Controller || AxisValue == 0.0) return;
	if (Controller)
	{
		FRotator Rotation{ Controller->GetControlRotation() };
		FRotator YawRotation{ 0.f, Rotation.Yaw, 0.f };

		FVector Direction{ FRotationMatrix{YawRotation}.GetUnitAxis(EAxis::X) };
		AddMovementInput(Direction, AxisValue);
	}
}

void AManCharacter::MoveRight(float AxisValue)
{
	// have to use controller in this
	if (!Controller || AxisValue == 0.0) return;
	if (Controller)
	{
		FRotator Rotation{ Controller->GetControlRotation() };
		FRotator YawRotation{ 0.f, Rotation.Yaw, 0.f };

		FVector Direction{ FRotationMatrix{YawRotation}.GetUnitAxis(EAxis::Y) };
		AddMovementInput(Direction, AxisValue);
	}
}

void AManCharacter::LookUp(float AxisValue)
{
	if (bAiming)
	{
		AddControllerPitchInput(AxisValue * VerticalAimSenstivity * GetWorld()->GetDeltaSeconds());
	}
	else
	{
		AddControllerPitchInput(AxisValue * VerticalSenstivity * GetWorld()->GetDeltaSeconds());
	}
}

void AManCharacter::LookRight(float AxisValue)
{
	if (bAiming)
	{
		AddControllerYawInput(AxisValue * HorizontalAimSenstivity * GetWorld()->GetDeltaSeconds());
	}
	else
	{
		AddControllerYawInput(AxisValue * HorizontalSenstivity * GetWorld()->GetDeltaSeconds());
	}
	
}



void AManCharacter::RunningButtonPressed()
{
	bIsRunning = true;
	
}

void AManCharacter::Fire()
{
	//UE_LOG(LogTemp, Warning, TEXT("%d"), CanFire ? 1 : 0);
	if (CanFire)
	{
		if (FireSoundCue)
		{
			// now we want to spawn the sound cue and play it when fire button is pressed
			UGameplayStatics::PlaySound2D(this, FireSoundCue);
		}

		// now we want to spawn the impact particle
		if (FireEmitter)
		{

			MuzzleTransform = GetMesh()->GetSocketTransform(FName("Muzzle_01"));
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), FireEmitter, MuzzleTransform);
		}

		// now we want recoil
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		if (AnimInstance && HipFireMontage)
		{
			AnimInstance->Montage_Play(HipFireMontage);
			AnimInstance->Montage_JumpToSection(FName("FireSection"));
		}

		TraceForBullet();
	}
}

void AManCharacter::FireButtonPressed()
{
	bFireButtonHeld = true;
	if (CanFire)
	{
		StartFireTimer();
	}
}

void AManCharacter::FireButtonReleased()
{
	bFireButtonHeld = false;
}


void AManCharacter::StartFireTimer()
{
	if (bFireButtonHeld && CanFire)
	{
		Fire();
		CanFire = false;
		GetWorldTimerManager().SetTimer(AutomaticFireTimerHandle, this, &AManCharacter::EndFireTimer, FireDelay);
	}
	
}

void AManCharacter::EndFireTimer()
{
	CanFire = true;
	StartFireTimer();
}

void AManCharacter::AimButtonPressed()
{
	bAiming = true;
	
}

void AManCharacter::AimButtonReleased()
{
	bAiming = false;
	
}

void AManCharacter::TraceForBullet()
{
	/*
		As we have already calculated the viewport middle in the hud class, we will just simply get the values from it instead of calculating them here right now
	*/
	if (!PlayerController)
	{
		PlayerController = Cast<APlayerController>(Controller);
	}
	if (PlayerController)
	{
		ManHUD = ManHUD == nullptr ? Cast<AManHUD>(PlayerController->GetHUD()) : ManHUD;			// checking if manhud is initialized, if not then we do it here.
	
		const FVector2D ViewportMiddle{ ManHUD->GetViewportMiddle() };
		FVector WorldPosition, WorldDirection;
		UGameplayStatics::DeprojectScreenToWorld(PlayerController, ViewportMiddle, WorldPosition, WorldDirection);

		FHitResult TracingThroughCrosshairs;
		FVector Start = WorldPosition;
		FVector End = WorldPosition + WorldDirection * 50'000;
		FVector BeamEnd = End;			// this is the place where the particles will be spawned when collision happens.
		// now we have to trace a line shot from the middle of the viewport to where we are looking
		if (GetWorld())
		{
			GetWorld()->LineTraceSingleByChannel(
				TracingThroughCrosshairs,
				Start,
				End,
				ECollisionChannel::ECC_Visibility
			);
			if (TracingThroughCrosshairs.bBlockingHit)
			{
				// we are reconfiguring now the end location of the hit so that the impact particle can spawn at the correct location
				BeamEnd = TracingThroughCrosshairs.Location;

				//now spawing the impact particle
				if (ImpactParticle)
				{
					UGameplayStatics::SpawnEmitterAtLocation(this, ImpactParticle, BeamEnd);
				}

				if (BeamParticle)
				{
					UParticleSystemComponent* Beam = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), BeamParticle, MuzzleTransform);
					if (Beam)
					{
						Beam->SetVectorParameter(FName("Target"), BeamEnd);
					}
				}
			}
		}

	}
		
}

void AManCharacter::SetHUDCrosshairs()
{
	// As the GetHUD function exists on the playercontroller, we need to cast and get it in a local variable.
	PlayerController = Cast<APlayerController>(Controller);
	if (PlayerController)
	{
		ManHUD = ManHUD == nullptr ? Cast<AManHUD>(PlayerController->GetHUD()) : ManHUD;
		// we will set the crosshairs here.
		if (ManHUD)
		{
			// setting the crosshair package to pass into the function to the hud where the crosshairs will get set.
			CrosshairPackage.CrosshairsBottom = CrosshairsBottom;
			CrosshairPackage.CrosshairsTop = CrosshairsTop;
			CrosshairPackage.CrosshairsLeft = CrosshairsLeft;
			CrosshairPackage.CrosshairsRight = CrosshairsRight;
			CrosshairPackage.CrosshairsCenter = CrosshairsCenter;
			ManHUD->SetCrosshairsHUD(CrosshairPackage);
		}
	}
	
}


void AManCharacter::SetIsRunning(bool bRunning)
{
	bIsRunning = bRunning;
	
}

float AManCharacter::GetWalkingSpeed()
{
	return GetCharacterMovement()->MaxWalkSpeed;
}

bool AManCharacter::GetIsFalling()
{
	return GetCharacterMovement()->IsFalling();
}

bool AManCharacter::GetIsCrouched()
{
	return GetCharacterMovement()->IsCrouching();
}

void AManCharacter::SetOverlappingWeapon(AWeapon* Weapon)
{
	if (Weapon)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Hreeeeeeeeee"));
		OverlappingWeapon = Weapon;
	}
	if (!Weapon)
	{
		OverlappingWeapon = nullptr;
		//UE_LOG(LogTemp, Warning, TEXT("NOOOOOOOOO"));
	}
	if (OverlappingWeapon)
	{
		OverlappingWeapon->GetPickupWidgetPointer()->SetVisibility(ESlateVisibility::Visible);
	}
	
}
