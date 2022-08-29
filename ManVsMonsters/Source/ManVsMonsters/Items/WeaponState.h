#pragma once

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	EWT_Damaged UMETA(DisplayName = "Damaged Weapon"),
	EWT_Common UMETA(DisplayName = "Common Weapon"),
	EWT_Uncommon UMETA(DisplayName = "Uncommon Weapon"),
	EWT_Rare UMETA(DisplayName = "Rare Weapon"),
	EWT_Legendary UMETA(DisplayName = "Legendary Weapon"),
	EWT_MAX UMETA(DisplayName = "Default MAX")
};

UENUM(BlueprintType)
enum class EWeaponState : uint8
{
	EWS_Equipped UMETA(DisplayName = "Equipped"),
	EWS_Dropped UMETA(DisplayName = "Dropped"),
	EWS_Falling UMETA(DisplayName = "Falling"),
	EWS_EquippedSecondary UMETA(DisplayName = "Equipped Secondary"),
	EWS_MAX UMETA(DisplayName = "DefaultMax")
};