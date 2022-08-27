// Fill out your copyright notice in the Description page of Project Settings.


#include "ManHUD.h"
#include "../Characters/ManCharacter.h"
#include "Kismet/GameplayStatics.h"


void AManHUD::BeginPlay()
{
	Super::BeginPlay();

	Character = Cast<AManCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
}

void AManHUD::DrawHUD()
{
	// calling the super version of drawhud
	Super::DrawHUD();

	FVector2D ViewportSize;

	// getting the size of the viewport by using the gengine classs
	if (GEngine && GEngine->GameViewport)
	{
		GEngine->GameViewport->GetViewportSize(ViewportSize);
	}

	FVector2D Mid{ ViewportSize.X / 2.f, ViewportSize.Y / 2.f };
	ViewportMiddle = Mid;

	CalculateGroundLocomotionSpread();
	CalculateAimSpread();
	CalculateCrouchSpread();
	CalculateJumpSpread();
	CalculateFiringSpread();

	// overall crosshairs spread
	CrosshairsSpread = 0.5f + CrosshairSpreadGroundLocomotion - CrosshairSpreadAiming - CrosshairSpreadCrouch + CrosshairSpreadJump + CrosshairSpreadFire;

	// now we want to draw the viewport in the middle of the screen.
	
	if (Crosshairs.CrosshairsCenter)
	{
		DrawCrosshair(Crosshairs.CrosshairsCenter, FLinearColor::White, ViewportMiddle.X, ViewportMiddle.Y, 0.f, 0.f);
	}
	if (Crosshairs.CrosshairsRight)
	{
		DrawCrosshair(Crosshairs.CrosshairsRight, FLinearColor::White, ViewportMiddle.X, ViewportMiddle.Y, CrosshairsSpread, 0.f);
	}
	if (Crosshairs.CrosshairsLeft)
	{
		DrawCrosshair(Crosshairs.CrosshairsLeft, FLinearColor::White, ViewportMiddle.X, ViewportMiddle.Y, -CrosshairsSpread, 0.f);
	}
	if (Crosshairs.CrosshairsTop)
	{
		DrawCrosshair(Crosshairs.CrosshairsTop, FLinearColor::White, ViewportMiddle.X, ViewportMiddle.Y, 0.f, -CrosshairsSpread);
	}
	if (Crosshairs.CrosshairsBottom)
	{
		DrawCrosshair(Crosshairs.CrosshairsBottom, FLinearColor::White, ViewportMiddle.X, ViewportMiddle.Y, 0.f, CrosshairsSpread);
	}

}

void AManHUD::CalculateAimSpread()
{
	if (Character && Character->GetAiming())
	{
		//UE_LOG(LogTemp, Warning, TEXT("Aimig"));
		CrosshairSpreadAiming = 2.f;
	}
	else
	{
		CrosshairSpreadAiming = 0.f;
	}
}

void AManHUD::CalculateGroundLocomotionSpread()
{
	CrosshairSpreadGroundLocomotion = 0.f;
	FVector2D CharacterVelocity{ 0.f, Character->GetWalkingSpeed() };		// the max speed we have right now, includes running and walking both. (checked with the variable)
	
	float MaxClampingValue = Character->GetIsRunning() ? 5.f : 2.5f;
	
	FVector2D ClampingRange{ 0.f, MaxClampingValue };
	FVector Velocity = Character->GetVelocity();
	Velocity.Z = 0.f;
	CrosshairSpreadGroundLocomotion = FMath::GetMappedRangeValueClamped(CharacterVelocity, ClampingRange, Velocity.Size());
}

void AManHUD::CalculateJumpSpread()
{
	if (Character && Character->GetIsFalling())
	{
		CrosshairSpreadJump = 5.f;
	}
	else
	{
		CrosshairSpreadJump = 0.f;
	}

}

void AManHUD::CalculateCrouchSpread()
{
	if (Character && Character->GetIsCrouched())
	{
		CrosshairSpreadCrouch = 1.5f;
	}
	else
	{
		CrosshairSpreadCrouch = 0.f;
	}
}

void AManHUD::CalculateFiringSpread()
{
	if (Character && Character->GetIsFiring() && Character->GetCanFire())
	{
		CrosshairSpreadFire = 4.f;
	}
	else
	{
		CrosshairSpreadFire = 0.f;
	}
}

void AManHUD::DrawCrosshair(UTexture2D* Texture, FLinearColor Color, float ViewportMiddleWidth, float ViewportMiddleHeight, float SpreadWidth, float SpreadHeight)
{
	const float TextureWidth = Texture->GetSizeX();
	const float TextureHeight = Texture->GetSizeY();

	const FVector2D PointToDraw(ViewportMiddleWidth - (TextureWidth / 2.f) + SpreadWidth, ViewportMiddleHeight - (TextureHeight / 2.f) + SpreadHeight);

	DrawTexture(Texture, PointToDraw.X, PointToDraw.Y, TextureWidth, TextureHeight, 0.f, 0.f, 1.f, 1.f, Color);
}
