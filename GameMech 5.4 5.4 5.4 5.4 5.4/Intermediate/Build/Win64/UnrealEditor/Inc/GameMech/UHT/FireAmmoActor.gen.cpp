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
ENGINE_API UClass* Z_Construct_UClass_AActor();
GAMEMECH_API UClass* Z_Construct_UClass_AFireAmmoActor();
GAMEMECH_API UClass* Z_Construct_UClass_AFireAmmoActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameMech();
// End Cross Module References

// Begin Class AFireAmmoActor
void AFireAmmoActor::StaticRegisterNativesAFireAmmoActor()
{
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
		{ "IncludePath", "FireAmmoActor.h" },
		{ "ModuleRelativePath", "FireAmmoActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFireAmmoActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_AFireAmmoActor, AFireAmmoActor::StaticClass, TEXT("AFireAmmoActor"), &Z_Registration_Info_UClass_AFireAmmoActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFireAmmoActor), 4165420916U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_FireAmmoActor_h_994532623(TEXT("/Script/GameMech"),
	Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_FireAmmoActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameMech_5_4_5_4_5_4_5_4_5_4_Source_GameMech_FireAmmoActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
