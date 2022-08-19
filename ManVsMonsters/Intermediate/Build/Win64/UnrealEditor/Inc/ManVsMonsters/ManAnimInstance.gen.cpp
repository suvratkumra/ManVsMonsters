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
	MANVSMONSTERS_API UClass* Z_Construct_UClass_AManCharacter_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[];
#endif
		static void NewProp_bIsInAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAccelerating_MetaData[];
#endif
		static void NewProp_bIsAccelerating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAccelerating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lean_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lean;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRunning_MetaData[];
#endif
		static void NewProp_bIsRunning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRunning;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManAnimInstance_Statics::NewProp_Character_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "// it should be blueprint readable so that we can add the animation to it\n" },
		{ "ModuleRelativePath", "Animation/ManAnimInstance.h" },
		{ "ToolTip", "it should be blueprint readable so that we can add the animation to it" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManAnimInstance_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManAnimInstance, Character), Z_Construct_UClass_AManCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UManAnimInstance_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManAnimInstance_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManAnimInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Animation/ManAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManAnimInstance, Speed), METADATA_PARAMS(Z_Construct_UClass_UManAnimInstance_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManAnimInstance_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManAnimInstance_Statics::NewProp_bIsInAir_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Animation/ManAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UManAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
	{
		((UManAnimInstance*)Obj)->bIsInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UManAnimInstance), &Z_Construct_UClass_UManAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManAnimInstance_Statics::NewProp_bIsInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManAnimInstance_Statics::NewProp_bIsInAir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManAnimInstance_Statics::NewProp_bIsAccelerating_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Animation/ManAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UManAnimInstance_Statics::NewProp_bIsAccelerating_SetBit(void* Obj)
	{
		((UManAnimInstance*)Obj)->bIsAccelerating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManAnimInstance_Statics::NewProp_bIsAccelerating = { "bIsAccelerating", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UManAnimInstance), &Z_Construct_UClass_UManAnimInstance_Statics::NewProp_bIsAccelerating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManAnimInstance_Statics::NewProp_bIsAccelerating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManAnimInstance_Statics::NewProp_bIsAccelerating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManAnimInstance_Statics::NewProp_Lean_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Animation/ManAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManAnimInstance_Statics::NewProp_Lean = { "Lean", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManAnimInstance, Lean), METADATA_PARAMS(Z_Construct_UClass_UManAnimInstance_Statics::NewProp_Lean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManAnimInstance_Statics::NewProp_Lean_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManAnimInstance_Statics::NewProp_YawOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Animation/ManAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManAnimInstance_Statics::NewProp_YawOffset = { "YawOffset", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UManAnimInstance, YawOffset), METADATA_PARAMS(Z_Construct_UClass_UManAnimInstance_Statics::NewProp_YawOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManAnimInstance_Statics::NewProp_YawOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManAnimInstance_Statics::NewProp_bIsRunning_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Animation/ManAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UManAnimInstance_Statics::NewProp_bIsRunning_SetBit(void* Obj)
	{
		((UManAnimInstance*)Obj)->bIsRunning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManAnimInstance_Statics::NewProp_bIsRunning = { "bIsRunning", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UManAnimInstance), &Z_Construct_UClass_UManAnimInstance_Statics::NewProp_bIsRunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManAnimInstance_Statics::NewProp_bIsRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManAnimInstance_Statics::NewProp_bIsRunning_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManAnimInstance_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManAnimInstance_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManAnimInstance_Statics::NewProp_bIsInAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManAnimInstance_Statics::NewProp_bIsAccelerating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManAnimInstance_Statics::NewProp_Lean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManAnimInstance_Statics::NewProp_YawOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManAnimInstance_Statics::NewProp_bIsRunning,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManAnimInstance_Statics::ClassParams = {
		&UManAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UManAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UManAnimInstance_Statics::PropPointers),
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
		{ Z_Construct_UClass_UManAnimInstance, UManAnimInstance::StaticClass, TEXT("UManAnimInstance"), &Z_Registration_Info_UClass_UManAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManAnimInstance), 1454614708U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_Animation_ManAnimInstance_h_4169320095(TEXT("/Script/ManVsMonsters"),
		Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_Animation_ManAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_Animation_ManAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
