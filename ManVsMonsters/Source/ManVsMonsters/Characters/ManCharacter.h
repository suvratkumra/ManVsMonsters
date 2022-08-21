// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "../HUD/ManHUD.h"			// for the crosshairs.
#include "ManCharacter.generated.h"

UCLASS()
class MANVSMONSTERS_API AManCharacter : public ACharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		float HorizontalSenstivity = 45.f;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		float VerticalSenstivity = 45.f;

	bool bIsRunning = false;
	bool bIsSprinting = false;

	UPROPERTY(EditAnywhere, Category = Weapon, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class USoundCue* FireSoundCue;

	UPROPERTY(EditAnywhere, Category = Weapon, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UParticleSystem* FireEmitter;

	UPROPERTY(EditAnywhere, Category = Weapon, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UParticleSystem* ImpactParticle;

	UPROPERTY(EditAnywhere, Category = Weapon, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UParticleSystem* BeamParticle;

	FTransform MuzzleTransform;

	UPROPERTY(EditAnywhere, Category = Weapon, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UAnimMontage* HipFireMontage;

	float Velocity;

	// making the crosshairs
	UPROPERTY()
		class AManHUD* ManHUD;

	/**
	* For crosshairs
	*/
	FCrosshairsPackage CrosshairPackage;

	UPROPERTY(EditAnywhere, Category = Crosshairs)
	class UTexture2D* CrosshairsTop;

	UPROPERTY(EditAnywhere, Category = Crosshairs)
	UTexture2D* CrosshairsBottom;

	UPROPERTY(EditAnywhere, Category = Crosshairs)
	UTexture2D* CrosshairsCenter;

	UPROPERTY(EditAnywhere, Category = Crosshairs)
	UTexture2D* CrosshairsLeft;

	UPROPERTY(EditAnywhere, Category = Crosshairs)
	UTexture2D* CrosshairsRight;

	APlayerController* PlayerController;


	/** For aiming */
	bool bAiming = false;

	// as we want smooth interpolation between aimng and not aiming, we need to add variables which will be helpful for POV
	float DefaultPOV;			// set in BeginPlay
	float CurrentPOV;			// will be used in interpolation and setting

	UPROPERTY(EditAnywhere, Category = Weapon)
		float ZoomedPOV = 60.f;			// the amount we want to zoom in. 

public:
	AManCharacter();
	virtual void Tick(float DeltaTime) override;

	void AdjustingAimingPOV(float DeltaTime);

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void TraceForBullet();
	void SetHUDCrosshairs();


protected:
	virtual void BeginPlay() override;

	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void LookUp(float AxisValue);
	void LookRight(float AxisValue);
	void RunningButtonPressed();
	void FireButtonPressed();
	void AimButtonPressed();
	void AimButtonReleased();

public:	
	FORCEINLINE bool GetIsRunning() const { return bIsRunning; }
	void SetIsRunning(bool bRunning);
	FORCEINLINE bool GetAiming() const { return bAiming; }
	float GetWalkingSpeed();

};
