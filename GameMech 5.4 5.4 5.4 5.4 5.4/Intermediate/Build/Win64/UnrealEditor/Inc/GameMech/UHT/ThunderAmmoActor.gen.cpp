// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMech/ThunderAmmoActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThunderAmmoActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
GAMEMECH_API UClass* Z_Construct_UClass_AThunderAmmoActor();
GAMEMECH_API UClass* Z_Construct_UClass_AThunderAmmoActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameMech();
// End Cross Module References

// Begin Class AThunderAmmoActor Function AfterHit
struct Z_Construct_UFunction_AThunderAmmoActor_AfterHit_Statics
{
	struct ThunderAmmoActor_eventAfterHit_Parms
	{
		AActor* otherActor;
		const UPrimitiveComponent* otherComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThunderAmmoActor.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThunderAmmoActor_AfterHit_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThunderAmmoActor_eventAfterHit_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThunderAmmoActor_AfterHit_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThunderAmmoActor_eventAfterHit_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_otherComp_MetaData), NewProp_otherComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThunderAmmoActor_AfterHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThunderAmmoActor_AfterHit_Statics::NewProp_otherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThunderAmmoActor_AfterHit_Statics::NewProp_otherComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThunderAmmoActor_AfterHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThunderAmmoActor_AfterHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThunderAmmoActor, nullptr, "AfterHit", nullptr, nullptr, Z_Construct_UFunction_AThunderAmmoActor_AfterHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThunderAmmoActor_AfterHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThunderAmmoActor_AfterHit_Statics::ThunderAmmoActor_eventAfterHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThunderAmmoActor_AfterHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThunderAmmoActor_AfterHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AThunderAmmoActor_AfterHit_Statics::ThunderAmmoActor_eventAfterHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AThunderAmmoActor_AfterHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThunderAmmoActor_AfterHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AThunderAmmoActor::execAfterHit)
{
	P_GET_OBJECT(AActor,Z_Param_otherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AfterHit(Z_Param_otherActor,Z_Param_otherComp);
	P_NATIVE_END;
}
// End Class AThunderAmmoActor Function AfterHit

// Begin Class AThunderAmmoActor
void AThunderAmmoActor::StaticRegisterNativesAThunderAmmoActor()
{
	UClass* Class = AThunderAmmoActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AfterHit", &AThunderAmmoActor::execAfterHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThunderAmmoActor);
UClass* Z_Construct_UClass_AThunderAmmoActor_NoRegister()
{
	return AThunderAmmoActor::StaticClass();
}
struct Z_Construct_UClass_AThunderAmmoActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ThunderAmmoActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ThunderAmmoActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_M_ImpulseForce_MetaData[] = {
		{ "Category", "ThunderAmmoActor" },
		{ "ModuleRelativePath", "ThunderAmmoActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_M_ImpulseForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AThunderAmmoActor_AfterHit, "AfterHit" }, // 3308352419
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThunderAmmoActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AThunderAmmoActor_Statics::NewProp_M_ImpulseForce = { "M_ImpulseForce", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThunderAmmoActor, M_ImpulseForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_M_ImpulseForce_MetaData), NewProp_M_ImpulseForce_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThunderAmmoActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThunderAmmoActor_Statics::NewProp_M_ImpulseForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThunderAmmoActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AThunderAmmoActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GameMech,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThunderAmmoActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThunderAmmoActor_Statics::ClassParams = {
	&AThunderAmmoActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AThunderAmmoActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AThunderAmmoActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThunderAmmoActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AThunderAmmoActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThunderAmmoActor()
{
	if (!Z_Registration_Info_UClass_AThunderAmmoActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThunderAmmoActor.OuterSingleton, Z_Construct_UClass_AThunderAmmoActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThunderAmmoActor.OuterSingleton;
}
template<> GAMEMECH_API UClass* StaticClass<AThunderAmmoActor>()
{
	return AThunderAmmoActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThunderAmmoActor);
AThunderAmmoActor::~AThunderAmmoActor() {}
// End Class AThunderAmmoActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_ThunderAmmoActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThunderAmmoActor, AThunderAmmoActor::StaticClass, TEXT("AThunderAmmoActor"), &Z_Registration_Info_UClass_AThunderAmmoActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThunderAmmoActor), 1297863679U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_ThunderAmmoActor_h_1366967705(TEXT("/Script/GameMech"),
	Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_ThunderAmmoActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_ThunderAmmoActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
