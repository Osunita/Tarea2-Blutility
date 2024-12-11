// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tarea2_Blutility/Libreria/AssetDependencyUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDependencyUtils() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
TAREA2_BLUTILITY_API UClass* Z_Construct_UClass_UAssetDependencyUtils();
TAREA2_BLUTILITY_API UClass* Z_Construct_UClass_UAssetDependencyUtils_NoRegister();
UPackage* Z_Construct_UPackage__Script_Tarea2_Blutility();
// End Cross Module References

// Begin Class UAssetDependencyUtils Function GenerateAndSaveDependencyReport
struct Z_Construct_UFunction_UAssetDependencyUtils_GenerateAndSaveDependencyReport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Dependency Utils" },
		{ "ModuleRelativePath", "Libreria/AssetDependencyUtils.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetDependencyUtils_GenerateAndSaveDependencyReport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetDependencyUtils, nullptr, "GenerateAndSaveDependencyReport", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetDependencyUtils_GenerateAndSaveDependencyReport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetDependencyUtils_GenerateAndSaveDependencyReport_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAssetDependencyUtils_GenerateAndSaveDependencyReport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetDependencyUtils_GenerateAndSaveDependencyReport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetDependencyUtils::execGenerateAndSaveDependencyReport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UAssetDependencyUtils::GenerateAndSaveDependencyReport();
	P_NATIVE_END;
}
// End Class UAssetDependencyUtils Function GenerateAndSaveDependencyReport

// Begin Class UAssetDependencyUtils
void UAssetDependencyUtils::StaticRegisterNativesUAssetDependencyUtils()
{
	UClass* Class = UAssetDependencyUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateAndSaveDependencyReport", &UAssetDependencyUtils::execGenerateAndSaveDependencyReport },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDependencyUtils);
UClass* Z_Construct_UClass_UAssetDependencyUtils_NoRegister()
{
	return UAssetDependencyUtils::StaticClass();
}
struct Z_Construct_UClass_UAssetDependencyUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Libreria/AssetDependencyUtils.h" },
		{ "ModuleRelativePath", "Libreria/AssetDependencyUtils.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetDependencyUtils_GenerateAndSaveDependencyReport, "GenerateAndSaveDependencyReport" }, // 4200224715
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDependencyUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssetDependencyUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Tarea2_Blutility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDependencyUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDependencyUtils_Statics::ClassParams = {
	&UAssetDependencyUtils::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDependencyUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDependencyUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetDependencyUtils()
{
	if (!Z_Registration_Info_UClass_UAssetDependencyUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDependencyUtils.OuterSingleton, Z_Construct_UClass_UAssetDependencyUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetDependencyUtils.OuterSingleton;
}
template<> TAREA2_BLUTILITY_API UClass* StaticClass<UAssetDependencyUtils>()
{
	return UAssetDependencyUtils::StaticClass();
}
UAssetDependencyUtils::UAssetDependencyUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDependencyUtils);
UAssetDependencyUtils::~UAssetDependencyUtils() {}
// End Class UAssetDependencyUtils

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_LocalRepository_Tarea2_Blutility_Tarea2_Blutility_Source_Tarea2_Blutility_Libreria_AssetDependencyUtils_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDependencyUtils, UAssetDependencyUtils::StaticClass, TEXT("UAssetDependencyUtils"), &Z_Registration_Info_UClass_UAssetDependencyUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDependencyUtils), 814993155U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LocalRepository_Tarea2_Blutility_Tarea2_Blutility_Source_Tarea2_Blutility_Libreria_AssetDependencyUtils_h_536515863(TEXT("/Script/Tarea2_Blutility"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_LocalRepository_Tarea2_Blutility_Tarea2_Blutility_Source_Tarea2_Blutility_Libreria_AssetDependencyUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_LocalRepository_Tarea2_Blutility_Tarea2_Blutility_Source_Tarea2_Blutility_Libreria_AssetDependencyUtils_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
