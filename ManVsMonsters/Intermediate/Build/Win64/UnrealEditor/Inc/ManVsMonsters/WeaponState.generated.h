// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MANVSMONSTERS_WeaponState_generated_h
#error "WeaponState.generated.h already included, missing '#pragma once' in WeaponState.h"
#endif
#define MANVSMONSTERS_WeaponState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ManVsMonsters_Source_ManVsMonsters_Items_WeaponState_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::EWT_Used) \
	op(EWeaponType::EWT_Common) \
	op(EWeaponType::EWT_Uncommon) \
	op(EWeaponType::EWT_Rare) \
	op(EWeaponType::EWT_Legendary) 

enum class EWeaponType : uint8;
template<> MANVSMONSTERS_API UEnum* StaticEnum<EWeaponType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
