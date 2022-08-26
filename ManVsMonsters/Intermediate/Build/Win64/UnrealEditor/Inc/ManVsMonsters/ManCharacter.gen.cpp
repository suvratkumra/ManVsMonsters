// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManVsMonsters/Characters/ManCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManCharacter() {}
// Cross Module References
	MANVSMONSTERS_API UClass* Z_Construct_UClass_AManCharacter_NoRegister();
	MANVSMONSTERS_API UClass* Z_Construct_UClass_AManCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ManVsMonsters();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	MANVSMONSTERS_API UClass* Z_Construct_UClass_AManHUD_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MANVSMONSTERS_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
// End Cross Module References
	void AManCharacter::StaticRegisterNativesAManCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AManCharacter);
	UClass* Z_Construct_UClass_AManCharacter_NoRegister()
	{
		return AManCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AManCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalSenstivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalSenstivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalSenstivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalSenstivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireSoundCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSoundCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireEmitter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireEmitter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeamParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BeamParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HipFireMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HipFireMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManHUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ManHUD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairsTop_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairsTop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairsBottom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairsBottom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairsCenter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairsCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairsLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairsLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairsRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairsRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAimSenstivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalAimSenstivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAimSenstivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalAimSenstivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomedPOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomedPOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseWeaponClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BaseWeaponClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AManCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ManVsMonsters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/ManCharacter.h" },
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::NewProp_HorizontalSenstivity_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AManCharacter_Statics::NewProp_HorizontalSenstivity = { "HorizontalSenstivity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManCharacter, HorizontalSenstivity), METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::NewProp_HorizontalSenstivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::NewProp_HorizontalSenstivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::NewProp_VerticalSenstivity_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AManCharacter_Statics::NewProp_VerticalSenstivity = { "VerticalSenstivity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManCharacter, VerticalSenstivity), METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::NewProp_VerticalSenstivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::NewProp_VerticalSenstivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::NewProp_FireSoundCue_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManCharacter_Statics::NewProp_FireSoundCue = { "FireSoundCue", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManCharacter, FireSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::NewProp_FireSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::NewProp_FireSoundCue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::NewProp_FireEmitter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManCharacter_Statics::NewProp_FireEmitter = { "FireEmitter", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManCharacter, FireEmitter), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::NewProp_FireEmitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::NewProp_FireEmitter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::NewProp_ImpactParticle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManCharacter_Statics::NewProp_ImpactParticle = { "ImpactParticle", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManCharacter, ImpactParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::NewProp_ImpactParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::NewProp_ImpactParticle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::NewProp_BeamParticle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManCharacter_Statics::NewProp_BeamParticle = { "BeamParticle", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManCharacter, BeamParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::NewProp_BeamParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::NewProp_BeamParticle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::NewProp_HipFireMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManCharacter_Statics::NewProp_HipFireMontage = { "HipFireMontage", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManCharacter, HipFireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::NewProp_HipFireMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::NewProp_HipFireMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::NewProp_ManHUD_MetaData[] = {
		{ "Comment", "// making the crosshairs\n" },
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
		{ "ToolTip", "making the crosshairs" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManCharacter_Statics::NewProp_ManHUD = { "ManHUD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManCharacter, ManHUD), Z_Construct_UClass_AManHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::NewProp_ManHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::NewProp_ManHUD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsTop_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsTop = { "CrosshairsTop", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManCharacter, CrosshairsTop), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsTop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsTop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsBottom_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsBottom = { "CrosshairsBottom", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManCharacter, CrosshairsBottom), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsBottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsBottom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsCenter_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsCenter = { "CrosshairsCenter", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManCharacter, CrosshairsCenter), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsCenter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsLeft_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsLeft = { "CrosshairsLeft", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManCharacter, CrosshairsLeft), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsRight_MetaData[] = {
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsRight = { "CrosshairsRight", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManCharacter, CrosshairsRight), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::NewProp_HorizontalAimSenstivity_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AManCharacter_Statics::NewProp_HorizontalAimSenstivity = { "HorizontalAimSenstivity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManCharacter, HorizontalAimSenstivity), METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::NewProp_HorizontalAimSenstivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::NewProp_HorizontalAimSenstivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::NewProp_VerticalAimSenstivity_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AManCharacter_Statics::NewProp_VerticalAimSenstivity = { "VerticalAimSenstivity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManCharacter, VerticalAimSenstivity), METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::NewProp_VerticalAimSenstivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::NewProp_VerticalAimSenstivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::NewProp_ZoomedPOV_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "// will be used in interpolation and setting\n" },
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
		{ "ToolTip", "will be used in interpolation and setting" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AManCharacter_Statics::NewProp_ZoomedPOV = { "ZoomedPOV", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManCharacter, ZoomedPOV), METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::NewProp_ZoomedPOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::NewProp_ZoomedPOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::NewProp_FireDelay_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** For Automatic fire */" },
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
		{ "ToolTip", "For Automatic fire" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AManCharacter_Statics::NewProp_FireDelay = { "FireDelay", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManCharacter, FireDelay), METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::NewProp_FireDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::NewProp_FireDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::NewProp_BaseWeaponClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AManCharacter_Statics::NewProp_BaseWeaponClass = { "BaseWeaponClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManCharacter, BaseWeaponClass), Z_Construct_UClass_AWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::NewProp_BaseWeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::NewProp_BaseWeaponClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::NewProp_OverlappingWeapon_MetaData[] = {
		{ "Comment", "/** For Equipping a secondary weapon */" },
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
		{ "ToolTip", "For Equipping a secondary weapon" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManCharacter_Statics::NewProp_OverlappingWeapon = { "OverlappingWeapon", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManCharacter, OverlappingWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::NewProp_OverlappingWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::NewProp_OverlappingWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::NewProp_SecondaryWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManCharacter_Statics::NewProp_SecondaryWeapon = { "SecondaryWeapon", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManCharacter, SecondaryWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::NewProp_SecondaryWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::NewProp_SecondaryWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::NewProp_ActiveWeapon_MetaData[] = {
		{ "Comment", "/** FOR SWITCHING b/w a secondary and primary weapon */" },
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
		{ "ToolTip", "FOR SWITCHING b/w a secondary and primary weapon" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManCharacter_Statics::NewProp_ActiveWeapon = { "ActiveWeapon", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManCharacter, ActiveWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::NewProp_ActiveWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::NewProp_ActiveWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManCharacter_Statics::NewProp_PrimaryWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Characters/ManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManCharacter_Statics::NewProp_PrimaryWeapon = { "PrimaryWeapon", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManCharacter, PrimaryWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::NewProp_PrimaryWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::NewProp_PrimaryWeapon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AManCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManCharacter_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManCharacter_Statics::NewProp_HorizontalSenstivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManCharacter_Statics::NewProp_VerticalSenstivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManCharacter_Statics::NewProp_FireSoundCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManCharacter_Statics::NewProp_FireEmitter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManCharacter_Statics::NewProp_ImpactParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManCharacter_Statics::NewProp_BeamParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManCharacter_Statics::NewProp_HipFireMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManCharacter_Statics::NewProp_ManHUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsTop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsBottom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManCharacter_Statics::NewProp_CrosshairsRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManCharacter_Statics::NewProp_HorizontalAimSenstivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManCharacter_Statics::NewProp_VerticalAimSenstivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManCharacter_Statics::NewProp_ZoomedPOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManCharacter_Statics::NewProp_FireDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManCharacter_Statics::NewProp_BaseWeaponClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManCharacter_Statics::NewProp_OverlappingWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManCharacter_Statics::NewProp_SecondaryWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManCharacter_Statics::NewProp_ActiveWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManCharacter_Statics::NewProp_PrimaryWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AManCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AManCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AManCharacter_Statics::ClassParams = {
		&AManCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AManCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AManCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AManCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AManCharacter()
	{
		if (!Z_Registration_Info_UClass_AManCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AManCharacter.OuterSingleton, Z_Construct_UClass_AManCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AManCharacter.OuterSingleton;
	}
	template<> MANVSMONSTERS_API UClass* StaticClass<AManCharacter>()
	{
		return AManCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AManCharacter);
	struct Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_Characters_ManCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_Characters_ManCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AManCharacter, AManCharacter::StaticClass, TEXT("AManCharacter"), &Z_Registration_Info_UClass_AManCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AManCharacter), 1884805655U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_Characters_ManCharacter_h_75213388(TEXT("/Script/ManVsMonsters"),
		Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_Characters_ManCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_Characters_ManCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
