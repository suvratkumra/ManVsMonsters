// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MANVSMONSTERS_Stuff_generated_h
#error "Stuff.generated.h already included, missing '#pragma once' in Stuff.h"
#endif
#define MANVSMONSTERS_Stuff_generated_h

#define FID_ManVsMonsters_Source_ManVsMonsters_Stuff_Stuff_h_13_SPARSE_DATA
#define FID_ManVsMonsters_Source_ManVsMonsters_Stuff_Stuff_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_ManVsMonsters_Source_ManVsMonsters_Stuff_Stuff_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_ManVsMonsters_Source_ManVsMonsters_Stuff_Stuff_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStuff(); \
	friend struct Z_Construct_UClass_AStuff_Statics; \
public: \
	DECLARE_CLASS(AStuff, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ManVsMonsters"), NO_API) \
	DECLARE_SERIALIZER(AStuff)


#define FID_ManVsMonsters_Source_ManVsMonsters_Stuff_Stuff_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAStuff(); \
	friend struct Z_Construct_UClass_AStuff_Statics; \
public: \
	DECLARE_CLASS(AStuff, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ManVsMonsters"), NO_API) \
	DECLARE_SERIALIZER(AStuff)


#define FID_ManVsMonsters_Source_ManVsMonsters_Stuff_Stuff_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStuff(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStuff) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStuff); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStuff); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStuff(AStuff&&); \
	NO_API AStuff(const AStuff&); \
public:


#define FID_ManVsMonsters_Source_ManVsMonsters_Stuff_Stuff_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStuff(AStuff&&); \
	NO_API AStuff(const AStuff&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStuff); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStuff); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStuff)


#define FID_ManVsMonsters_Source_ManVsMonsters_Stuff_Stuff_h_10_PROLOG
#define FID_ManVsMonsters_Source_ManVsMonsters_Stuff_Stuff_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ManVsMonsters_Source_ManVsMonsters_Stuff_Stuff_h_13_SPARSE_DATA \
	FID_ManVsMonsters_Source_ManVsMonsters_Stuff_Stuff_h_13_RPC_WRAPPERS \
	FID_ManVsMonsters_Source_ManVsMonsters_Stuff_Stuff_h_13_INCLASS \
	FID_ManVsMonsters_Source_ManVsMonsters_Stuff_Stuff_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ManVsMonsters_Source_ManVsMonsters_Stuff_Stuff_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ManVsMonsters_Source_ManVsMonsters_Stuff_Stuff_h_13_SPARSE_DATA \
	FID_ManVsMonsters_Source_ManVsMonsters_Stuff_Stuff_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ManVsMonsters_Source_ManVsMonsters_Stuff_Stuff_h_13_INCLASS_NO_PURE_DECLS \
	FID_ManVsMonsters_Source_ManVsMonsters_Stuff_Stuff_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MANVSMONSTERS_API UClass* StaticClass<class AStuff>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ManVsMonsters_Source_ManVsMonsters_Stuff_Stuff_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
