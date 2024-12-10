// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThunderAmmoActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
#ifdef GAMEMECH_ThunderAmmoActor_generated_h
#error "ThunderAmmoActor.generated.h already included, missing '#pragma once' in ThunderAmmoActor.h"
#endif
#define GAMEMECH_ThunderAmmoActor_generated_h

#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_ThunderAmmoActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAfterHit);


#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_ThunderAmmoActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThunderAmmoActor(); \
	friend struct Z_Construct_UClass_AThunderAmmoActor_Statics; \
public: \
	DECLARE_CLASS(AThunderAmmoActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameMech"), NO_API) \
	DECLARE_SERIALIZER(AThunderAmmoActor)


#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_ThunderAmmoActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AThunderAmmoActor(AThunderAmmoActor&&); \
	AThunderAmmoActor(const AThunderAmmoActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThunderAmmoActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThunderAmmoActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThunderAmmoActor) \
	NO_API virtual ~AThunderAmmoActor();


#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_ThunderAmmoActor_h_11_PROLOG
#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_ThunderAmmoActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_ThunderAmmoActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_ThunderAmmoActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_ThunderAmmoActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEMECH_API UClass* StaticClass<class AThunderAmmoActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_ThunderAmmoActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
