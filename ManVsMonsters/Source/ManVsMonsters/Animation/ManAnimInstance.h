// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ManAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class MANVSMONSTERS_API UManAnimInstance : public UAnimInstance
{
	GENERATED_BODY()


		// two of the most important functions which act as beginplay and tick function for the animations
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

private:
	UPROPERTY()
	class AManCharacter* Character;
};
