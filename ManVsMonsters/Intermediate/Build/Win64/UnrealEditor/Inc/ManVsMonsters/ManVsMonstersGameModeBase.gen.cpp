// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManVsMonsters/ManVsMonstersGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManVsMonstersGameModeBase() {}
// Cross Module References
	MANVSMONSTERS_API UClass* Z_Construct_UClass_AManVsMonstersGameModeBase_NoRegister();
	MANVSMONSTERS_API UClass* Z_Construct_UClass_AManVsMonstersGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ManVsMonsters();
// End Cross Module References
	void AManVsMonstersGameModeBase::StaticRegisterNativesAManVsMonstersGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AManVsMonstersGameModeBase);
	UClass* Z_Construct_UClass_AManVsMonstersGameModeBase_NoRegister()
	{
		return AManVsMonstersGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AManVsMonstersGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AManVsMonstersGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ManVsMonsters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManVsMonstersGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ManVsMonstersGameModeBase.h" },
		{ "ModuleRelativePath", "ManVsMonstersGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AManVsMonstersGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AManVsMonstersGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AManVsMonstersGameModeBase_Statics::ClassParams = {
		&AManVsMonstersGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AManVsMonstersGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AManVsMonstersGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AManVsMonstersGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AManVsMonstersGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AManVsMonstersGameModeBase.OuterSingleton, Z_Construct_UClass_AManVsMonstersGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AManVsMonstersGameModeBase.OuterSingleton;
	}
	template<> MANVSMONSTERS_API UClass* StaticClass<AManVsMonstersGameModeBase>()
	{
		return AManVsMonstersGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AManVsMonstersGameModeBase);
	struct Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_ManVsMonstersGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_ManVsMonstersGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AManVsMonstersGameModeBase, AManVsMonstersGameModeBase::StaticClass, TEXT("AManVsMonstersGameModeBase"), &Z_Registration_Info_UClass_AManVsMonstersGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AManVsMonstersGameModeBase), 777996200U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_ManVsMonstersGameModeBase_h_947924435(TEXT("/Script/ManVsMonsters"),
		Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_ManVsMonstersGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_ManVsMonstersGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
