// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManVsMonsters/Animation/ManAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManAnimInstance() {}
// Cross Module References
	MANVSMONSTERS_API UClass* Z_Construct_UClass_UManAnimInstance_NoRegister();
	MANVSMONSTERS_API UClass* Z_Construct_UClass_UManAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_ManVsMonsters();
// End Cross Module References
	void UManAnimInstance::StaticRegisterNativesUManAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManAnimInstance);
	UClass* Z_Construct_UClass_UManAnimInstance_NoRegister()
	{
		return UManAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UManAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ManVsMonsters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/ManAnimInstance.h" },
		{ "ModuleRelativePath", "Animation/ManAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManAnimInstance_Statics::ClassParams = {
		&UManAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UManAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UManAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManAnimInstance.OuterSingleton, Z_Construct_UClass_UManAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManAnimInstance.OuterSingleton;
	}
	template<> MANVSMONSTERS_API UClass* StaticClass<UManAnimInstance>()
	{
		return UManAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManAnimInstance);
	struct Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_Animation_ManAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_Animation_ManAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManAnimInstance, UManAnimInstance::StaticClass, TEXT("UManAnimInstance"), &Z_Registration_Info_UClass_UManAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManAnimInstance), 4055873952U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_Animation_ManAnimInstance_h_3294612111(TEXT("/Script/ManVsMonsters"),
		Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_Animation_ManAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_Animation_ManAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
