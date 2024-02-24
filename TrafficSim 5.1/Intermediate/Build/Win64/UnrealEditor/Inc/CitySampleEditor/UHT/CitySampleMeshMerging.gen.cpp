// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleEditor/MeshMerging/CitySampleMeshMerging.h"
#include "Engine/Classes/Engine/MeshMerging.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleMeshMerging() {}
// Cross Module References
	CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleMeshMergingBlueprintLibrary();
	CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleMeshMergingBlueprintLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshApproximationSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshMergingSettings();
	UPackage* Z_Construct_UPackage__Script_CitySampleEditor();
// End Cross Module References
	DEFINE_FUNCTION(UCitySampleMeshMergingBlueprintLibrary::execApproximateActors)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PackageName);
		P_GET_TARRAY(AActor*,Z_Param_ActorsToMerge);
		P_GET_STRUCT_REF(FMeshApproximationSettings,Z_Param_Out_ApproxSettings);
		P_GET_UBOOL(Z_Param_bReplaceSourceActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCitySampleMeshMergingBlueprintLibrary::ApproximateActors(Z_Param_PackageName,Z_Param_ActorsToMerge,Z_Param_Out_ApproxSettings,Z_Param_bReplaceSourceActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleMeshMergingBlueprintLibrary::execMergeActors)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PackageName);
		P_GET_TARRAY(AActor*,Z_Param_ActorsToMerge);
		P_GET_STRUCT_REF(FMeshMergingSettings,Z_Param_Out_MergeSettings);
		P_GET_UBOOL(Z_Param_bReplaceSourceActors);
		P_GET_UBOOL(Z_Param_bAllowShapeComponents);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCitySampleMeshMergingBlueprintLibrary::MergeActors(Z_Param_PackageName,Z_Param_ActorsToMerge,Z_Param_Out_MergeSettings,Z_Param_bReplaceSourceActors,Z_Param_bAllowShapeComponents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleMeshMergingBlueprintLibrary::execMergeSkeletalMeshes)
	{
		P_GET_TARRAY(USkeletalMesh*,Z_Param_SkeletalMeshes);
		P_GET_PROPERTY(FStrProperty,Z_Param_PackageName);
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=UCitySampleMeshMergingBlueprintLibrary::MergeSkeletalMeshes(Z_Param_SkeletalMeshes,Z_Param_PackageName,Z_Param_Skeleton);
		P_NATIVE_END;
	}
	void UCitySampleMeshMergingBlueprintLibrary::StaticRegisterNativesUCitySampleMeshMergingBlueprintLibrary()
	{
		UClass* Class = UCitySampleMeshMergingBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApproximateActors", &UCitySampleMeshMergingBlueprintLibrary::execApproximateActors },
			{ "MergeActors", &UCitySampleMeshMergingBlueprintLibrary::execMergeActors },
			{ "MergeSkeletalMeshes", &UCitySampleMeshMergingBlueprintLibrary::execMergeSkeletalMeshes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics
	{
		struct CitySampleMeshMergingBlueprintLibrary_eventApproximateActors_Parms
		{
			FString PackageName;
			TArray<AActor*> ActorsToMerge;
			FMeshApproximationSettings ApproxSettings;
			bool bReplaceSourceActors;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToMerge_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToMerge_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToMerge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApproxSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ApproxSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplaceSourceActors_MetaData[];
#endif
		static void NewProp_bReplaceSourceActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceSourceActors;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_PackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleMeshMergingBlueprintLibrary_eventApproximateActors_Parms, PackageName), METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_PackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_PackageName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_ActorsToMerge_Inner = { "ActorsToMerge", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_ActorsToMerge_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_ActorsToMerge = { "ActorsToMerge", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleMeshMergingBlueprintLibrary_eventApproximateActors_Parms, ActorsToMerge), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_ActorsToMerge_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_ActorsToMerge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_ApproxSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_ApproxSettings = { "ApproxSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleMeshMergingBlueprintLibrary_eventApproximateActors_Parms, ApproxSettings), Z_Construct_UScriptStruct_FMeshApproximationSettings, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_ApproxSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_ApproxSettings_MetaData)) }; // 1592109045
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_bReplaceSourceActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_bReplaceSourceActors_SetBit(void* Obj)
	{
		((CitySampleMeshMergingBlueprintLibrary_eventApproximateActors_Parms*)Obj)->bReplaceSourceActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_bReplaceSourceActors = { "bReplaceSourceActors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CitySampleMeshMergingBlueprintLibrary_eventApproximateActors_Parms), &Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_bReplaceSourceActors_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_bReplaceSourceActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_bReplaceSourceActors_MetaData)) };
	void Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleMeshMergingBlueprintLibrary_eventApproximateActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CitySampleMeshMergingBlueprintLibrary_eventApproximateActors_Parms), &Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_PackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_ActorsToMerge_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_ActorsToMerge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_ApproxSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_bReplaceSourceActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample | MeshMerging" },
		{ "Comment", "/**\n\x09 * Approximate actors with a single static mesh actor\n\x09 *\n\x09 * @param\x09PackageName\x09\x09\x09\x09The path to put the new merged actor in\n\x09 * @param\x09""ActorsToMerge\x09\x09\x09""An array of actors to merge\n\x09 * @param\x09MergeSettings\x09\x09\x09""A structure containing all the settings required for the merge. The options are the same as what you'd see in the Merge Actors window\n\x09 * @param\x09""bReplaceSourceActors\x09(Optional) Whether the given actors should be replaced by the merged actor. Defaults to False\n\x09 *\n\x09 * @returns\x09True, if the Merge was able to be completed. Otherwise, false.\n\x09 */" },
		{ "CPP_Default_bReplaceSourceActors", "false" },
		{ "ModuleRelativePath", "MeshMerging/CitySampleMeshMerging.h" },
		{ "ToolTip", "Approximate actors with a single static mesh actor\n\n@param       PackageName                             The path to put the new merged actor in\n@param       ActorsToMerge                   An array of actors to merge\n@param       MergeSettings                   A structure containing all the settings required for the merge. The options are the same as what you'd see in the Merge Actors window\n@param       bReplaceSourceActors    (Optional) Whether the given actors should be replaced by the merged actor. Defaults to False\n\n@returns     True, if the Merge was able to be completed. Otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMeshMergingBlueprintLibrary, nullptr, "ApproximateActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::CitySampleMeshMergingBlueprintLibrary_eventApproximateActors_Parms), Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics
	{
		struct CitySampleMeshMergingBlueprintLibrary_eventMergeActors_Parms
		{
			FString PackageName;
			TArray<AActor*> ActorsToMerge;
			FMeshMergingSettings MergeSettings;
			bool bReplaceSourceActors;
			bool bAllowShapeComponents;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToMerge_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToMerge_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToMerge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MergeSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MergeSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplaceSourceActors_MetaData[];
#endif
		static void NewProp_bReplaceSourceActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceSourceActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowShapeComponents_MetaData[];
#endif
		static void NewProp_bAllowShapeComponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowShapeComponents;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_PackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleMeshMergingBlueprintLibrary_eventMergeActors_Parms, PackageName), METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_PackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_PackageName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_ActorsToMerge_Inner = { "ActorsToMerge", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_ActorsToMerge_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_ActorsToMerge = { "ActorsToMerge", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleMeshMergingBlueprintLibrary_eventMergeActors_Parms, ActorsToMerge), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_ActorsToMerge_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_ActorsToMerge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_MergeSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_MergeSettings = { "MergeSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleMeshMergingBlueprintLibrary_eventMergeActors_Parms, MergeSettings), Z_Construct_UScriptStruct_FMeshMergingSettings, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_MergeSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_MergeSettings_MetaData)) }; // 2825069913
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_bReplaceSourceActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_bReplaceSourceActors_SetBit(void* Obj)
	{
		((CitySampleMeshMergingBlueprintLibrary_eventMergeActors_Parms*)Obj)->bReplaceSourceActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_bReplaceSourceActors = { "bReplaceSourceActors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CitySampleMeshMergingBlueprintLibrary_eventMergeActors_Parms), &Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_bReplaceSourceActors_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_bReplaceSourceActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_bReplaceSourceActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_bAllowShapeComponents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_bAllowShapeComponents_SetBit(void* Obj)
	{
		((CitySampleMeshMergingBlueprintLibrary_eventMergeActors_Parms*)Obj)->bAllowShapeComponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_bAllowShapeComponents = { "bAllowShapeComponents", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CitySampleMeshMergingBlueprintLibrary_eventMergeActors_Parms), &Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_bAllowShapeComponents_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_bAllowShapeComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_bAllowShapeComponents_MetaData)) };
	void Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleMeshMergingBlueprintLibrary_eventMergeActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CitySampleMeshMergingBlueprintLibrary_eventMergeActors_Parms), &Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_PackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_ActorsToMerge_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_ActorsToMerge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_MergeSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_bReplaceSourceActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_bAllowShapeComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample | MeshMerging" },
		{ "Comment", "/**\n\x09 * Merge to a single static mesh actor\n\x09 *\n\x09 * @param\x09PackageName\x09\x09\x09\x09The path to put the new merged actor in\n\x09 * @param\x09""ActorsToMerge\x09\x09\x09""An array of actors to merge\n\x09 * @param\x09MergeSettings\x09\x09\x09""A structure containing all the settings required for the merge. The options are the same as what you'd see in the Merge Actors window\n\x09 * @param\x09""bReplaceSourceActors\x09(Optional) Whether the given actors should be replaced by the merged actor. Defaults to False\n\x09 * @param\x09""bAllowShapeComponents\x09(Optional) Whether to include Shape Components when merging. Defaults to True\n\x09 *\n\x09 * @returns\x09True, if the Merge was able to be completed. Otherwise, false.\n\x09 */" },
		{ "CPP_Default_bAllowShapeComponents", "true" },
		{ "CPP_Default_bReplaceSourceActors", "false" },
		{ "ModuleRelativePath", "MeshMerging/CitySampleMeshMerging.h" },
		{ "ToolTip", "Merge to a single static mesh actor\n\n@param       PackageName                             The path to put the new merged actor in\n@param       ActorsToMerge                   An array of actors to merge\n@param       MergeSettings                   A structure containing all the settings required for the merge. The options are the same as what you'd see in the Merge Actors window\n@param       bReplaceSourceActors    (Optional) Whether the given actors should be replaced by the merged actor. Defaults to False\n@param       bAllowShapeComponents   (Optional) Whether to include Shape Components when merging. Defaults to True\n\n@returns     True, if the Merge was able to be completed. Otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMeshMergingBlueprintLibrary, nullptr, "MergeActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::CitySampleMeshMergingBlueprintLibrary_eventMergeActors_Parms), Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes_Statics
	{
		struct CitySampleMeshMergingBlueprintLibrary_eventMergeSkeletalMeshes_Parms
		{
			TArray<USkeletalMesh*> SkeletalMeshes;
			FString PackageName;
			USkeleton* Skeleton;
			USkeletalMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletalMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes_Statics::NewProp_SkeletalMeshes_Inner = { "SkeletalMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes_Statics::NewProp_SkeletalMeshes = { "SkeletalMeshes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleMeshMergingBlueprintLibrary_eventMergeSkeletalMeshes_Parms, SkeletalMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes_Statics::NewProp_PackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleMeshMergingBlueprintLibrary_eventMergeSkeletalMeshes_Parms, PackageName), METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes_Statics::NewProp_PackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes_Statics::NewProp_PackageName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleMeshMergingBlueprintLibrary_eventMergeSkeletalMeshes_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleMeshMergingBlueprintLibrary_eventMergeSkeletalMeshes_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes_Statics::NewProp_SkeletalMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes_Statics::NewProp_SkeletalMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes_Statics::NewProp_PackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample | MeshMerging" },
		{ "CPP_Default_Skeleton", "None" },
		{ "ModuleRelativePath", "MeshMerging/CitySampleMeshMerging.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMeshMergingBlueprintLibrary, nullptr, "MergeSkeletalMeshes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes_Statics::CitySampleMeshMergingBlueprintLibrary_eventMergeSkeletalMeshes_Parms), Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleMeshMergingBlueprintLibrary);
	UClass* Z_Construct_UClass_UCitySampleMeshMergingBlueprintLibrary_NoRegister()
	{
		return UCitySampleMeshMergingBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleMeshMergingBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleMeshMergingBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleMeshMergingBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_ApproximateActors, "ApproximateActors" }, // 2826557111
		{ &Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeActors, "MergeActors" }, // 1508950938
		{ &Z_Construct_UFunction_UCitySampleMeshMergingBlueprintLibrary_MergeSkeletalMeshes, "MergeSkeletalMeshes" }, // 1730363810
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleMeshMergingBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Hack class that mimics the behavior of the Merge Actors editor tool for use with Python\n// Hopefully this can be removed when the actual merging functions are exposed directly\n" },
		{ "IncludePath", "MeshMerging/CitySampleMeshMerging.h" },
		{ "ModuleRelativePath", "MeshMerging/CitySampleMeshMerging.h" },
		{ "ToolTip", "Hack class that mimics the behavior of the Merge Actors editor tool for use with Python\nHopefully this can be removed when the actual merging functions are exposed directly" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleMeshMergingBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleMeshMergingBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleMeshMergingBlueprintLibrary_Statics::ClassParams = {
		&UCitySampleMeshMergingBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCitySampleMeshMergingBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMeshMergingBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCitySampleMeshMergingBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UCitySampleMeshMergingBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleMeshMergingBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UCitySampleMeshMergingBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleMeshMergingBlueprintLibrary.OuterSingleton;
	}
	template<> CITYSAMPLEEDITOR_API UClass* StaticClass<UCitySampleMeshMergingBlueprintLibrary>()
	{
		return UCitySampleMeshMergingBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleMeshMergingBlueprintLibrary);
	UCitySampleMeshMergingBlueprintLibrary::~UCitySampleMeshMergingBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySampleEditor_MeshMerging_CitySampleMeshMerging_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySampleEditor_MeshMerging_CitySampleMeshMerging_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleMeshMergingBlueprintLibrary, UCitySampleMeshMergingBlueprintLibrary::StaticClass, TEXT("UCitySampleMeshMergingBlueprintLibrary"), &Z_Registration_Info_UClass_UCitySampleMeshMergingBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleMeshMergingBlueprintLibrary), 2103200063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySampleEditor_MeshMerging_CitySampleMeshMerging_h_2090706808(TEXT("/Script/CitySampleEditor"),
		Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySampleEditor_MeshMerging_CitySampleMeshMerging_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySampleEditor_MeshMerging_CitySampleMeshMerging_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
