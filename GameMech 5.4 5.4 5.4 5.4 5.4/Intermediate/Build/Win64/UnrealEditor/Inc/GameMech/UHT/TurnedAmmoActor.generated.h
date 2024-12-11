// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnedAmmoActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
#ifdef GAMEMECH_TurnedAmmoActor_generated_h
#error "TurnedAmmoActor.generated.h already included, missing '#pragma once' in TurnedAmmoActor.h"
#endif
#define GAMEMECH_TurnedAmmoActor_generated_h

#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TurnedAmmoActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAfterHit);


#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TurnedAmmoActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurnedAmmoActor(); \
	friend struct Z_Construct_UClass_ATurnedAmmoActor_Statics; \
public: \
	DECLARE_CLASS(ATurnedAmmoActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameMech"), NO_API) \
	DECLARE_SERIALIZER(ATurnedAmmoActor)


#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TurnedAmmoActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATurnedAmmoActor(ATurnedAmmoActor&&); \
	ATurnedAmmoActor(const ATurnedAmmoActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurnedAmmoActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurnedAmmoActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurnedAmmoActor) \
	NO_API virtual ~ATurnedAmmoActor();


#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TurnedAmmoActor_h_11_PROLOG
#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TurnedAmmoActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TurnedAmmoActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TurnedAmmoActor_h_15_INCLASS_NO_PURE_DECLS \
	FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TurnedAmmoActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEMECH_API UClass* StaticClass<class ATurnedAmmoActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TurnedAmmoActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
