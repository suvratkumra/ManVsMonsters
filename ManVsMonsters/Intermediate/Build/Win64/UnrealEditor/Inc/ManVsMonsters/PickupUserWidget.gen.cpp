// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManVsMonsters/HUD/PickupUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupUserWidget() {}
// Cross Module References
	MANVSMONSTERS_API UClass* Z_Construct_UClass_UPickupUserWidget_NoRegister();
	MANVSMONSTERS_API UClass* Z_Construct_UClass_UPickupUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ManVsMonsters();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPickupUserWidget::execSetWeaponAmmo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AmmoAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWeaponAmmo(Z_Param_AmmoAmount);
		P_NATIVE_END;
	}
	void UPickupUserWidget::StaticRegisterNativesUPickupUserWidget()
	{
		UClass* Class = UPickupUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetWeaponAmmo", &UPickupUserWidget::execSetWeaponAmmo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPickupUserWidget_SetWeaponAmmo_Statics
	{
		struct PickupUserWidget_eventSetWeaponAmmo_Parms
		{
			FString AmmoAmount;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AmmoAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPickupUserWidget_SetWeaponAmmo_Statics::NewProp_AmmoAmount = { "AmmoAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PickupUserWidget_eventSetWeaponAmmo_Parms, AmmoAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPickupUserWidget_SetWeaponAmmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPickupUserWidget_SetWeaponAmmo_Statics::NewProp_AmmoAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPickupUserWidget_SetWeaponAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/PickupUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPickupUserWidget_SetWeaponAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPickupUserWidget, nullptr, "SetWeaponAmmo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPickupUserWidget_SetWeaponAmmo_Statics::PickupUserWidget_eventSetWeaponAmmo_Parms), Z_Construct_UFunction_UPickupUserWidget_SetWeaponAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupUserWidget_SetWeaponAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPickupUserWidget_SetWeaponAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupUserWidget_SetWeaponAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPickupUserWidget_SetWeaponAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPickupUserWidget_SetWeaponAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPickupUserWidget);
	UClass* Z_Construct_UClass_UPickupUserWidget_NoRegister()
	{
		return UPickupUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPickupUserWidget_Statics
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
	UObject* (*const Z_Construct_UClass_UPickupUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ManVsMonsters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPickupUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPickupUserWidget_SetWeaponAmmo, "SetWeaponAmmo" }, // 2463072535
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickupUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD/PickupUserWidget.h" },
		{ "ModuleRelativePath", "HUD/PickupUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_WeaponTypeText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/PickupUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_WeaponTypeText = { "WeaponTypeText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPickupUserWidget, WeaponTypeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_WeaponTypeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_WeaponTypeText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_AmmoText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PickupUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/PickupUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_AmmoText = { "AmmoText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPickupUserWidget, AmmoText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_AmmoText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_AmmoText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPickupUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_WeaponTypeText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_AmmoText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPickupUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPickupUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPickupUserWidget_Statics::ClassParams = {
		&UPickupUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPickupUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPickupUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPickupUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPickupUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPickupUserWidget()
	{
		if (!Z_Registration_Info_UClass_UPickupUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPickupUserWidget.OuterSingleton, Z_Construct_UClass_UPickupUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPickupUserWidget.OuterSingleton;
	}
	template<> MANVSMONSTERS_API UClass* StaticClass<UPickupUserWidget>()
	{
		return UPickupUserWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPickupUserWidget);
	struct Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_HUD_PickupUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_HUD_PickupUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPickupUserWidget, UPickupUserWidget::StaticClass, TEXT("UPickupUserWidget"), &Z_Registration_Info_UClass_UPickupUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPickupUserWidget), 1833900340U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_HUD_PickupUserWidget_h_3816763383(TEXT("/Script/ManVsMonsters"),
		Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_HUD_PickupUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_HUD_PickupUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
