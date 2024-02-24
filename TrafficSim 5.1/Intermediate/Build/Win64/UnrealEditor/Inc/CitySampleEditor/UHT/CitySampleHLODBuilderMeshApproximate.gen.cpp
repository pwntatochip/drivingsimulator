// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleEditor/WorldPartition/CitySampleHLODBuilderMeshApproximate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleHLODBuilderMeshApproximate() {}
// Cross Module References
	CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate();
	CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySampleEditor();
	WORLDPARTITIONHLODUTILITIES_API UClass* Z_Construct_UClass_UHLODBuilderMeshApproximate();
// End Cross Module References
	void UCitySampleHLODBuilderMeshApproximate::StaticRegisterNativesUCitySampleHLODBuilderMeshApproximate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleHLODBuilderMeshApproximate);
	UClass* Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_NoRegister()
	{
		return UCitySampleHLODBuilderMeshApproximate::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHLODBuilderMeshApproximate,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Extend the MeshApproximate HLOD builder to feed CitySample specific data to the mesh generation process.\n * In order to have better texture space utilization, we use this class to add the collision meshes of\n * buildings to the actor approximation algorithm. This ensure buildings are processed as watertight blocks.\n */" },
		{ "IncludePath", "WorldPartition/CitySampleHLODBuilderMeshApproximate.h" },
		{ "ModuleRelativePath", "WorldPartition/CitySampleHLODBuilderMeshApproximate.h" },
		{ "ToolTip", "Extend the MeshApproximate HLOD builder to feed CitySample specific data to the mesh generation process.\nIn order to have better texture space utilization, we use this class to add the collision meshes of\nbuildings to the actor approximation algorithm. This ensure buildings are processed as watertight blocks." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleHLODBuilderMeshApproximate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_Statics::ClassParams = {
		&UCitySampleHLODBuilderMeshApproximate::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate()
	{
		if (!Z_Registration_Info_UClass_UCitySampleHLODBuilderMeshApproximate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleHLODBuilderMeshApproximate.OuterSingleton, Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleHLODBuilderMeshApproximate.OuterSingleton;
	}
	template<> CITYSAMPLEEDITOR_API UClass* StaticClass<UCitySampleHLODBuilderMeshApproximate>()
	{
		return UCitySampleHLODBuilderMeshApproximate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleHLODBuilderMeshApproximate);
	UCitySampleHLODBuilderMeshApproximate::~UCitySampleHLODBuilderMeshApproximate() {}
	struct Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySampleEditor_WorldPartition_CitySampleHLODBuilderMeshApproximate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySampleEditor_WorldPartition_CitySampleHLODBuilderMeshApproximate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleHLODBuilderMeshApproximate, UCitySampleHLODBuilderMeshApproximate::StaticClass, TEXT("UCitySampleHLODBuilderMeshApproximate"), &Z_Registration_Info_UClass_UCitySampleHLODBuilderMeshApproximate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleHLODBuilderMeshApproximate), 1857842147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySampleEditor_WorldPartition_CitySampleHLODBuilderMeshApproximate_h_2546560206(TEXT("/Script/CitySampleEditor"),
		Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySampleEditor_WorldPartition_CitySampleHLODBuilderMeshApproximate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySampleEditor_WorldPartition_CitySampleHLODBuilderMeshApproximate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
