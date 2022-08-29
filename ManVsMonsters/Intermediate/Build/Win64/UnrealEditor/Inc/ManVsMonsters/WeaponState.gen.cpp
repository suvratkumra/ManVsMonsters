// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManVsMonsters/Items/WeaponState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponState() {}
// Cross Module References
	MANVSMONSTERS_API UEnum* Z_Construct_UEnum_ManVsMonsters_EWeaponType();
	UPackage* Z_Construct_UPackage__Script_ManVsMonsters();
	MANVSMONSTERS_API UEnum* Z_Construct_UEnum_ManVsMonsters_EWeaponState();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponType;
	static UEnum* EWeaponType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWeaponType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWeaponType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ManVsMonsters_EWeaponType, Z_Construct_UPackage__Script_ManVsMonsters(), TEXT("EWeaponType"));
		}
		return Z_Registration_Info_UEnum_EWeaponType.OuterSingleton;
	}
	template<> MANVSMONSTERS_API UEnum* StaticEnum<EWeaponType>()
	{
		return EWeaponType_StaticEnum();
	}
	struct Z_Construct_UEnum_ManVsMonsters_EWeaponType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ManVsMonsters_EWeaponType_Statics::Enumerators[] = {
		{ "EWeaponType::EWT_Damaged", (int64)EWeaponType::EWT_Damaged },
		{ "EWeaponType::EWT_Common", (int64)EWeaponType::EWT_Common },
		{ "EWeaponType::EWT_Uncommon", (int64)EWeaponType::EWT_Uncommon },
		{ "EWeaponType::EWT_Rare", (int64)EWeaponType::EWT_Rare },
		{ "EWeaponType::EWT_Legendary", (int64)EWeaponType::EWT_Legendary },
		{ "EWeaponType::EWT_MAX", (int64)EWeaponType::EWT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ManVsMonsters_EWeaponType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EWT_Common.DisplayName", "Common Weapon" },
		{ "EWT_Common.Name", "EWeaponType::EWT_Common" },
		{ "EWT_Damaged.DisplayName", "Damaged Weapon" },
		{ "EWT_Damaged.Name", "EWeaponType::EWT_Damaged" },
		{ "EWT_Legendary.DisplayName", "Legendary Weapon" },
		{ "EWT_Legendary.Name", "EWeaponType::EWT_Legendary" },
		{ "EWT_MAX.DisplayName", "Default MAX" },
		{ "EWT_MAX.Name", "EWeaponType::EWT_MAX" },
		{ "EWT_Rare.DisplayName", "Rare Weapon" },
		{ "EWT_Rare.Name", "EWeaponType::EWT_Rare" },
		{ "EWT_Uncommon.DisplayName", "Uncommon Weapon" },
		{ "EWT_Uncommon.Name", "EWeaponType::EWT_Uncommon" },
		{ "ModuleRelativePath", "Items/WeaponState.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ManVsMonsters_EWeaponType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ManVsMonsters,
		nullptr,
		"EWeaponType",
		"EWeaponType",
		Z_Construct_UEnum_ManVsMonsters_EWeaponType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ManVsMonsters_EWeaponType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ManVsMonsters_EWeaponType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ManVsMonsters_EWeaponType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ManVsMonsters_EWeaponType()
	{
		if (!Z_Registration_Info_UEnum_EWeaponType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponType.InnerSingleton, Z_Construct_UEnum_ManVsMonsters_EWeaponType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWeaponType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponState;
	static UEnum* EWeaponState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWeaponState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWeaponState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ManVsMonsters_EWeaponState, Z_Construct_UPackage__Script_ManVsMonsters(), TEXT("EWeaponState"));
		}
		return Z_Registration_Info_UEnum_EWeaponState.OuterSingleton;
	}
	template<> MANVSMONSTERS_API UEnum* StaticEnum<EWeaponState>()
	{
		return EWeaponState_StaticEnum();
	}
	struct Z_Construct_UEnum_ManVsMonsters_EWeaponState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ManVsMonsters_EWeaponState_Statics::Enumerators[] = {
		{ "EWeaponState::EWS_Equipped", (int64)EWeaponState::EWS_Equipped },
		{ "EWeaponState::EWS_Dropped", (int64)EWeaponState::EWS_Dropped },
		{ "EWeaponState::EWS_Falling", (int64)EWeaponState::EWS_Falling },
		{ "EWeaponState::EWS_EquippedSecondary", (int64)EWeaponState::EWS_EquippedSecondary },
		{ "EWeaponState::EWS_MAX", (int64)EWeaponState::EWS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ManVsMonsters_EWeaponState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EWS_Dropped.DisplayName", "Dropped" },
		{ "EWS_Dropped.Name", "EWeaponState::EWS_Dropped" },
		{ "EWS_Equipped.DisplayName", "Equipped" },
		{ "EWS_Equipped.Name", "EWeaponState::EWS_Equipped" },
		{ "EWS_EquippedSecondary.DisplayName", "Equipped Secondary" },
		{ "EWS_EquippedSecondary.Name", "EWeaponState::EWS_EquippedSecondary" },
		{ "EWS_Falling.DisplayName", "Falling" },
		{ "EWS_Falling.Name", "EWeaponState::EWS_Falling" },
		{ "EWS_MAX.DisplayName", "DefaultMax" },
		{ "EWS_MAX.Name", "EWeaponState::EWS_MAX" },
		{ "ModuleRelativePath", "Items/WeaponState.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ManVsMonsters_EWeaponState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ManVsMonsters,
		nullptr,
		"EWeaponState",
		"EWeaponState",
		Z_Construct_UEnum_ManVsMonsters_EWeaponState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ManVsMonsters_EWeaponState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ManVsMonsters_EWeaponState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ManVsMonsters_EWeaponState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ManVsMonsters_EWeaponState()
	{
		if (!Z_Registration_Info_UEnum_EWeaponState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponState.InnerSingleton, Z_Construct_UEnum_ManVsMonsters_EWeaponState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWeaponState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_Items_WeaponState_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_Items_WeaponState_h_Statics::EnumInfo[] = {
		{ EWeaponType_StaticEnum, TEXT("EWeaponType"), &Z_Registration_Info_UEnum_EWeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1102259309U) },
		{ EWeaponState_StaticEnum, TEXT("EWeaponState"), &Z_Registration_Info_UEnum_EWeaponState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2889530807U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_Items_WeaponState_h_1760338852(TEXT("/Script/ManVsMonsters"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_Items_WeaponState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_Items_WeaponState_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
