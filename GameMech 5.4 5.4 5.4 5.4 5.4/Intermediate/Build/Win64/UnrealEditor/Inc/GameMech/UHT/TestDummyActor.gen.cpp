// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMech/TestDummyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestDummyActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEMECH_API UClass* Z_Construct_UClass_ATestDummyActor();
GAMEMECH_API UClass* Z_Construct_UClass_ATestDummyActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameMech();
// End Cross Module References

// Begin Class ATestDummyActor Function AfterTick
struct Z_Construct_UFunction_ATestDummyActor_AfterTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestDummyActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestDummyActor_AfterTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestDummyActor, nullptr, "AfterTick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestDummyActor_AfterTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestDummyActor_AfterTick_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATestDummyActor_AfterTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestDummyActor_AfterTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATestDummyActor::execAfterTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AfterTick();
	P_NATIVE_END;
}
// End Class ATestDummyActor Function AfterTick

// Begin Class ATestDummyActor Function movements
struct Z_Construct_UFunction_ATestDummyActor_movements_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestDummyActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestDummyActor_movements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestDummyActor, nullptr, "movements", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestDummyActor_movements_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestDummyActor_movements_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATestDummyActor_movements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestDummyActor_movements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATestDummyActor::execmovements)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->movements();
	P_NATIVE_END;
}
// End Class ATestDummyActor Function movements

// Begin Class ATestDummyActor
void ATestDummyActor::StaticRegisterNativesATestDummyActor()
{
	UClass* Class = ATestDummyActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AfterTick", &ATestDummyActor::execAfterTick },
		{ "movements", &ATestDummyActor::execmovements },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestDummyActor);
UClass* Z_Construct_UClass_ATestDummyActor_NoRegister()
{
	return ATestDummyActor::StaticClass();
}
struct Z_Construct_UClass_ATestDummyActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TestDummyActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "TestDummyActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestDummyActor_AfterTick, "AfterTick" }, // 172382116
		{ &Z_Construct_UFunction_ATestDummyActor_movements, "movements" }, // 3237320656
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestDummyActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATestDummyActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GameMech,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestDummyActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestDummyActor_Statics::ClassParams = {
	&ATestDummyActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestDummyActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestDummyActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATestDummyActor()
{
	if (!Z_Registration_Info_UClass_ATestDummyActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestDummyActor.OuterSingleton, Z_Construct_UClass_ATestDummyActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestDummyActor.OuterSingleton;
}
template<> GAMEMECH_API UClass* StaticClass<ATestDummyActor>()
{
	return ATestDummyActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestDummyActor);
ATestDummyActor::~ATestDummyActor() {}
// End Class ATestDummyActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TestDummyActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestDummyActor, ATestDummyActor::StaticClass, TEXT("ATestDummyActor"), &Z_Registration_Info_UClass_ATestDummyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestDummyActor), 95906934U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TestDummyActor_h_3383500621(TEXT("/Script/GameMech"),
	Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TestDummyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TestDummyActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
