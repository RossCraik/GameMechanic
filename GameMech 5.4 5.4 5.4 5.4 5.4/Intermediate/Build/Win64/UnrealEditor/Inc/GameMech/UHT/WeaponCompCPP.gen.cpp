// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMech/WeaponCompCPP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponCompCPP() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
GAMEMECH_API UClass* Z_Construct_UClass_UWeaponCompCPP();
GAMEMECH_API UClass* Z_Construct_UClass_UWeaponCompCPP_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameMech();
// End Cross Module References

// Begin Class UWeaponCompCPP Function actorspawnIG
struct Z_Construct_UFunction_UWeaponCompCPP_actorspawnIG_Statics
{
	struct WeaponCompCPP_eventactorspawnIG_Parms
	{
		FTransform MakeTransform;
		FVector Location;
		FRotator rotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WeaponCompCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MakeTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MakeTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponCompCPP_actorspawnIG_Statics::NewProp_MakeTransform = { "MakeTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponCompCPP_eventactorspawnIG_Parms, MakeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MakeTransform_MetaData), NewProp_MakeTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponCompCPP_actorspawnIG_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponCompCPP_eventactorspawnIG_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponCompCPP_actorspawnIG_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponCompCPP_eventactorspawnIG_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotation_MetaData), NewProp_rotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponCompCPP_actorspawnIG_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponCompCPP_actorspawnIG_Statics::NewProp_MakeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponCompCPP_actorspawnIG_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponCompCPP_actorspawnIG_Statics::NewProp_rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponCompCPP_actorspawnIG_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponCompCPP_actorspawnIG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponCompCPP, nullptr, "actorspawnIG", nullptr, nullptr, Z_Construct_UFunction_UWeaponCompCPP_actorspawnIG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponCompCPP_actorspawnIG_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponCompCPP_actorspawnIG_Statics::WeaponCompCPP_eventactorspawnIG_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponCompCPP_actorspawnIG_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponCompCPP_actorspawnIG_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponCompCPP_actorspawnIG_Statics::WeaponCompCPP_eventactorspawnIG_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponCompCPP_actorspawnIG()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponCompCPP_actorspawnIG_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponCompCPP::execactorspawnIG)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_MakeTransform);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->actorspawnIG(Z_Param_Out_MakeTransform,Z_Param_Out_Location,Z_Param_Out_rotation);
	P_NATIVE_END;
}
// End Class UWeaponCompCPP Function actorspawnIG

// Begin Class UWeaponCompCPP Function AfterShoot
struct Z_Construct_UFunction_UWeaponCompCPP_AfterShoot_Statics
{
	struct WeaponCompCPP_eventAfterShoot_Parms
	{
		FTransform MakeTransform;
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WeaponCompCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MakeTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MakeTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponCompCPP_AfterShoot_Statics::NewProp_MakeTransform = { "MakeTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponCompCPP_eventAfterShoot_Parms, MakeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MakeTransform_MetaData), NewProp_MakeTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponCompCPP_AfterShoot_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponCompCPP_eventAfterShoot_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponCompCPP_AfterShoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponCompCPP_AfterShoot_Statics::NewProp_MakeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponCompCPP_AfterShoot_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponCompCPP_AfterShoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponCompCPP_AfterShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponCompCPP, nullptr, "AfterShoot", nullptr, nullptr, Z_Construct_UFunction_UWeaponCompCPP_AfterShoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponCompCPP_AfterShoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponCompCPP_AfterShoot_Statics::WeaponCompCPP_eventAfterShoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponCompCPP_AfterShoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponCompCPP_AfterShoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponCompCPP_AfterShoot_Statics::WeaponCompCPP_eventAfterShoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponCompCPP_AfterShoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponCompCPP_AfterShoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponCompCPP::execAfterShoot)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_MakeTransform);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AfterShoot(Z_Param_Out_MakeTransform,Z_Param_Out_Location);
	P_NATIVE_END;
}
// End Class UWeaponCompCPP Function AfterShoot

// Begin Class UWeaponCompCPP Function AfterSpawn
struct Z_Construct_UFunction_UWeaponCompCPP_AfterSpawn_Statics
{
	struct WeaponCompCPP_eventAfterSpawn_Parms
	{
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WeaponCompCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponCompCPP_AfterSpawn_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponCompCPP_eventAfterSpawn_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponCompCPP_AfterSpawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponCompCPP_AfterSpawn_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponCompCPP_AfterSpawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponCompCPP_AfterSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponCompCPP, nullptr, "AfterSpawn", nullptr, nullptr, Z_Construct_UFunction_UWeaponCompCPP_AfterSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponCompCPP_AfterSpawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponCompCPP_AfterSpawn_Statics::WeaponCompCPP_eventAfterSpawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponCompCPP_AfterSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponCompCPP_AfterSpawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponCompCPP_AfterSpawn_Statics::WeaponCompCPP_eventAfterSpawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponCompCPP_AfterSpawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponCompCPP_AfterSpawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponCompCPP::execAfterSpawn)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AfterSpawn(Z_Param_Out_Location);
	P_NATIVE_END;
}
// End Class UWeaponCompCPP Function AfterSpawn

// Begin Class UWeaponCompCPP Function PreSpawn
struct Z_Construct_UFunction_UWeaponCompCPP_PreSpawn_Statics
{
	struct WeaponCompCPP_eventPreSpawn_Parms
	{
		FTransform MakeTransform;
		FVector Location;
		FRotator rotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WeaponCompCPP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MakeTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponCompCPP_PreSpawn_Statics::NewProp_MakeTransform = { "MakeTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponCompCPP_eventPreSpawn_Parms, MakeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponCompCPP_PreSpawn_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponCompCPP_eventPreSpawn_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponCompCPP_PreSpawn_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponCompCPP_eventPreSpawn_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponCompCPP_PreSpawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponCompCPP_PreSpawn_Statics::NewProp_MakeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponCompCPP_PreSpawn_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponCompCPP_PreSpawn_Statics::NewProp_rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponCompCPP_PreSpawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponCompCPP_PreSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponCompCPP, nullptr, "PreSpawn", nullptr, nullptr, Z_Construct_UFunction_UWeaponCompCPP_PreSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponCompCPP_PreSpawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponCompCPP_PreSpawn_Statics::WeaponCompCPP_eventPreSpawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponCompCPP_PreSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponCompCPP_PreSpawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeaponCompCPP_PreSpawn_Statics::WeaponCompCPP_eventPreSpawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponCompCPP_PreSpawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponCompCPP_PreSpawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponCompCPP::execPreSpawn)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_MakeTransform);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreSpawn(Z_Param_Out_MakeTransform,Z_Param_Out_Location,Z_Param_Out_rotation);
	P_NATIVE_END;
}
// End Class UWeaponCompCPP Function PreSpawn

// Begin Class UWeaponCompCPP
void UWeaponCompCPP::StaticRegisterNativesUWeaponCompCPP()
{
	UClass* Class = UWeaponCompCPP::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "actorspawnIG", &UWeaponCompCPP::execactorspawnIG },
		{ "AfterShoot", &UWeaponCompCPP::execAfterShoot },
		{ "AfterSpawn", &UWeaponCompCPP::execAfterSpawn },
		{ "PreSpawn", &UWeaponCompCPP::execPreSpawn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponCompCPP);
UClass* Z_Construct_UClass_UWeaponCompCPP_NoRegister()
{
	return UWeaponCompCPP::StaticClass();
}
struct Z_Construct_UClass_UWeaponCompCPP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Mesh|SkeletalAsset Object Mobility Trigger" },
		{ "IncludePath", "WeaponCompCPP.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "WeaponCompCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_M_RandInt_MetaData[] = {
		{ "Category", "WeaponCompCPP" },
		{ "ModuleRelativePath", "WeaponCompCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_M_ProjectileOffset_MetaData[] = {
		{ "Category", "WeaponCompCPP" },
		{ "ModuleRelativePath", "WeaponCompCPP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_M_RandInt;
	static const UECodeGen_Private::FStructPropertyParams NewProp_M_ProjectileOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponCompCPP_actorspawnIG, "actorspawnIG" }, // 202769219
		{ &Z_Construct_UFunction_UWeaponCompCPP_AfterShoot, "AfterShoot" }, // 1088627803
		{ &Z_Construct_UFunction_UWeaponCompCPP_AfterSpawn, "AfterSpawn" }, // 290057872
		{ &Z_Construct_UFunction_UWeaponCompCPP_PreSpawn, "PreSpawn" }, // 681616275
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponCompCPP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_M_RandInt = { "M_RandInt", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponCompCPP, M_RandInt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_M_RandInt_MetaData), NewProp_M_RandInt_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_M_ProjectileOffset = { "M_ProjectileOffset", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponCompCPP, M_ProjectileOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_M_ProjectileOffset_MetaData), NewProp_M_ProjectileOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponCompCPP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_M_RandInt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponCompCPP_Statics::NewProp_M_ProjectileOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponCompCPP_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponCompCPP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GameMech,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponCompCPP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponCompCPP_Statics::ClassParams = {
	&UWeaponCompCPP::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWeaponCompCPP_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponCompCPP_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponCompCPP_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponCompCPP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponCompCPP()
{
	if (!Z_Registration_Info_UClass_UWeaponCompCPP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponCompCPP.OuterSingleton, Z_Construct_UClass_UWeaponCompCPP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponCompCPP.OuterSingleton;
}
template<> GAMEMECH_API UClass* StaticClass<UWeaponCompCPP>()
{
	return UWeaponCompCPP::StaticClass();
}
UWeaponCompCPP::UWeaponCompCPP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponCompCPP);
UWeaponCompCPP::~UWeaponCompCPP() {}
// End Class UWeaponCompCPP

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_WeaponCompCPP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponCompCPP, UWeaponCompCPP::StaticClass, TEXT("UWeaponCompCPP"), &Z_Registration_Info_UClass_UWeaponCompCPP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponCompCPP), 618644928U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_WeaponCompCPP_h_2385600639(TEXT("/Script/GameMech"),
	Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_WeaponCompCPP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_WeaponCompCPP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
