// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscapePlanetB/Public/MeshGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshGenerator() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ESCAPEPLANETB_API UClass* Z_Construct_UClass_UMeshGenerator();
	ESCAPEPLANETB_API UClass* Z_Construct_UClass_UMeshGenerator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EscapePlanetB();
// End Cross Module References
	void UMeshGenerator::StaticRegisterNativesUMeshGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshGenerator);
	UClass* Z_Construct_UClass_UMeshGenerator_NoRegister()
	{
		return UMeshGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UMeshGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapePlanetB,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshGenerator_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshGenerator_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMeshGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshGenerator_Statics::ClassParams = {
		&UMeshGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshGenerator_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMeshGenerator()
	{
		if (!Z_Registration_Info_UClass_UMeshGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshGenerator.OuterSingleton, Z_Construct_UClass_UMeshGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshGenerator.OuterSingleton;
	}
	template<> ESCAPEPLANETB_API UClass* StaticClass<UMeshGenerator>()
	{
		return UMeshGenerator::StaticClass();
	}
	UMeshGenerator::UMeshGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshGenerator);
	UMeshGenerator::~UMeshGenerator() {}
	struct Z_CompiledInDeferFile_FID_Projects_Unreal_Projects_EGD_380P_EGD_380P_Project_EscapePlanetB_Source_EscapePlanetB_Public_MeshGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_Projects_EGD_380P_EGD_380P_Project_EscapePlanetB_Source_EscapePlanetB_Public_MeshGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshGenerator, UMeshGenerator::StaticClass, TEXT("UMeshGenerator"), &Z_Registration_Info_UClass_UMeshGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshGenerator), 5177788U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_Projects_EGD_380P_EGD_380P_Project_EscapePlanetB_Source_EscapePlanetB_Public_MeshGenerator_h_754151852(TEXT("/Script/EscapePlanetB"),
		Z_CompiledInDeferFile_FID_Projects_Unreal_Projects_EGD_380P_EGD_380P_Project_EscapePlanetB_Source_EscapePlanetB_Public_MeshGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_Projects_EGD_380P_EGD_380P_Project_EscapePlanetB_Source_EscapePlanetB_Public_MeshGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
