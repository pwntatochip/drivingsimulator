// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleEditor/MetaHumans/MetaHumanToolEditorBlueprintLibrary.h"
#include "AnimGraphRuntime/Public/AnimNodes/AnimNode_PoseDriver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetaHumanToolEditorBlueprintLibrary() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_PoseDriver_NoRegister();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseDriver();
	CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary();
	CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UPoseAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySampleEditor();
// End Cross Module References
	DEFINE_FUNCTION(UMetaHumanToolEditorFunctionLibrary::execSetPoseAssetPreviewMesh)
	{
		P_GET_OBJECT(UPoseAsset,Z_Param_PoseAsset);
		P_GET_OBJECT(USkeletalMesh,Z_Param_TargetPreviewSkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMetaHumanToolEditorFunctionLibrary::SetPoseAssetPreviewMesh(Z_Param_PoseAsset,Z_Param_TargetPreviewSkeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMetaHumanToolEditorFunctionLibrary::execSetAnimPreviewMesh)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimSequence);
		P_GET_OBJECT(USkeletalMesh,Z_Param_TargetPreviewSkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMetaHumanToolEditorFunctionLibrary::SetAnimPreviewMesh(Z_Param_AnimSequence,Z_Param_TargetPreviewSkeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMetaHumanToolEditorFunctionLibrary::execSetBpPreviewMesh)
	{
		P_GET_OBJECT(UAnimBlueprint,Z_Param_AnimBlueprint);
		P_GET_OBJECT(USkeletalMesh,Z_Param_TargetPreviewSkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMetaHumanToolEditorFunctionLibrary::SetBpPreviewMesh(Z_Param_AnimBlueprint,Z_Param_TargetPreviewSkeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMetaHumanToolEditorFunctionLibrary::execUpdateFromAnimSequence)
	{
		P_GET_OBJECT(UPoseAsset,Z_Param_PoseAsset);
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMetaHumanToolEditorFunctionLibrary::UpdateFromAnimSequence(Z_Param_PoseAsset,Z_Param_AnimSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMetaHumanToolEditorFunctionLibrary::execGetDrivingBones)
	{
		P_GET_STRUCT_REF(FAnimNode_PoseDriver,Z_Param_Out_PoseDriveNode);
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutBoneNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMetaHumanToolEditorFunctionLibrary::GetDrivingBones(Z_Param_Out_PoseDriveNode,Z_Param_Out_OutBoneNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMetaHumanToolEditorFunctionLibrary::execSetDrivingBones)
	{
		P_GET_STRUCT_REF(FAnimNode_PoseDriver,Z_Param_Out_PoseDriveNode);
		P_GET_TARRAY(FName,Z_Param_BoneNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMetaHumanToolEditorFunctionLibrary::SetDrivingBones(Z_Param_Out_PoseDriveNode,Z_Param_BoneNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMetaHumanToolEditorFunctionLibrary::execGetSourceBones)
	{
		P_GET_STRUCT_REF(FAnimNode_PoseDriver,Z_Param_Out_PoseDriveNode);
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutBoneNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMetaHumanToolEditorFunctionLibrary::GetSourceBones(Z_Param_Out_PoseDriveNode,Z_Param_Out_OutBoneNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMetaHumanToolEditorFunctionLibrary::execSetSourceBones)
	{
		P_GET_STRUCT_REF(FAnimNode_PoseDriver,Z_Param_Out_PoseDriveNode);
		P_GET_TARRAY(FName,Z_Param_BoneNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMetaHumanToolEditorFunctionLibrary::SetSourceBones(Z_Param_Out_PoseDriveNode,Z_Param_BoneNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMetaHumanToolEditorFunctionLibrary::execGetPoseDriverNode)
	{
		P_GET_OBJECT(UAnimGraphNode_PoseDriver,Z_Param_GraphNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAnimNode_PoseDriver*)Z_Param__Result=UMetaHumanToolEditorFunctionLibrary::GetPoseDriverNode(Z_Param_GraphNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMetaHumanToolEditorFunctionLibrary::execRetrievePoseDriverGraphNodes)
	{
		P_GET_OBJECT(UAnimBlueprint,Z_Param_AnimBlueprint);
		P_GET_TARRAY_REF(UAnimGraphNode_PoseDriver*,Z_Param_Out_OutNodes);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMetaHumanToolEditorFunctionLibrary::RetrievePoseDriverGraphNodes(Z_Param_AnimBlueprint,Z_Param_Out_OutNodes);
		P_NATIVE_END;
	}
	void UMetaHumanToolEditorFunctionLibrary::StaticRegisterNativesUMetaHumanToolEditorFunctionLibrary()
	{
		UClass* Class = UMetaHumanToolEditorFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDrivingBones", &UMetaHumanToolEditorFunctionLibrary::execGetDrivingBones },
			{ "GetPoseDriverNode", &UMetaHumanToolEditorFunctionLibrary::execGetPoseDriverNode },
			{ "GetSourceBones", &UMetaHumanToolEditorFunctionLibrary::execGetSourceBones },
			{ "RetrievePoseDriverGraphNodes", &UMetaHumanToolEditorFunctionLibrary::execRetrievePoseDriverGraphNodes },
			{ "SetAnimPreviewMesh", &UMetaHumanToolEditorFunctionLibrary::execSetAnimPreviewMesh },
			{ "SetBpPreviewMesh", &UMetaHumanToolEditorFunctionLibrary::execSetBpPreviewMesh },
			{ "SetDrivingBones", &UMetaHumanToolEditorFunctionLibrary::execSetDrivingBones },
			{ "SetPoseAssetPreviewMesh", &UMetaHumanToolEditorFunctionLibrary::execSetPoseAssetPreviewMesh },
			{ "SetSourceBones", &UMetaHumanToolEditorFunctionLibrary::execSetSourceBones },
			{ "UpdateFromAnimSequence", &UMetaHumanToolEditorFunctionLibrary::execUpdateFromAnimSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetDrivingBones_Statics
	{
		struct MetaHumanToolEditorFunctionLibrary_eventGetDrivingBones_Parms
		{
			FAnimNode_PoseDriver PoseDriveNode;
			TArray<FName> OutBoneNames;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseDriveNode;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutBoneNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutBoneNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetDrivingBones_Statics::NewProp_PoseDriveNode = { "PoseDriveNode", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetaHumanToolEditorFunctionLibrary_eventGetDrivingBones_Parms, PoseDriveNode), Z_Construct_UScriptStruct_FAnimNode_PoseDriver, METADATA_PARAMS(nullptr, 0) }; // 1501948622
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetDrivingBones_Statics::NewProp_OutBoneNames_Inner = { "OutBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetDrivingBones_Statics::NewProp_OutBoneNames = { "OutBoneNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetaHumanToolEditorFunctionLibrary_eventGetDrivingBones_Parms, OutBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetDrivingBones_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetDrivingBones_Statics::NewProp_PoseDriveNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetDrivingBones_Statics::NewProp_OutBoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetDrivingBones_Statics::NewProp_OutBoneNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetDrivingBones_Statics::Function_MetaDataParams[] = {
		{ "Category", "MetaHumanCreator" },
		{ "ModuleRelativePath", "MetaHumans/MetaHumanToolEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetDrivingBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary, nullptr, "GetDrivingBones", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetDrivingBones_Statics::MetaHumanToolEditorFunctionLibrary_eventGetDrivingBones_Parms), Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetDrivingBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetDrivingBones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetDrivingBones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetDrivingBones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetDrivingBones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetDrivingBones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetPoseDriverNode_Statics
	{
		struct MetaHumanToolEditorFunctionLibrary_eventGetPoseDriverNode_Parms
		{
			UAnimGraphNode_PoseDriver* GraphNode;
			FAnimNode_PoseDriver ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphNode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetPoseDriverNode_Statics::NewProp_GraphNode = { "GraphNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetaHumanToolEditorFunctionLibrary_eventGetPoseDriverNode_Parms, GraphNode), Z_Construct_UClass_UAnimGraphNode_PoseDriver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetPoseDriverNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetaHumanToolEditorFunctionLibrary_eventGetPoseDriverNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FAnimNode_PoseDriver, METADATA_PARAMS(nullptr, 0) }; // 1501948622
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetPoseDriverNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetPoseDriverNode_Statics::NewProp_GraphNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetPoseDriverNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetPoseDriverNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "MetaHumanCreator" },
		{ "ModuleRelativePath", "MetaHumans/MetaHumanToolEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetPoseDriverNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary, nullptr, "GetPoseDriverNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetPoseDriverNode_Statics::MetaHumanToolEditorFunctionLibrary_eventGetPoseDriverNode_Parms), Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetPoseDriverNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetPoseDriverNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetPoseDriverNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetPoseDriverNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetPoseDriverNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetPoseDriverNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetSourceBones_Statics
	{
		struct MetaHumanToolEditorFunctionLibrary_eventGetSourceBones_Parms
		{
			FAnimNode_PoseDriver PoseDriveNode;
			TArray<FName> OutBoneNames;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseDriveNode;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutBoneNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutBoneNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetSourceBones_Statics::NewProp_PoseDriveNode = { "PoseDriveNode", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetaHumanToolEditorFunctionLibrary_eventGetSourceBones_Parms, PoseDriveNode), Z_Construct_UScriptStruct_FAnimNode_PoseDriver, METADATA_PARAMS(nullptr, 0) }; // 1501948622
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetSourceBones_Statics::NewProp_OutBoneNames_Inner = { "OutBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetSourceBones_Statics::NewProp_OutBoneNames = { "OutBoneNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetaHumanToolEditorFunctionLibrary_eventGetSourceBones_Parms, OutBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetSourceBones_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetSourceBones_Statics::NewProp_PoseDriveNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetSourceBones_Statics::NewProp_OutBoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetSourceBones_Statics::NewProp_OutBoneNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetSourceBones_Statics::Function_MetaDataParams[] = {
		{ "Category", "MetaHumanCreator" },
		{ "ModuleRelativePath", "MetaHumans/MetaHumanToolEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetSourceBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary, nullptr, "GetSourceBones", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetSourceBones_Statics::MetaHumanToolEditorFunctionLibrary_eventGetSourceBones_Parms), Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetSourceBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetSourceBones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetSourceBones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetSourceBones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetSourceBones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetSourceBones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_RetrievePoseDriverGraphNodes_Statics
	{
		struct MetaHumanToolEditorFunctionLibrary_eventRetrievePoseDriverGraphNodes_Parms
		{
			UAnimBlueprint* AnimBlueprint;
			TArray<UAnimGraphNode_PoseDriver*> OutNodes;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimBlueprint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutNodes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_RetrievePoseDriverGraphNodes_Statics::NewProp_AnimBlueprint = { "AnimBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetaHumanToolEditorFunctionLibrary_eventRetrievePoseDriverGraphNodes_Parms, AnimBlueprint), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_RetrievePoseDriverGraphNodes_Statics::NewProp_OutNodes_Inner = { "OutNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimGraphNode_PoseDriver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_RetrievePoseDriverGraphNodes_Statics::NewProp_OutNodes = { "OutNodes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetaHumanToolEditorFunctionLibrary_eventRetrievePoseDriverGraphNodes_Parms, OutNodes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_RetrievePoseDriverGraphNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_RetrievePoseDriverGraphNodes_Statics::NewProp_AnimBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_RetrievePoseDriverGraphNodes_Statics::NewProp_OutNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_RetrievePoseDriverGraphNodes_Statics::NewProp_OutNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_RetrievePoseDriverGraphNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "MetaHumanCreator" },
		{ "ModuleRelativePath", "MetaHumans/MetaHumanToolEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_RetrievePoseDriverGraphNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary, nullptr, "RetrievePoseDriverGraphNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_RetrievePoseDriverGraphNodes_Statics::MetaHumanToolEditorFunctionLibrary_eventRetrievePoseDriverGraphNodes_Parms), Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_RetrievePoseDriverGraphNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_RetrievePoseDriverGraphNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_RetrievePoseDriverGraphNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_RetrievePoseDriverGraphNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_RetrievePoseDriverGraphNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_RetrievePoseDriverGraphNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetAnimPreviewMesh_Statics
	{
		struct MetaHumanToolEditorFunctionLibrary_eventSetAnimPreviewMesh_Parms
		{
			UAnimSequence* AnimSequence;
			USkeletalMesh* TargetPreviewSkeletalMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPreviewSkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetAnimPreviewMesh_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetaHumanToolEditorFunctionLibrary_eventSetAnimPreviewMesh_Parms, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetAnimPreviewMesh_Statics::NewProp_TargetPreviewSkeletalMesh = { "TargetPreviewSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetaHumanToolEditorFunctionLibrary_eventSetAnimPreviewMesh_Parms, TargetPreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetAnimPreviewMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetAnimPreviewMesh_Statics::NewProp_AnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetAnimPreviewMesh_Statics::NewProp_TargetPreviewSkeletalMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetAnimPreviewMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "MetaHumanCreator" },
		{ "ModuleRelativePath", "MetaHumans/MetaHumanToolEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetAnimPreviewMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary, nullptr, "SetAnimPreviewMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetAnimPreviewMesh_Statics::MetaHumanToolEditorFunctionLibrary_eventSetAnimPreviewMesh_Parms), Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetAnimPreviewMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetAnimPreviewMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetAnimPreviewMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetAnimPreviewMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetAnimPreviewMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetAnimPreviewMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetBpPreviewMesh_Statics
	{
		struct MetaHumanToolEditorFunctionLibrary_eventSetBpPreviewMesh_Parms
		{
			UAnimBlueprint* AnimBlueprint;
			USkeletalMesh* TargetPreviewSkeletalMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimBlueprint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPreviewSkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetBpPreviewMesh_Statics::NewProp_AnimBlueprint = { "AnimBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetaHumanToolEditorFunctionLibrary_eventSetBpPreviewMesh_Parms, AnimBlueprint), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetBpPreviewMesh_Statics::NewProp_TargetPreviewSkeletalMesh = { "TargetPreviewSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetaHumanToolEditorFunctionLibrary_eventSetBpPreviewMesh_Parms, TargetPreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetBpPreviewMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetBpPreviewMesh_Statics::NewProp_AnimBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetBpPreviewMesh_Statics::NewProp_TargetPreviewSkeletalMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetBpPreviewMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "MetaHumanCreator" },
		{ "Comment", "// UFUNCTION(BlueprintCallable, Category = \"MetaHumanCreator\", meta = (ScriptMethod))\n// static void RenamePose(UPoseAsset* PoseAsset, const FName& InOriginalName, const FName& InNewName);\n" },
		{ "ModuleRelativePath", "MetaHumans/MetaHumanToolEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"MetaHumanCreator\", meta = (ScriptMethod))\nstatic void RenamePose(UPoseAsset* PoseAsset, const FName& InOriginalName, const FName& InNewName);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetBpPreviewMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary, nullptr, "SetBpPreviewMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetBpPreviewMesh_Statics::MetaHumanToolEditorFunctionLibrary_eventSetBpPreviewMesh_Parms), Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetBpPreviewMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetBpPreviewMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetBpPreviewMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetBpPreviewMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetBpPreviewMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetBpPreviewMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetDrivingBones_Statics
	{
		struct MetaHumanToolEditorFunctionLibrary_eventSetDrivingBones_Parms
		{
			FAnimNode_PoseDriver PoseDriveNode;
			TArray<FName> BoneNames;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseDriveNode;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetDrivingBones_Statics::NewProp_PoseDriveNode = { "PoseDriveNode", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetaHumanToolEditorFunctionLibrary_eventSetDrivingBones_Parms, PoseDriveNode), Z_Construct_UScriptStruct_FAnimNode_PoseDriver, METADATA_PARAMS(nullptr, 0) }; // 1501948622
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetDrivingBones_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetDrivingBones_Statics::NewProp_BoneNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetDrivingBones_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetaHumanToolEditorFunctionLibrary_eventSetDrivingBones_Parms, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetDrivingBones_Statics::NewProp_BoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetDrivingBones_Statics::NewProp_BoneNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetDrivingBones_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetDrivingBones_Statics::NewProp_PoseDriveNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetDrivingBones_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetDrivingBones_Statics::NewProp_BoneNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetDrivingBones_Statics::Function_MetaDataParams[] = {
		{ "Category", "MetaHumanCreator" },
		{ "ModuleRelativePath", "MetaHumans/MetaHumanToolEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetDrivingBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary, nullptr, "SetDrivingBones", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetDrivingBones_Statics::MetaHumanToolEditorFunctionLibrary_eventSetDrivingBones_Parms), Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetDrivingBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetDrivingBones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetDrivingBones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetDrivingBones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetDrivingBones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetDrivingBones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetPoseAssetPreviewMesh_Statics
	{
		struct MetaHumanToolEditorFunctionLibrary_eventSetPoseAssetPreviewMesh_Parms
		{
			UPoseAsset* PoseAsset;
			USkeletalMesh* TargetPreviewSkeletalMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PoseAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPreviewSkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetPoseAssetPreviewMesh_Statics::NewProp_PoseAsset = { "PoseAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetaHumanToolEditorFunctionLibrary_eventSetPoseAssetPreviewMesh_Parms, PoseAsset), Z_Construct_UClass_UPoseAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetPoseAssetPreviewMesh_Statics::NewProp_TargetPreviewSkeletalMesh = { "TargetPreviewSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetaHumanToolEditorFunctionLibrary_eventSetPoseAssetPreviewMesh_Parms, TargetPreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetPoseAssetPreviewMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetPoseAssetPreviewMesh_Statics::NewProp_PoseAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetPoseAssetPreviewMesh_Statics::NewProp_TargetPreviewSkeletalMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetPoseAssetPreviewMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "MetaHumanCreator" },
		{ "ModuleRelativePath", "MetaHumans/MetaHumanToolEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetPoseAssetPreviewMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary, nullptr, "SetPoseAssetPreviewMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetPoseAssetPreviewMesh_Statics::MetaHumanToolEditorFunctionLibrary_eventSetPoseAssetPreviewMesh_Parms), Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetPoseAssetPreviewMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetPoseAssetPreviewMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetPoseAssetPreviewMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetPoseAssetPreviewMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetPoseAssetPreviewMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetPoseAssetPreviewMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetSourceBones_Statics
	{
		struct MetaHumanToolEditorFunctionLibrary_eventSetSourceBones_Parms
		{
			FAnimNode_PoseDriver PoseDriveNode;
			TArray<FName> BoneNames;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseDriveNode;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetSourceBones_Statics::NewProp_PoseDriveNode = { "PoseDriveNode", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetaHumanToolEditorFunctionLibrary_eventSetSourceBones_Parms, PoseDriveNode), Z_Construct_UScriptStruct_FAnimNode_PoseDriver, METADATA_PARAMS(nullptr, 0) }; // 1501948622
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetSourceBones_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetSourceBones_Statics::NewProp_BoneNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetSourceBones_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetaHumanToolEditorFunctionLibrary_eventSetSourceBones_Parms, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetSourceBones_Statics::NewProp_BoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetSourceBones_Statics::NewProp_BoneNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetSourceBones_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetSourceBones_Statics::NewProp_PoseDriveNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetSourceBones_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetSourceBones_Statics::NewProp_BoneNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetSourceBones_Statics::Function_MetaDataParams[] = {
		{ "Category", "MetaHumanCreator" },
		{ "ModuleRelativePath", "MetaHumans/MetaHumanToolEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetSourceBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary, nullptr, "SetSourceBones", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetSourceBones_Statics::MetaHumanToolEditorFunctionLibrary_eventSetSourceBones_Parms), Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetSourceBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetSourceBones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetSourceBones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetSourceBones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetSourceBones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetSourceBones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_UpdateFromAnimSequence_Statics
	{
		struct MetaHumanToolEditorFunctionLibrary_eventUpdateFromAnimSequence_Parms
		{
			UPoseAsset* PoseAsset;
			UAnimSequence* AnimSequence;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PoseAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_UpdateFromAnimSequence_Statics::NewProp_PoseAsset = { "PoseAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetaHumanToolEditorFunctionLibrary_eventUpdateFromAnimSequence_Parms, PoseAsset), Z_Construct_UClass_UPoseAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_UpdateFromAnimSequence_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetaHumanToolEditorFunctionLibrary_eventUpdateFromAnimSequence_Parms, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_UpdateFromAnimSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_UpdateFromAnimSequence_Statics::NewProp_PoseAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_UpdateFromAnimSequence_Statics::NewProp_AnimSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_UpdateFromAnimSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "MetaHumanCreator" },
		{ "Comment", "// UFUNCTION(BlueprintCallable, Category = \"MetaHumanCreator\", meta = (ScriptMethod))\n// static void CopyTargetsFromPoseAsset(UAnimGraphNode_PoseDriver* GraphNode);\n" },
		{ "ModuleRelativePath", "MetaHumans/MetaHumanToolEditorBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"MetaHumanCreator\", meta = (ScriptMethod))\nstatic void CopyTargetsFromPoseAsset(UAnimGraphNode_PoseDriver* GraphNode);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_UpdateFromAnimSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary, nullptr, "UpdateFromAnimSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_UpdateFromAnimSequence_Statics::MetaHumanToolEditorFunctionLibrary_eventUpdateFromAnimSequence_Parms), Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_UpdateFromAnimSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_UpdateFromAnimSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_UpdateFromAnimSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_UpdateFromAnimSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_UpdateFromAnimSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_UpdateFromAnimSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaHumanToolEditorFunctionLibrary);
	UClass* Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary_NoRegister()
	{
		return UMetaHumanToolEditorFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetDrivingBones, "GetDrivingBones" }, // 3912108233
		{ &Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetPoseDriverNode, "GetPoseDriverNode" }, // 367617991
		{ &Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_GetSourceBones, "GetSourceBones" }, // 3987830731
		{ &Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_RetrievePoseDriverGraphNodes, "RetrievePoseDriverGraphNodes" }, // 598680388
		{ &Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetAnimPreviewMesh, "SetAnimPreviewMesh" }, // 1939384357
		{ &Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetBpPreviewMesh, "SetBpPreviewMesh" }, // 3419982949
		{ &Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetDrivingBones, "SetDrivingBones" }, // 1721018713
		{ &Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetPoseAssetPreviewMesh, "SetPoseAssetPreviewMesh" }, // 1236678193
		{ &Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_SetSourceBones, "SetSourceBones" }, // 1427239980
		{ &Z_Construct_UFunction_UMetaHumanToolEditorFunctionLibrary_UpdateFromAnimSequence, "UpdateFromAnimSequence" }, // 1301045529
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MetaHumans/MetaHumanToolEditorBlueprintLibrary.h" },
		{ "ModuleRelativePath", "MetaHumans/MetaHumanToolEditorBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaHumanToolEditorFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary_Statics::ClassParams = {
		&UMetaHumanToolEditorFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UMetaHumanToolEditorFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaHumanToolEditorFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetaHumanToolEditorFunctionLibrary.OuterSingleton;
	}
	template<> CITYSAMPLEEDITOR_API UClass* StaticClass<UMetaHumanToolEditorFunctionLibrary>()
	{
		return UMetaHumanToolEditorFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaHumanToolEditorFunctionLibrary);
	UMetaHumanToolEditorFunctionLibrary::~UMetaHumanToolEditorFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySampleEditor_MetaHumans_MetaHumanToolEditorBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySampleEditor_MetaHumans_MetaHumanToolEditorBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMetaHumanToolEditorFunctionLibrary, UMetaHumanToolEditorFunctionLibrary::StaticClass, TEXT("UMetaHumanToolEditorFunctionLibrary"), &Z_Registration_Info_UClass_UMetaHumanToolEditorFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaHumanToolEditorFunctionLibrary), 2513678254U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySampleEditor_MetaHumans_MetaHumanToolEditorBlueprintLibrary_h_4148234359(TEXT("/Script/CitySampleEditor"),
		Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySampleEditor_MetaHumans_MetaHumanToolEditorBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySampleEditor_MetaHumans_MetaHumanToolEditorBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
