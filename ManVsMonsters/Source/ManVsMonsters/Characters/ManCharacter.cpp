// Fill out your copyright notice in the Description page of Project Settings.


#include "ManCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "Camera/CameraComponent.h"

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

	// stating the walk speed
	GetCharacterMovement()->MaxWalkSpeed = 270.f;
	GetCharacterMovement()->MaxWalkSpeedCrouched = 150.f;

	
}

void AManCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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
	AddControllerPitchInput(AxisValue * VerticalSenstivity * GetWorld()->GetDeltaSeconds());
}

void AManCharacter::LookRight(float AxisValue)
{
	AddControllerYawInput(AxisValue * HorizontalSenstivity * GetWorld()->GetDeltaSeconds());
}

void AManCharacter::RunningButtonPressed()
{
	bIsRunning = true;
	if (GetCharacterMovement())
	{
		GetCharacterMovement()->MaxWalkSpeed = 540.f;
		GetCharacterMovement()->MaxWalkSpeedCrouched = 300.f;
	}
}

void AManCharacter::FireButtonPressed()
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

	// now we want recoid
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && HipFireMontage)
	{
		AnimInstance->Montage_Play(HipFireMontage);
		AnimInstance->Montage_JumpToSection(FName("FireSection"));
	}

	TraceForBullet();
	
}

void AManCharacter::TraceForBullet()
{
	FVector Start = MuzzleTransform.GetLocation();
	FQuat Rotation = MuzzleTransform.GetRotation();
	FVector ForwardVectorFromMuzzle = Rotation.GetAxisX();
	FVector End = Start + ForwardVectorFromMuzzle * 50000.f;
	FHitResult HitResult;
	UWorld* World = GetWorld();
	if (World)
	{
		World->LineTraceSingleByChannel(HitResult, Start, End, ECollisionChannel::ECC_Visibility);
		
		if (HitResult.bBlockingHit)
		{
			// for debugging purposes
			DrawDebugLine(World, Start, HitResult.Location, FColor::Red, false, 2.f);
			DrawDebugSphere(World, HitResult.Location, 5.f, 12.f, FColor::Red, false, 2.f);
		}

		if (HitResult.bBlockingHit && ImpactParticle)
		{
			UGameplayStatics::SpawnEmitterAtLocation(this, ImpactParticle, HitResult.ImpactPoint, HitResult.ImpactPoint.Rotation());
		}
	}
}


void AManCharacter::SetIsRunning(bool bRunning)
{
	bIsRunning = bRunning;
	if (!bIsRunning)
	{
		GetCharacterMovement()->MaxWalkSpeed = 270.f;
		GetCharacterMovement()->MaxWalkSpeedCrouched = 150.f;
	}
}



