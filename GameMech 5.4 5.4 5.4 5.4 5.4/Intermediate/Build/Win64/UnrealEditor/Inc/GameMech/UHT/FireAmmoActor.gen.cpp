// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMech/FireAmmoActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireAmmoActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
GAMEMECH_API UClass* Z_Construct_UClass_AFireAmmoActor();
GAMEMECH_API UClass* Z_Construct_UClass_AFireAmmoActor_NoRegister();
GAMEMECH_API UClass* Z_Construct_UClass_ALavaActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameMech();
// End Cross Module References

// Begin Class AFireAmmoActor Function AfterHit
struct Z_Construct_UFunction_AFireAmmoActor_AfterHit_Statics
{
	struct FireAmmoActor_eventAfterHit_Parms
	{
		const AActor* otherActor;
		const UPrimitiveComponent* otherComp;
		FTransform MakeTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FireAmmoActor.h" },
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_MakeTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFireAmmoActor_AfterHit_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FireAmmoActor_eventAfterHit_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_otherActor_MetaData), NewProp_otherActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFireAmmoActor_AfterHit_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FireAmmoActor_eventAfterHit_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_otherComp_MetaData), NewProp_otherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFireAmmoActor_AfterHit_Statics::NewProp_MakeTransform = { "MakeTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FireAmmoActor_eventAfterHit_Parms, MakeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFireAmmoActor_AfterHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireAmmoActor_AfterHit_Statics::NewProp_otherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireAmmoActor_AfterHit_Statics::NewProp_otherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireAmmoActor_AfterHit_Statics::NewProp_MakeTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFireAmmoActor_AfterHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFireAmmoActor_AfterHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFireAmmoActor, nullptr, "AfterHit", nullptr, nullptr, Z_Construct_UFunction_AFireAmmoActor_AfterHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFireAmmoActor_AfterHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFireAmmoActor_AfterHit_Statics::FireAmmoActor_eventAfterHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFireAmmoActor_AfterHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFireAmmoActor_AfterHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFireAmmoActor_AfterHit_Statics::FireAmmoActor_eventAfterHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFireAmmoActor_AfterHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFireAmmoActor_AfterHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFireAmmoActor::execAfterHit)
{
	P_GET_OBJECT(AActor,Z_Param_otherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_MakeTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AfterHit(Z_Param_otherActor,Z_Param_otherComp,Z_Param_Out_MakeTransform);
	P_NATIVE_END;
}
// End Class AFireAmmoActor Function AfterHit

// Begin Class AFireAmmoActor
void AFireAmmoActor::StaticRegisterNativesAFireAmmoActor()
{
	UClass* Class = AFireAmmoActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AfterHit", &AFireAmmoActor::execAfterHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFireAmmoActor);
UClass* Z_Construct_UClass_AFireAmmoActor_NoRegister()
{
	return AFireAmmoActor::StaticClass();
}
struct Z_Construct_UClass_AFireAmmoActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FireAmmoActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FireAmmoActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spawnLava_MetaData[] = {
		{ "Category", "FireAmmoActor" },
		{ "ModuleRelativePath", "FireAmmoActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_spawnLava;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFireAmmoActor_AfterHit, "AfterHit" }, // 1900692283
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFireAmmoActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFireAmmoActor_Statics::NewProp_spawnLava = { "spawnLava", nullptr, (EPropertyFlags)0x0024080000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFireAmmoActor, spawnLava), Z_Construct_UClass_UClass, Z_Construct_UClass_ALavaActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spawnLava_MetaData), NewProp_spawnLava_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFireAmmoActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireAmmoActor_Statics::NewProp_spawnLava,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFireAmmoActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFireAmmoActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GameMech,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFireAmmoActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFireAmmoActor_Statics::ClassParams = {
	&AFireAmmoActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFireAmmoActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFireAmmoActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFireAmmoActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AFireAmmoActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFireAmmoActor()
{
	if (!Z_Registration_Info_UClass_AFireAmmoActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFireAmmoActor.OuterSingleton, Z_Construct_UClass_AFireAmmoActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFireAmmoActor.OuterSingleton;
}
template<> GAMEMECH_API UClass* StaticClass<AFireAmmoActor>()
{
	return AFireAmmoActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFireAmmoActor);
AFireAmmoActor::~AFireAmmoActor() {}
// End Class AFireAmmoActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_FireAmmoActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFireAmmoActor, AFireAmmoActor::StaticClass, TEXT("AFireAmmoActor"), &Z_Registration_Info_UClass_AFireAmmoActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFireAmmoActor), 2147318663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_FireAmmoActor_h_3572472843(TEXT("/Script/GameMech"),
	Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_FireAmmoActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_FireAmmoActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
