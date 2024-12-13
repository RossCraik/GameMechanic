// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMech/LavaActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLavaActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
GAMEMECH_API UClass* Z_Construct_UClass_ALavaActor();
GAMEMECH_API UClass* Z_Construct_UClass_ALavaActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameMech();
// End Cross Module References

// Begin Class ALavaActor Function afterOverlap
struct Z_Construct_UFunction_ALavaActor_afterOverlap_Statics
{
	struct LavaActor_eventafterOverlap_Parms
	{
		AActor* otherActor;
		const UPrimitiveComponent* otherComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LavaActor.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALavaActor_afterOverlap_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LavaActor_eventafterOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALavaActor_afterOverlap_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LavaActor_eventafterOverlap_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_otherComp_MetaData), NewProp_otherComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALavaActor_afterOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALavaActor_afterOverlap_Statics::NewProp_otherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALavaActor_afterOverlap_Statics::NewProp_otherComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALavaActor_afterOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALavaActor_afterOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALavaActor, nullptr, "afterOverlap", nullptr, nullptr, Z_Construct_UFunction_ALavaActor_afterOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALavaActor_afterOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALavaActor_afterOverlap_Statics::LavaActor_eventafterOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALavaActor_afterOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALavaActor_afterOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALavaActor_afterOverlap_Statics::LavaActor_eventafterOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALavaActor_afterOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALavaActor_afterOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALavaActor::execafterOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_otherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->afterOverlap(Z_Param_otherActor,Z_Param_otherComp);
	P_NATIVE_END;
}
// End Class ALavaActor Function afterOverlap

// Begin Class ALavaActor Function DestroyThisLava
struct Z_Construct_UFunction_ALavaActor_DestroyThisLava_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LavaActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALavaActor_DestroyThisLava_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALavaActor, nullptr, "DestroyThisLava", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALavaActor_DestroyThisLava_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALavaActor_DestroyThisLava_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALavaActor_DestroyThisLava()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALavaActor_DestroyThisLava_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALavaActor::execDestroyThisLava)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyThisLava();
	P_NATIVE_END;
}
// End Class ALavaActor Function DestroyThisLava

// Begin Class ALavaActor Function TimertoDestroy
struct Z_Construct_UFunction_ALavaActor_TimertoDestroy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LavaActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALavaActor_TimertoDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALavaActor, nullptr, "TimertoDestroy", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALavaActor_TimertoDestroy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALavaActor_TimertoDestroy_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALavaActor_TimertoDestroy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALavaActor_TimertoDestroy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALavaActor::execTimertoDestroy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TimertoDestroy();
	P_NATIVE_END;
}
// End Class ALavaActor Function TimertoDestroy

// Begin Class ALavaActor
void ALavaActor::StaticRegisterNativesALavaActor()
{
	UClass* Class = ALavaActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "afterOverlap", &ALavaActor::execafterOverlap },
		{ "DestroyThisLava", &ALavaActor::execDestroyThisLava },
		{ "TimertoDestroy", &ALavaActor::execTimertoDestroy },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALavaActor);
UClass* Z_Construct_UClass_ALavaActor_NoRegister()
{
	return ALavaActor::StaticClass();
}
struct Z_Construct_UClass_ALavaActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LavaActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "LavaActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALavaActor_afterOverlap, "afterOverlap" }, // 3964258794
		{ &Z_Construct_UFunction_ALavaActor_DestroyThisLava, "DestroyThisLava" }, // 2948335658
		{ &Z_Construct_UFunction_ALavaActor_TimertoDestroy, "TimertoDestroy" }, // 1343378458
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALavaActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALavaActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GameMech,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALavaActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALavaActor_Statics::ClassParams = {
	&ALavaActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALavaActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALavaActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALavaActor()
{
	if (!Z_Registration_Info_UClass_ALavaActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALavaActor.OuterSingleton, Z_Construct_UClass_ALavaActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALavaActor.OuterSingleton;
}
template<> GAMEMECH_API UClass* StaticClass<ALavaActor>()
{
	return ALavaActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALavaActor);
ALavaActor::~ALavaActor() {}
// End Class ALavaActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_LavaActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALavaActor, ALavaActor::StaticClass, TEXT("ALavaActor"), &Z_Registration_Info_UClass_ALavaActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALavaActor), 1660145242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_LavaActor_h_2559919335(TEXT("/Script/GameMech"),
	Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_LavaActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_LavaActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
