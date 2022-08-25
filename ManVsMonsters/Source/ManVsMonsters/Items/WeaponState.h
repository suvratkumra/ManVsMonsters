#pragma once

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	EWT_Used UMETA(DisplayName = "Used Weapon"),
	EWT_Common UMETA(DisplayName = "Common Weapon"),
	EWT_Uncommon UMETA(DisplayName = "Uncommon Weapon"),
	EWT_Rare UMETA(DisplayName = "Rare Weapon"),
	EWT_Legendary UMETA(DisplayName = "Legendary Weapon"),
	EWT_MAX UMETA(DisplayName = "Default MAX")
};