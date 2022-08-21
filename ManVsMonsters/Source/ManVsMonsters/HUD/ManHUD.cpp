// Fill out your copyright notice in the Description page of Project Settings.


#include "ManHUD.h"
#include "../Characters/ManCharacter.h"
#include "Kismet/GameplayStatics.h"

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

	float CrosshairSpreadGroundLocomotion = 0.f;
	FVector2D CharacterVelocity{ 0.f, Character->GetWalkingSpeed() };		// the max speed we have right now, includes running and walking both.
	FVector2D ClampingRange{ 0.f, 10.f };
	FVector Velocity = Character->GetVelocity();
	Velocity.Z = 0.f;
	CrosshairSpreadGroundLocomotion = FMath::GetMappedRangeValueClamped(CharacterVelocity, ClampingRange, Velocity.Size());

	// overall crosshairs spread
	CrosshairsSpread = CrosshairSpreadGroundLocomotion;

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

void AManHUD::DrawCrosshair(UTexture2D* Texture, FLinearColor Color, float ViewportMiddleWidth, float ViewportMiddleHeight, float SpreadWidth, float SpreadHeight)
{
	const float TextureWidth = Texture->GetSizeX();
	const float TextureHeight = Texture->GetSizeY();

	const FVector2D PointToDraw(ViewportMiddleWidth - (TextureWidth / 2.f) + SpreadWidth, ViewportMiddleHeight - (TextureHeight / 2.f) + SpreadHeight);

	DrawTexture(Texture, PointToDraw.X, PointToDraw.Y, TextureWidth, TextureHeight, 0.f, 0.f, 1.f, 1.f, Color);
}

void AManHUD::BeginPlay()
{
	Super::BeginPlay();

	Character = Cast<AManCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
}
