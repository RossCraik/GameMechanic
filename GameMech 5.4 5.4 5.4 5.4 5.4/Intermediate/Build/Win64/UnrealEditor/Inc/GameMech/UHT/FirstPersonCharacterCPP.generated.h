// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FirstPersonCharacterCPP.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEMECH_FirstPersonCharacterCPP_generated_h
#error "FirstPersonCharacterCPP.generated.h already included, missing '#pragma once' in FirstPersonCharacterCPP.h"
#endif
#define GAMEMECH_FirstPersonCharacterCPP_generated_h

#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_FirstPersonCharacterCPP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopJumpInput); \
	DECLARE_FUNCTION(execJumpInput); \
	DECLARE_FUNCTION(execMovementInput); \
	DECLARE_FUNCTION(execCameraInput);


#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_FirstPersonCharacterCPP_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstPersonCharacterCPP(); \
	friend struct Z_Construct_UClass_AFirstPersonCharacterCPP_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonCharacterCPP, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameMech"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonCharacterCPP)


#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_FirstPersonCharacterCPP_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFirstPersonCharacterCPP(AFirstPersonCharacterCPP&&); \
	AFirstPersonCharacterCPP(const AFirstPersonCharacterCPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonCharacterCPP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonCharacterCPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstPersonCharacterCPP) \
	NO_API virtual ~AFirstPersonCharacterCPP();


#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_FirstPersonCharacterCPP_h_9_PROLOG
#define FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_FirstPersonCharacterCPP_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_FirstPersonCharacterCPP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_FirstPersonCharacterCPP_h_12_INCLASS_NO_PURE_DECLS \
	FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_FirstPersonCharacterCPP_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEMECH_API UClass* StaticClass<class AFirstPersonCharacterCPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_FirstPersonCharacterCPP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
