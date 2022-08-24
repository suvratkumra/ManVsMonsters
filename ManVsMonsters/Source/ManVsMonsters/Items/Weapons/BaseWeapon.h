// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Item.h"
#include "BaseWeapon.generated.h"

/**
 * 
 */
UCLASS()
class MANVSMONSTERS_API ABaseWeapon : public AItem
{
	GENERATED_BODY()

public:
	ABaseWeapon();
	
private:
	

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
