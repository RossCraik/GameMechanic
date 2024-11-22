// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMech/TurnedAmmoActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurnedAmmoActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
GAMEMECH_API UClass* Z_Construct_UClass_ATurnedAmmoActor();
GAMEMECH_API UClass* Z_Construct_UClass_ATurnedAmmoActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameMech();
// End Cross Module References

// Begin Class ATurnedAmmoActor Function AfterHit
struct Z_Construct_UFunction_ATurnedAmmoActor_AfterHit_Statics
{
	struct TurnedAmmoActor_eventAfterHit_Parms
	{
		const AActor* otherActor;
		const UPrimitiveComponent* otherComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TurnedAmmoActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_otherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_otherComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnedAmmoActor_AfterHit_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnedAmmoActor_eventAfterHit_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_otherActor_MetaData), NewProp_otherActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnedAmmoActor_AfterHit_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnedAmmoActor_eventAfterHit_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_otherComp_MetaData), NewProp_otherComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnedAmmoActor_AfterHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnedAmmoActor_AfterHit_Statics::NewProp_otherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnedAmmoActor_AfterHit_Statics::NewProp_otherComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnedAmmoActor_AfterHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnedAmmoActor_AfterHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurnedAmmoActor, nullptr, "AfterHit", nullptr, nullptr, Z_Construct_UFunction_ATurnedAmmoActor_AfterHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnedAmmoActor_AfterHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnedAmmoActor_AfterHit_Statics::TurnedAmmoActor_eventAfterHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnedAmmoActor_AfterHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnedAmmoActor_AfterHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATurnedAmmoActor_AfterHit_Statics::TurnedAmmoActor_eventAfterHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnedAmmoActor_AfterHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnedAmmoActor_AfterHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnedAmmoActor::execAfterHit)
{
	P_GET_OBJECT(AActor,Z_Param_otherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AfterHit(Z_Param_otherActor,Z_Param_otherComp);
	P_NATIVE_END;
}
// End Class ATurnedAmmoActor Function AfterHit

// Begin Class ATurnedAmmoActor
void ATurnedAmmoActor::StaticRegisterNativesATurnedAmmoActor()
{
	UClass* Class = ATurnedAmmoActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AfterHit", &ATurnedAmmoActor::execAfterHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATurnedAmmoActor);
UClass* Z_Construct_UClass_ATurnedAmmoActor_NoRegister()
{
	return ATurnedAmmoActor::StaticClass();
}
struct Z_Construct_UClass_ATurnedAmmoActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TurnedAmmoActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "TurnedAmmoActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATurnedAmmoActor_AfterHit, "AfterHit" }, // 3845306451
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurnedAmmoActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATurnedAmmoActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GameMech,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurnedAmmoActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATurnedAmmoActor_Statics::ClassParams = {
	&ATurnedAmmoActor::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurnedAmmoActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATurnedAmmoActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATurnedAmmoActor()
{
	if (!Z_Registration_Info_UClass_ATurnedAmmoActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATurnedAmmoActor.OuterSingleton, Z_Construct_UClass_ATurnedAmmoActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATurnedAmmoActor.OuterSingleton;
}
template<> GAMEMECH_API UClass* StaticClass<ATurnedAmmoActor>()
{
	return ATurnedAmmoActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATurnedAmmoActor);
ATurnedAmmoActor::~ATurnedAmmoActor() {}
// End Class ATurnedAmmoActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TurnedAmmoActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATurnedAmmoActor, ATurnedAmmoActor::StaticClass, TEXT("ATurnedAmmoActor"), &Z_Registration_Info_UClass_ATurnedAmmoActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATurnedAmmoActor), 4253152682U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TurnedAmmoActor_h_2122664244(TEXT("/Script/GameMech"),
	Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TurnedAmmoActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_TurnedAmmoActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
