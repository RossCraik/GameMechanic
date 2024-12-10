// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WeaponCompCPP.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEMECH_WeaponCompCPP_generated_h
#error "WeaponCompCPP.generated.h already included, missing '#pragma once' in WeaponCompCPP.h"
#endif
#define GAMEMECH_WeaponCompCPP_generated_h

#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_WeaponCompCPP_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAfterShoot);


#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_WeaponCompCPP_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponCompCPP(); \
	friend struct Z_Construct_UClass_UWeaponCompCPP_Statics; \
public: \
	DECLARE_CLASS(UWeaponCompCPP, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameMech"), NO_API) \
	DECLARE_SERIALIZER(UWeaponCompCPP)


#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_WeaponCompCPP_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponCompCPP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWeaponCompCPP(UWeaponCompCPP&&); \
	UWeaponCompCPP(const UWeaponCompCPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponCompCPP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponCompCPP); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponCompCPP) \
	NO_API virtual ~UWeaponCompCPP();


#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_WeaponCompCPP_h_12_PROLOG
#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_WeaponCompCPP_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_WeaponCompCPP_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_WeaponCompCPP_h_15_INCLASS_NO_PURE_DECLS \
	FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_WeaponCompCPP_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEMECH_API UClass* StaticClass<class UWeaponCompCPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_WeaponCompCPP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
