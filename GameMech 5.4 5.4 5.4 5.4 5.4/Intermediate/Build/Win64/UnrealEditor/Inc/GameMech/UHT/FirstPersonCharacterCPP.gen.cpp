// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMech/FirstPersonCharacterCPP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonCharacterCPP() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
GAMEMECH_API UClass* Z_Construct_UClass_AFirstPersonCharacterCPP();
GAMEMECH_API UClass* Z_Construct_UClass_AFirstPersonCharacterCPP_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameMech();
// End Cross Module References

// Begin Class AFirstPersonCharacterCPP Function CameraInput
struct Z_Construct_UFunction_AFirstPersonCharacterCPP_CameraInput_Statics
{
	struct FirstPersonCharacterCPP_eventCameraInput_Parms
	{
		float x;
		float y;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FirstPersonCharacterCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirstPersonCharacterCPP_CameraInput_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirstPersonCharacterCPP_eventCameraInput_Parms, x), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_x_MetaData), NewProp_x_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirstPersonCharacterCPP_CameraInput_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirstPersonCharacterCPP_eventCameraInput_Parms, y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_y_MetaData), NewProp_y_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacterCPP_CameraInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacterCPP_CameraInput_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacterCPP_CameraInput_Statics::NewProp_y,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacterCPP_CameraInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacterCPP_CameraInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacterCPP, nullptr, "CameraInput", nullptr, nullptr, Z_Construct_UFunction_AFirstPersonCharacterCPP_CameraInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacterCPP_CameraInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFirstPersonCharacterCPP_CameraInput_Statics::FirstPersonCharacterCPP_eventCameraInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacterCPP_CameraInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirstPersonCharacterCPP_CameraInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFirstPersonCharacterCPP_CameraInput_Statics::FirstPersonCharacterCPP_eventCameraInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFirstPersonCharacterCPP_CameraInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacterCPP_CameraInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFirstPersonCharacterCPP::execCameraInput)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_x);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_y);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CameraInput(Z_Param_Out_x,Z_Param_Out_y);
	P_NATIVE_END;
}
// End Class AFirstPersonCharacterCPP Function CameraInput

// Begin Class AFirstPersonCharacterCPP Function JumpInput
struct Z_Construct_UFunction_AFirstPersonCharacterCPP_JumpInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FirstPersonCharacterCPP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacterCPP_JumpInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacterCPP, nullptr, "JumpInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacterCPP_JumpInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirstPersonCharacterCPP_JumpInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFirstPersonCharacterCPP_JumpInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacterCPP_JumpInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFirstPersonCharacterCPP::execJumpInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JumpInput();
	P_NATIVE_END;
}
// End Class AFirstPersonCharacterCPP Function JumpInput

// Begin Class AFirstPersonCharacterCPP Function MovementInput
struct Z_Construct_UFunction_AFirstPersonCharacterCPP_MovementInput_Statics
{
	struct FirstPersonCharacterCPP_eventMovementInput_Parms
	{
		float x;
		float y;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FirstPersonCharacterCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirstPersonCharacterCPP_MovementInput_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirstPersonCharacterCPP_eventMovementInput_Parms, x), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_x_MetaData), NewProp_x_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirstPersonCharacterCPP_MovementInput_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirstPersonCharacterCPP_eventMovementInput_Parms, y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_y_MetaData), NewProp_y_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacterCPP_MovementInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacterCPP_MovementInput_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacterCPP_MovementInput_Statics::NewProp_y,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacterCPP_MovementInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacterCPP_MovementInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacterCPP, nullptr, "MovementInput", nullptr, nullptr, Z_Construct_UFunction_AFirstPersonCharacterCPP_MovementInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacterCPP_MovementInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFirstPersonCharacterCPP_MovementInput_Statics::FirstPersonCharacterCPP_eventMovementInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacterCPP_MovementInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirstPersonCharacterCPP_MovementInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFirstPersonCharacterCPP_MovementInput_Statics::FirstPersonCharacterCPP_eventMovementInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFirstPersonCharacterCPP_MovementInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacterCPP_MovementInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFirstPersonCharacterCPP::execMovementInput)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_x);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_y);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MovementInput(Z_Param_Out_x,Z_Param_Out_y);
	P_NATIVE_END;
}
// End Class AFirstPersonCharacterCPP Function MovementInput

// Begin Class AFirstPersonCharacterCPP Function StopJumpInput
struct Z_Construct_UFunction_AFirstPersonCharacterCPP_StopJumpInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FirstPersonCharacterCPP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacterCPP_StopJumpInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacterCPP, nullptr, "StopJumpInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacterCPP_StopJumpInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirstPersonCharacterCPP_StopJumpInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFirstPersonCharacterCPP_StopJumpInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacterCPP_StopJumpInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFirstPersonCharacterCPP::execStopJumpInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopJumpInput();
	P_NATIVE_END;
}
// End Class AFirstPersonCharacterCPP Function StopJumpInput

// Begin Class AFirstPersonCharacterCPP
void AFirstPersonCharacterCPP::StaticRegisterNativesAFirstPersonCharacterCPP()
{
	UClass* Class = AFirstPersonCharacterCPP::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CameraInput", &AFirstPersonCharacterCPP::execCameraInput },
		{ "JumpInput", &AFirstPersonCharacterCPP::execJumpInput },
		{ "MovementInput", &AFirstPersonCharacterCPP::execMovementInput },
		{ "StopJumpInput", &AFirstPersonCharacterCPP::execStopJumpInput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstPersonCharacterCPP);
UClass* Z_Construct_UClass_AFirstPersonCharacterCPP_NoRegister()
{
	return AFirstPersonCharacterCPP::StaticClass();
}
struct Z_Construct_UClass_AFirstPersonCharacterCPP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FirstPersonCharacterCPP.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FirstPersonCharacterCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FirstPersonCharacterCPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FirstPersonCharacterCPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirstPersonCharacterCPP_CameraInput, "CameraInput" }, // 3130387565
		{ &Z_Construct_UFunction_AFirstPersonCharacterCPP_JumpInput, "JumpInput" }, // 475755115
		{ &Z_Construct_UFunction_AFirstPersonCharacterCPP_MovementInput, "MovementInput" }, // 1944545787
		{ &Z_Construct_UFunction_AFirstPersonCharacterCPP_StopJumpInput, "StopJumpInput" }, // 791986546
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonCharacterCPP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacterCPP_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacterCPP, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh1P_MetaData), NewProp_Mesh1P_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacterCPP_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacterCPP, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData), NewProp_FirstPersonCameraComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstPersonCharacterCPP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacterCPP_Statics::NewProp_Mesh1P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacterCPP_Statics::NewProp_FirstPersonCameraComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacterCPP_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFirstPersonCharacterCPP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GameMech,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacterCPP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonCharacterCPP_Statics::ClassParams = {
	&AFirstPersonCharacterCPP::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFirstPersonCharacterCPP_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacterCPP_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacterCPP_Statics::Class_MetaDataParams), Z_Construct_UClass_AFirstPersonCharacterCPP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFirstPersonCharacterCPP()
{
	if (!Z_Registration_Info_UClass_AFirstPersonCharacterCPP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstPersonCharacterCPP.OuterSingleton, Z_Construct_UClass_AFirstPersonCharacterCPP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFirstPersonCharacterCPP.OuterSingleton;
}
template<> GAMEMECH_API UClass* StaticClass<AFirstPersonCharacterCPP>()
{
	return AFirstPersonCharacterCPP::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonCharacterCPP);
AFirstPersonCharacterCPP::~AFirstPersonCharacterCPP() {}
// End Class AFirstPersonCharacterCPP

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_FirstPersonCharacterCPP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFirstPersonCharacterCPP, AFirstPersonCharacterCPP::StaticClass, TEXT("AFirstPersonCharacterCPP"), &Z_Registration_Info_UClass_AFirstPersonCharacterCPP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstPersonCharacterCPP), 2121115025U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_FirstPersonCharacterCPP_h_2854797141(TEXT("/Script/GameMech"),
	Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_FirstPersonCharacterCPP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_FirstPersonCharacterCPP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
