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
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void UPickupUserWidget::StaticRegisterNativesUPickupUserWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPickupUserWidget);
	UClass* Z_Construct_UClass_UPickupUserWidget_NoRegister()
	{
		return UPickupUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPickupUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Star1Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Star1Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Star2Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Star2Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Star3Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Star3Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Star4Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Star4Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Star5Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Star5Image;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPickupUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ManVsMonsters,
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_WeaponName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PickupUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/PickupUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_WeaponName = { "WeaponName", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPickupUserWidget, WeaponName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_WeaponName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_WeaponName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star1Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PickupUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/PickupUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star1Image = { "Star1Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPickupUserWidget, Star1Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star1Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star1Image_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star2Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PickupUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/PickupUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star2Image = { "Star2Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPickupUserWidget, Star2Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star2Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star2Image_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star3Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PickupUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/PickupUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star3Image = { "Star3Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPickupUserWidget, Star3Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star3Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star3Image_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star4Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PickupUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/PickupUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star4Image = { "Star4Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPickupUserWidget, Star4Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star4Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star4Image_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star5Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PickupUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/PickupUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star5Image = { "Star5Image", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPickupUserWidget, Star5Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star5Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star5Image_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPickupUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_WeaponTypeText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_AmmoText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_WeaponName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star1Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star2Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star3Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star4Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickupUserWidget_Statics::NewProp_Star5Image,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPickupUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPickupUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPickupUserWidget_Statics::ClassParams = {
		&UPickupUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPickupUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ Z_Construct_UClass_UPickupUserWidget, UPickupUserWidget::StaticClass, TEXT("UPickupUserWidget"), &Z_Registration_Info_UClass_UPickupUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPickupUserWidget), 4247356004U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_HUD_PickupUserWidget_h_516158979(TEXT("/Script/ManVsMonsters"),
		Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_HUD_PickupUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_HUD_PickupUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
