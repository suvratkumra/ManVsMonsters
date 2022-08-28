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

	UPROPERTY(EditAnywhere, Category = Movement, meta = (ClampMin = "1", ClampMax = "100", UIMin = "1", UIMax = "100"))
		float HorizontalSenstivity = 45.f;

	UPROPERTY(EditAnywhere, Category = Movement, meta = (ClampMin = "1", ClampMax = "100", UIMin = "1", UIMax = "100"))
		float VerticalSenstivity = 45.f;

	bool bIsRunning = true;
	bool bIsSprinting = true;

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

	UPROPERTY(EditAnywhere, Category = Movement, meta = (ClampMin = "1", ClampMax = "100", UIMin = "1", UIMax = "100"))
		float HorizontalAimSenstivity = 0.f;

	UPROPERTY(EditAnywhere, Category = Movement, meta = (ClampMin = "1", ClampMax = "100", UIMin = "1", UIMax = "100"))
		float VerticalAimSenstivity = 0.f;

	// as we want smooth interpolation between aimng and not aiming, we need to add variables which will be helpful for POV
	float DefaultPOV;			// set in BeginPlay
	float CurrentPOV;			// will be used in interpolation and setting

	UPROPERTY(EditAnywhere, Category = Weapon)
		float ZoomedPOV = 60.f;			// the amount we want to zoom in. 


	/** For Automatic fire */
	UPROPERTY(EditAnywhere, Category = Weapon)
	float FireDelay = 1.f;
	
	bool bFireButtonHeld = false;
	bool CanFire = true;			// when this is true only then the bullet can be fired. (to avoid the rapid spam of the fire key)
	FTimerHandle AutomaticFireTimerHandle;		// need it for the timer.

	void StartFireTimer();
	void EndFireTimer();


	/** For Spawning a base weapon*/
	class AWeapon* BaseWeapon;

	UPROPERTY(EditDefaultsOnly, Category = Weapon)
		TSubclassOf<AWeapon> BaseWeaponClass;

	void AttachActorToRightHand(AWeapon* WeaponToAttach);

	void AttachActorToSpine(AWeapon* WeaponToAttach);

	/** For Equipping a secondary weapon */
	UPROPERTY()
		AWeapon* OverlappingWeapon;

	UPROPERTY()
		AWeapon* SecondaryWeapon;

	void HandleEquippingSecondaryWeapon();

	/** FOR SWITCHING b/w a secondary and primary weapon */
	UPROPERTY()
	AWeapon* ActiveWeapon;

	UPROPERTY()
		AWeapon* PrimaryWeapon;

	UPROPERTY(EditAnywhere, Category = Weapon, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		class UAnimMontage* SwapWeaponMontage;

	bool bUsingPrimary = true;

	FTimerHandle DisableFireTimerHandle;
	void FinishFireTimerHandle();


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
	void AimButtonPressed();
	void AimButtonReleased();
	
	// for automatic fire
	void Fire();
	void FireButtonPressed();
	void FireButtonReleased();
	
	// for equipping weapon
	void EquipButtonPressed();

	// for switching to secondary weapon
	void SecondaryWeaponButtonPressed();

	void HandleSwapWeapon();

	// for switching to primary weapon
	void PrimaryWeaponButtonPressed();

public:	
	FORCEINLINE bool GetIsRunning() const { return bIsRunning; }
	void SetIsRunning(bool bRunning);
	FORCEINLINE bool GetAiming() const { return bAiming; }
	float GetWalkingSpeed();
	bool GetIsFalling();
	bool GetIsCrouched();
	FORCEINLINE bool GetCanFire() const { return CanFire; }
	FORCEINLINE bool GetIsFiring() const { return bFireButtonHeld; }
	void SetOverlappingWeapon(AWeapon* Weapon);

};
