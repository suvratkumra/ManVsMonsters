// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManVsMonsters/Stuff/Stuff.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStuff() {}
// Cross Module References
	MANVSMONSTERS_API UClass* Z_Construct_UClass_AStuff_NoRegister();
	MANVSMONSTERS_API UClass* Z_Construct_UClass_AStuff();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ManVsMonsters();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	MANVSMONSTERS_API UEnum* Z_Construct_UEnum_ManVsMonsters_EWeaponType();
	MANVSMONSTERS_API UClass* Z_Construct_UClass_UPickupUserWidget_NoRegister();
	MANVSMONSTERS_API UClass* Z_Construct_UClass_AManCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AStuff::execOnSphereEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSphereEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStuff::execOnSphereBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSphereBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AStuff::StaticRegisterNativesAStuff()
	{
		UClass* Class = AStuff::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSphereBeginOverlap", &AStuff::execOnSphereBeginOverlap },
			{ "OnSphereEndOverlap", &AStuff::execOnSphereEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics
	{
		struct Stuff_eventOnSphereBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Stuff_eventOnSphereBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Stuff_eventOnSphereBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Stuff_eventOnSphereBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Stuff_eventOnSphereBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Stuff_eventOnSphereBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Stuff_eventOnSphereBeginOverlap_Parms), &Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Stuff_eventOnSphereBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Stuff/Stuff.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStuff, nullptr, "OnSphereBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::Stuff_eventOnSphereBeginOverlap_Parms), Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStuff_OnSphereBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStuff_OnSphereBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStuff_OnSphereEndOverlap_Statics
	{
		struct Stuff_eventOnSphereEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStuff_OnSphereEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStuff_OnSphereEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Stuff_eventOnSphereEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStuff_OnSphereEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStuff_OnSphereEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStuff_OnSphereEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Stuff_eventOnSphereEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStuff_OnSphereEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStuff_OnSphereEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Stuff_eventOnSphereEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStuff_OnSphereEndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStuff_OnSphereEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AStuff_OnSphereEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Stuff_eventOnSphereEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStuff_OnSphereEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStuff_OnSphereEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStuff_OnSphereEndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStuff_OnSphereEndOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStuff_OnSphereEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStuff_OnSphereEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Stuff/Stuff.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStuff_OnSphereEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStuff, nullptr, "OnSphereEndOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStuff_OnSphereEndOverlap_Statics::Stuff_eventOnSphereEndOverlap_Parms), Z_Construct_UFunction_AStuff_OnSphereEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStuff_OnSphereEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStuff_OnSphereEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStuff_OnSphereEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStuff_OnSphereEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStuff_OnSphereEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStuff);
	UClass* Z_Construct_UClass_AStuff_NoRegister()
	{
		return AStuff::StaticClass();
	}
	struct Z_Construct_UClass_AStuff_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionSphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupWidget;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_WeaponAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_WeaponName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_E_KeyInterpolationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_E_KeyInterpolationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupWidgetPointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupWidgetPointer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStuff_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ManVsMonsters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStuff_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStuff_OnSphereBeginOverlap, "OnSphereBeginOverlap" }, // 325475532
		{ &Z_Construct_UFunction_AStuff_OnSphereEndOverlap, "OnSphereEndOverlap" }, // 2677255218
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStuff_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Stuff/Stuff.h" },
		{ "ModuleRelativePath", "Stuff/Stuff.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStuff_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Item Properties" },
		{ "Comment", "// we need a skeletal mesh for the weapon or any other thing we add in the future\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Stuff/Stuff.h" },
		{ "ToolTip", "we need a skeletal mesh for the weapon or any other thing we add in the future" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStuff_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStuff, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStuff_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStuff_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStuff_Statics::NewProp_CollisionSphere_MetaData[] = {
		{ "Category", "Item Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Stuff/Stuff.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStuff_Statics::NewProp_CollisionSphere = { "CollisionSphere", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStuff, CollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStuff_Statics::NewProp_CollisionSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStuff_Statics::NewProp_CollisionSphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStuff_Statics::NewProp_PickupWidget_MetaData[] = {
		{ "Category", "Item Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Stuff/Stuff.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStuff_Statics::NewProp_PickupWidget = { "PickupWidget", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStuff, PickupWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStuff_Statics::NewProp_PickupWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStuff_Statics::NewProp_PickupWidget_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AStuff_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStuff_Statics::NewProp_WeaponType_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "Comment", "/** Weapon Property Variables. */" },
		{ "ModuleRelativePath", "Stuff/Stuff.h" },
		{ "ToolTip", "Weapon Property Variables." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AStuff_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStuff, WeaponType), Z_Construct_UEnum_ManVsMonsters_EWeaponType, METADATA_PARAMS(Z_Construct_UClass_AStuff_Statics::NewProp_WeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStuff_Statics::NewProp_WeaponType_MetaData)) }; // 1102259309
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStuff_Statics::NewProp_WeaponAmmo_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Stuff/Stuff.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AStuff_Statics::NewProp_WeaponAmmo = { "WeaponAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStuff, WeaponAmmo), METADATA_PARAMS(Z_Construct_UClass_AStuff_Statics::NewProp_WeaponAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStuff_Statics::NewProp_WeaponAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStuff_Statics::NewProp_WeaponName_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Stuff/Stuff.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AStuff_Statics::NewProp_WeaponName = { "WeaponName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStuff, WeaponName), METADATA_PARAMS(Z_Construct_UClass_AStuff_Statics::NewProp_WeaponName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStuff_Statics::NewProp_WeaponName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStuff_Statics::NewProp_E_KeyInterpolationSpeed_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Stuff/Stuff.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStuff_Statics::NewProp_E_KeyInterpolationSpeed = { "E_KeyInterpolationSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStuff, E_KeyInterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_AStuff_Statics::NewProp_E_KeyInterpolationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStuff_Statics::NewProp_E_KeyInterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStuff_Statics::NewProp_PickupWidgetPointer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Stuff/Stuff.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStuff_Statics::NewProp_PickupWidgetPointer = { "PickupWidgetPointer", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStuff, PickupWidgetPointer), Z_Construct_UClass_UPickupUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStuff_Statics::NewProp_PickupWidgetPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStuff_Statics::NewProp_PickupWidgetPointer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStuff_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Stuff/Stuff.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStuff_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStuff, Character), Z_Construct_UClass_AManCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStuff_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStuff_Statics::NewProp_Character_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStuff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStuff_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStuff_Statics::NewProp_CollisionSphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStuff_Statics::NewProp_PickupWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStuff_Statics::NewProp_WeaponType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStuff_Statics::NewProp_WeaponType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStuff_Statics::NewProp_WeaponAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStuff_Statics::NewProp_WeaponName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStuff_Statics::NewProp_E_KeyInterpolationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStuff_Statics::NewProp_PickupWidgetPointer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStuff_Statics::NewProp_Character,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStuff_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStuff>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStuff_Statics::ClassParams = {
		&AStuff::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStuff_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStuff_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStuff_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStuff_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStuff()
	{
		if (!Z_Registration_Info_UClass_AStuff.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStuff.OuterSingleton, Z_Construct_UClass_AStuff_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStuff.OuterSingleton;
	}
	template<> MANVSMONSTERS_API UClass* StaticClass<AStuff>()
	{
		return AStuff::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStuff);
	struct Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_Stuff_Stuff_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_Stuff_Stuff_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStuff, AStuff::StaticClass, TEXT("AStuff"), &Z_Registration_Info_UClass_AStuff, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStuff), 1091141892U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_Stuff_Stuff_h_2942709773(TEXT("/Script/ManVsMonsters"),
		Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_Stuff_Stuff_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ManVsMonsters_Source_ManVsMonsters_Stuff_Stuff_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
