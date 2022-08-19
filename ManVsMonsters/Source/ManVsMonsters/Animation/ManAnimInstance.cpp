// Fill out your copyright notice in the Description page of Project Settings.


#include "ManAnimInstance.h"
#include "Kismet/KismetMathLibrary.h"
#include "../Characters/ManCharacter.h"	
#include "GameFramework/CharacterMovementComponent.h"

void UManAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();		// calling the super version of it to get the functionality.
	// initialize the character you want this animation to act on
	Character = Cast<AManCharacter>(TryGetPawnOwner());
}

void UManAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Character = Character == nullptr ? Cast<AManCharacter>(TryGetPawnOwner()) : Character;
	if (Character)
	{
		bIsInAir = Character->GetCharacterMovement()->IsFalling();		// for jumping

		FVector Velocity = Character->GetVelocity();
		Velocity.Z = 0.f;
		Speed = Velocity.Size();			// getting the speed of the character for walking

		// to see if the character has w key pressed.
		bIsAccelerating = Character->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.f ? true : false;

		//setting the yaw for strafing.  will be used by both walking and running animations.
		FRotator AimRotation = Character->GetBaseAimRotation();	//getting the rotation done when mouse is moved
		FRotator MovementRotation = UKismetMathLibrary::MakeRotFromX(Character->GetVelocity());
		FRotator DeltaRot = UKismetMathLibrary::NormalizedDeltaRotator(MovementRotation, AimRotation);
		DeltaRotation = FMath::RInterpTo(DeltaRotation, DeltaRot, DeltaTime, 5.f);
		YawOffset = DeltaRotation.Yaw;


		// setting the lean 
		CharacterRotationLastFrame = CharacterRotation;
		CharacterRotation = Character->GetActorRotation();
		const FRotator Delta = UKismetMathLibrary::NormalizedDeltaRotator(CharacterRotationLastFrame, CharacterRotation);
		const float Target = Delta.Yaw / DeltaTime;
		const float Interp = FMath::FInterpTo(Lean, Target, DeltaTime, 6.f);
		Lean = FMath::Clamp(Interp, -90.f, 90.f);

	}
}
