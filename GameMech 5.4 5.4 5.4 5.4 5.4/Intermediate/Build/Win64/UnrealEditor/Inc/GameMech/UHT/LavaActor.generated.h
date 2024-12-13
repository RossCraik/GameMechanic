// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LavaActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
#ifdef GAMEMECH_LavaActor_generated_h
#error "LavaActor.generated.h already included, missing '#pragma once' in LavaActor.h"
#endif
#define GAMEMECH_LavaActor_generated_h

#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_LavaActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDestroyThisLava); \
	DECLARE_FUNCTION(execTimertoDestroy); \
	DECLARE_FUNCTION(execafterOverlap);


#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_LavaActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALavaActor(); \
	friend struct Z_Construct_UClass_ALavaActor_Statics; \
public: \
	DECLARE_CLASS(ALavaActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameMech"), NO_API) \
	DECLARE_SERIALIZER(ALavaActor)


#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_LavaActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALavaActor(ALavaActor&&); \
	ALavaActor(const ALavaActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALavaActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALavaActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALavaActor) \
	NO_API virtual ~ALavaActor();


#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_LavaActor_h_12_PROLOG
#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_LavaActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_LavaActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_LavaActor_h_15_INCLASS_NO_PURE_DECLS \
	FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_LavaActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEMECH_API UClass* StaticClass<class ALavaActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_LavaActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
