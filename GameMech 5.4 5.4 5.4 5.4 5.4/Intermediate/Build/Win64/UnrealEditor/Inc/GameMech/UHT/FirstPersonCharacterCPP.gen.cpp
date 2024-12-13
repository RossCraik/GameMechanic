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
GAMEMECH_API UClass* Z_Construct_UClass_AFirstPersonCharacterCPP();
GAMEMECH_API UClass* Z_Construct_UClass_AFirstPersonCharacterCPP_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameMech();
// End Cross Module References

// Begin Class AFirstPersonCharacterCPP Function After
struct Z_Construct_UFunction_AFirstPersonCharacterCPP_After_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FirstPersonCharacterCPP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacterCPP_After_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacterCPP, nullptr, "After", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacterCPP_After_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirstPersonCharacterCPP_After_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFirstPersonCharacterCPP_After()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacterCPP_After_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFirstPersonCharacterCPP::execAfter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->After();
	P_NATIVE_END;
}
// End Class AFirstPersonCharacterCPP Function After

// Begin Class AFirstPersonCharacterCPP
void AFirstPersonCharacterCPP::StaticRegisterNativesAFirstPersonCharacterCPP()
{
	UClass* Class = AFirstPersonCharacterCPP::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "After", &AFirstPersonCharacterCPP::execAfter },
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirstPersonCharacterCPP_After, "After" }, // 3389668601
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonCharacterCPP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
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
		{ Z_Construct_UClass_AFirstPersonCharacterCPP, AFirstPersonCharacterCPP::StaticClass, TEXT("AFirstPersonCharacterCPP"), &Z_Registration_Info_UClass_AFirstPersonCharacterCPP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstPersonCharacterCPP), 1452164384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_FirstPersonCharacterCPP_h_3215759139(TEXT("/Script/GameMech"),
	Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_FirstPersonCharacterCPP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_FirstPersonCharacterCPP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
