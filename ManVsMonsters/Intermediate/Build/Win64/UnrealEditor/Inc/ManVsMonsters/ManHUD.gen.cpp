// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManVsMonsters/HUD/ManHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManHUD() {}
// Cross Module References
	MANVSMONSTERS_API UScriptStruct* Z_Construct_UScriptStruct_FCrosshairsPackage();
	UPackage* Z_Construct_UPackage__Script_ManVsMonsters();
	MANVSMONSTERS_API UClass* Z_Construct_UClass_AManHUD_NoRegister();
	MANVSMONSTERS_API UClass* Z_Construct_UClass_AManHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrosshairsPackage;
class UScriptStruct* FCrosshairsPackage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrosshairsPackage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrosshairsPackage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrosshairsPackage, Z_Construct_UPackage__Script_ManVsMonsters(), TEXT("CrosshairsPackage"));
	}
	return Z_Registration_Info_UScriptStruct_CrosshairsPackage.OuterSingleton;
}
template<> MANVSMONSTERS_API UScriptStruct* StaticStruct<FCrosshairsPackage>()
{
	return FCrosshairsPackage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCrosshairsPackage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrosshairsPackage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Creating the struct for our Crosshairs\n" },
		{ "ModuleRelativePath", "HUD/ManHUD.h" },
		{ "ToolTip", "Creating the struct for our Crosshairs" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrosshairsPackage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrosshairsPackage>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrosshairsPackage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ManVsMonsters,
		nullptr,
		&NewStructOps,
		"CrosshairsPackage",
		sizeof(FCrosshairsPackage),
		alignof(FCrosshairsPackage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCrosshairsPackage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrosshairsPackage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCrosshairsPackage()
	{
		if (!Z_Registration_Info_UScriptStruct_CrosshairsPackage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrosshairsPackage.InnerSingleton, Z_Construct_UScriptStruct_FCrosshairsPackage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CrosshairsPackage.InnerSingleton;
	}
	void AManHUD::StaticRegisterNativesAManHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AManHUD);
	UClass* Z_Construct_UClass_AManHUD_NoRegister()
	{
		return AManHUD::StaticClass();
	}
	struct Z_Construct_UClass_AManHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AManHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ManVsMonsters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/ManHUD.h" },
		{ "ModuleRelativePath", "HUD/ManHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AManHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AManHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AManHUD_Statics::ClassParams = {
		&AManHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AManHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AManHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AManHUD()
	{
		if (!Z_Registration_Info_UClass_AManHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AManHUD.OuterSingleton, Z_Construct_UClass_AManHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AManHUD.OuterSingleton;
	}
	template<> MANVSMONSTERS_API UClass* StaticClass<AManHUD>()
	{
		return AManHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AManHUD);
	struct Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_HUD_ManHUD_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_HUD_ManHUD_h_Statics::ScriptStructInfo[] = {
		{ FCrosshairsPackage::StaticStruct, Z_Construct_UScriptStruct_FCrosshairsPackage_Statics::NewStructOps, TEXT("CrosshairsPackage"), &Z_Registration_Info_UScriptStruct_CrosshairsPackage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrosshairsPackage), 2812317238U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_HUD_ManHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AManHUD, AManHUD::StaticClass, TEXT("AManHUD"), &Z_Registration_Info_UClass_AManHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AManHUD), 3432862557U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_HUD_ManHUD_h_3012316572(TEXT("/Script/ManVsMonsters"),
		Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_HUD_ManHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_HUD_ManHUD_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_HUD_ManHUD_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_HUD_ManHUD_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
