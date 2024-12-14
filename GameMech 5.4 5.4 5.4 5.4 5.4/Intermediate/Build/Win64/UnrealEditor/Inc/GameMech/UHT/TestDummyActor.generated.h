// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestDummyActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEMECH_TestDummyActor_generated_h
#error "TestDummyActor.generated.h already included, missing '#pragma once' in TestDummyActor.h"
#endif
#define GAMEMECH_TestDummyActor_generated_h

#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TestDummyActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execmovements); \
	DECLARE_FUNCTION(execAfterTick);


#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TestDummyActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestDummyActor(); \
	friend struct Z_Construct_UClass_ATestDummyActor_Statics; \
public: \
	DECLARE_CLASS(ATestDummyActor, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameMech"), NO_API) \
	DECLARE_SERIALIZER(ATestDummyActor)


#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TestDummyActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATestDummyActor(ATestDummyActor&&); \
	ATestDummyActor(const ATestDummyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestDummyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestDummyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestDummyActor) \
	NO_API virtual ~ATestDummyActor();


#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TestDummyActor_h_11_PROLOG
#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TestDummyActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TestDummyActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TestDummyActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TestDummyActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEMECH_API UClass* StaticClass<class ATestDummyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TestDummyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
