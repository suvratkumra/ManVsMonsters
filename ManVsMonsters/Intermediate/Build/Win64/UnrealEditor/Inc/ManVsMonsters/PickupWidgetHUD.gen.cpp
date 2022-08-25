// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManVsMonsters/HUD/PickupWidgetHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupWidgetHUD() {}
// Cross Module References
	MANVSMONSTERS_API UClass* Z_Construct_UClass_APickupWidgetHUD_NoRegister();
	MANVSMONSTERS_API UClass* Z_Construct_UClass_APickupWidgetHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ManVsMonsters();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APickupWidgetHUD::execSetWeaponStatus)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WeaponStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWeaponStatus(Z_Param_WeaponStatus);
		P_NATIVE_END;
	}
	void APickupWidgetHUD::StaticRegisterNativesAPickupWidgetHUD()
	{
		UClass* Class = APickupWidgetHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetWeaponStatus", &APickupWidgetHUD::execSetWeaponStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickupWidgetHUD_SetWeaponStatus_Statics
	{
		struct PickupWidgetHUD_eventSetWeaponStatus_Parms
		{
			FString WeaponStatus;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_WeaponStatus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APickupWidgetHUD_SetWeaponStatus_Statics::NewProp_WeaponStatus = { "WeaponStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PickupWidgetHUD_eventSetWeaponStatus_Parms, WeaponStatus), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupWidgetHUD_SetWeaponStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupWidgetHUD_SetWeaponStatus_Statics::NewProp_WeaponStatus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupWidgetHUD_SetWeaponStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/PickupWidgetHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupWidgetHUD_SetWeaponStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupWidgetHUD, nullptr, "SetWeaponStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_APickupWidgetHUD_SetWeaponStatus_Statics::PickupWidgetHUD_eventSetWeaponStatus_Parms), Z_Construct_UFunction_APickupWidgetHUD_SetWeaponStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupWidgetHUD_SetWeaponStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickupWidgetHUD_SetWeaponStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupWidgetHUD_SetWeaponStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickupWidgetHUD_SetWeaponStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupWidgetHUD_SetWeaponStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickupWidgetHUD);
	UClass* Z_Construct_UClass_APickupWidgetHUD_NoRegister()
	{
		return APickupWidgetHUD::StaticClass();
	}
	struct Z_Construct_UClass_APickupWidgetHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponTypeText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponTypeText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AmmoText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupWidgetHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ManVsMonsters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickupWidgetHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickupWidgetHUD_SetWeaponStatus, "SetWeaponStatus" }, // 393351185
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupWidgetHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/PickupWidgetHUD.h" },
		{ "ModuleRelativePath", "HUD/PickupWidgetHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupWidgetHUD_Statics::NewProp_WeaponTypeText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/PickupWidgetHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupWidgetHUD_Statics::NewProp_WeaponTypeText = { "WeaponTypeText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupWidgetHUD, WeaponTypeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupWidgetHUD_Statics::NewProp_WeaponTypeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupWidgetHUD_Statics::NewProp_WeaponTypeText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupWidgetHUD_Statics::NewProp_AmmoText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/PickupWidgetHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupWidgetHUD_Statics::NewProp_AmmoText = { "AmmoText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupWidgetHUD, AmmoText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupWidgetHUD_Statics::NewProp_AmmoText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupWidgetHUD_Statics::NewProp_AmmoText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupWidgetHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupWidgetHUD_Statics::NewProp_WeaponTypeText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupWidgetHUD_Statics::NewProp_AmmoText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupWidgetHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupWidgetHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickupWidgetHUD_Statics::ClassParams = {
		&APickupWidgetHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickupWidgetHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickupWidgetHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APickupWidgetHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickupWidgetHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickupWidgetHUD()
	{
		if (!Z_Registration_Info_UClass_APickupWidgetHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickupWidgetHUD.OuterSingleton, Z_Construct_UClass_APickupWidgetHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickupWidgetHUD.OuterSingleton;
	}
	template<> MANVSMONSTERS_API UClass* StaticClass<APickupWidgetHUD>()
	{
		return APickupWidgetHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupWidgetHUD);
	struct Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_HUD_PickupWidgetHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_HUD_PickupWidgetHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickupWidgetHUD, APickupWidgetHUD::StaticClass, TEXT("APickupWidgetHUD"), &Z_Registration_Info_UClass_APickupWidgetHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickupWidgetHUD), 3060632586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_HUD_PickupWidgetHUD_h_3683061926(TEXT("/Script/ManVsMonsters"),
		Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_HUD_PickupWidgetHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_HUD_PickupWidgetHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
