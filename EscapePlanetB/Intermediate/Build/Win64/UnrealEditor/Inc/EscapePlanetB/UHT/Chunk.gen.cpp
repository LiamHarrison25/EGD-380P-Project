// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscapePlanetB/Private/Chunk.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunk() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ESCAPEPLANETB_API UClass* Z_Construct_UClass_AChunk();
	ESCAPEPLANETB_API UClass* Z_Construct_UClass_AChunk_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EscapePlanetB();
// End Cross Module References
	void AChunk::StaticRegisterNativesAChunk()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChunk);
	UClass* Z_Construct_UClass_AChunk_NoRegister()
	{
		return AChunk::StaticClass();
	}
	struct Z_Construct_UClass_AChunk_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_size_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scale_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChunk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapePlanetB,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunk_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Chunk.h" },
		{ "ModuleRelativePath", "Private/Chunk.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunk_Statics::NewProp_size_MetaData[] = {
		{ "Category", "Chunk" },
		{ "ModuleRelativePath", "Private/Chunk.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChunk_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunk, size), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::NewProp_size_MetaData), Z_Construct_UClass_AChunk_Statics::NewProp_size_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunk_Statics::NewProp_scale_MetaData[] = {
		{ "Category", "Chunk" },
		{ "ModuleRelativePath", "Private/Chunk.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChunk_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunk, scale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::NewProp_scale_MetaData), Z_Construct_UClass_AChunk_Statics::NewProp_scale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChunk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunk_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunk_Statics::NewProp_scale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChunk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChunk>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChunk_Statics::ClassParams = {
		&AChunk::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChunk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::Class_MetaDataParams), Z_Construct_UClass_AChunk_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunk_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AChunk()
	{
		if (!Z_Registration_Info_UClass_AChunk.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChunk.OuterSingleton, Z_Construct_UClass_AChunk_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChunk.OuterSingleton;
	}
	template<> ESCAPEPLANETB_API UClass* StaticClass<AChunk>()
	{
		return AChunk::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChunk);
	AChunk::~AChunk() {}
	struct Z_CompiledInDeferFile_FID_Projects_Unreal_Projects_EGD_380P_EGD_380P_Project_EscapePlanetB_Source_EscapePlanetB_Private_Chunk_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_Projects_EGD_380P_EGD_380P_Project_EscapePlanetB_Source_EscapePlanetB_Private_Chunk_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChunk, AChunk::StaticClass, TEXT("AChunk"), &Z_Registration_Info_UClass_AChunk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChunk), 2900726689U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_Projects_EGD_380P_EGD_380P_Project_EscapePlanetB_Source_EscapePlanetB_Private_Chunk_h_2336978494(TEXT("/Script/EscapePlanetB"),
		Z_CompiledInDeferFile_FID_Projects_Unreal_Projects_EGD_380P_EGD_380P_Project_EscapePlanetB_Source_EscapePlanetB_Private_Chunk_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_Projects_EGD_380P_EGD_380P_Project_EscapePlanetB_Source_EscapePlanetB_Private_Chunk_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
