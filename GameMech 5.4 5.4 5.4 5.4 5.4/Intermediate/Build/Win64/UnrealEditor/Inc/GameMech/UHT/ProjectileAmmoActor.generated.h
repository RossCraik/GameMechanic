// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectileAmmoActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
#ifdef GAMEMECH_ProjectileAmmoActor_generated_h
#error "ProjectileAmmoActor.generated.h already included, missing '#pragma once' in ProjectileAmmoActor.h"
#endif
#define GAMEMECH_ProjectileAmmoActor_generated_h

#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_ProjectileAmmoActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAfterHit);


#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_ProjectileAmmoActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileAmmoActor(); \
	friend struct Z_Construct_UClass_AProjectileAmmoActor_Statics; \
public: \
	DECLARE_CLASS(AProjectileAmmoActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameMech"), NO_API) \
	DECLARE_SERIALIZER(AProjectileAmmoActor)


#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_ProjectileAmmoActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProjectileAmmoActor(AProjectileAmmoActor&&); \
	AProjectileAmmoActor(const AProjectileAmmoActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileAmmoActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileAmmoActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileAmmoActor) \
	NO_API virtual ~AProjectileAmmoActor();


#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_ProjectileAmmoActor_h_10_PROLOG
#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_ProjectileAmmoActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_ProjectileAmmoActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_ProjectileAmmoActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_ProjectileAmmoActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEMECH_API UClass* StaticClass<class AProjectileAmmoActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_ProjectileAmmoActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
