// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tarea2_Blutility/Tarea2_BlutilityGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTarea2_BlutilityGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TAREA2_BLUTILITY_API UClass* Z_Construct_UClass_ATarea2_BlutilityGameMode();
TAREA2_BLUTILITY_API UClass* Z_Construct_UClass_ATarea2_BlutilityGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Tarea2_Blutility();
// End Cross Module References

// Begin Class ATarea2_BlutilityGameMode
void ATarea2_BlutilityGameMode::StaticRegisterNativesATarea2_BlutilityGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATarea2_BlutilityGameMode);
UClass* Z_Construct_UClass_ATarea2_BlutilityGameMode_NoRegister()
{
	return ATarea2_BlutilityGameMode::StaticClass();
}
struct Z_Construct_UClass_ATarea2_BlutilityGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Tarea2_BlutilityGameMode.h" },
		{ "ModuleRelativePath", "Tarea2_BlutilityGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATarea2_BlutilityGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATarea2_BlutilityGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Tarea2_Blutility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATarea2_BlutilityGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATarea2_BlutilityGameMode_Statics::ClassParams = {
	&ATarea2_BlutilityGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATarea2_BlutilityGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATarea2_BlutilityGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATarea2_BlutilityGameMode()
{
	if (!Z_Registration_Info_UClass_ATarea2_BlutilityGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATarea2_BlutilityGameMode.OuterSingleton, Z_Construct_UClass_ATarea2_BlutilityGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATarea2_BlutilityGameMode.OuterSingleton;
}
template<> TAREA2_BLUTILITY_API UClass* StaticClass<ATarea2_BlutilityGameMode>()
{
	return ATarea2_BlutilityGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATarea2_BlutilityGameMode);
ATarea2_BlutilityGameMode::~ATarea2_BlutilityGameMode() {}
// End Class ATarea2_BlutilityGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_LocalRepository_Tarea2_Blutility_Tarea2_Blutility_Source_Tarea2_Blutility_Tarea2_BlutilityGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATarea2_BlutilityGameMode, ATarea2_BlutilityGameMode::StaticClass, TEXT("ATarea2_BlutilityGameMode"), &Z_Registration_Info_UClass_ATarea2_BlutilityGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATarea2_BlutilityGameMode), 2997446939U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LocalRepository_Tarea2_Blutility_Tarea2_Blutility_Source_Tarea2_Blutility_Tarea2_BlutilityGameMode_h_2119702758(TEXT("/Script/Tarea2_Blutility"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_LocalRepository_Tarea2_Blutility_Tarea2_Blutility_Source_Tarea2_Blutility_Tarea2_BlutilityGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_LocalRepository_Tarea2_Blutility_Tarea2_Blutility_Source_Tarea2_Blutility_Tarea2_BlutilityGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
