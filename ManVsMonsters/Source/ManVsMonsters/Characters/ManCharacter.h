// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
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

public:
	AManCharacter();
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


protected:
	virtual void BeginPlay() override;

	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void LookUp(float AxisValue);
	void LookRight(float AxisValue);
	void RunningButtonPressed();

public:	
	FORCEINLINE bool GetIsRunning() const { return bIsRunning; }
	void SetIsRunning(bool bRunning);

};
