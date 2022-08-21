// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ManHUD.generated.h"


// Creating the struct for our Crosshairs
USTRUCT(BlueprintType)
struct FCrosshairsPackage
{
	GENERATED_BODY()
public:
	class UTexture2D* CrosshairsTop;
	UTexture2D* CrosshairsBottom;
	UTexture2D* CrosshairsLeft;
	UTexture2D* CrosshairsRight;
	UTexture2D* CrosshairsCenter;
	FLinearColor CrosshairsColor;
};

/**
 * 
 */
UCLASS()
class MANVSMONSTERS_API AManHUD : public AHUD
{
	GENERATED_BODY()
	
private:
	FCrosshairsPackage Crosshairs;
	FVector2D ViewportMiddle;

	class AManCharacter* Character;

	float CrosshairsSpread;

public:
	virtual void DrawHUD() override;

protected:
	void DrawCrosshair(UTexture2D* Texture, FLinearColor Color, float ViewportMiddleWidth, float ViewportMiddleHeight, float SpreadWidth, float SpreadHeight);
	virtual void BeginPlay() override;

public:
	// setter for initializing the HUD
	FORCEINLINE void SetCrosshairsHUD(FCrosshairsPackage Package) { Crosshairs = Package; }

	FVector2D GetViewportMiddle() const { return ViewportMiddle; }
};
