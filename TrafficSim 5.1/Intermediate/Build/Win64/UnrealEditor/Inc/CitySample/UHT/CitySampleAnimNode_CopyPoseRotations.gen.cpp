// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Anim/CitySampleAnimNode_CopyPoseRotations.h"
#include "Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleAnimNode_CopyPoseRotations() {}
// Cross Module References
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySample_BoneSourceToTargetMapping;
class UScriptStruct* FCitySample_BoneSourceToTargetMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySample_BoneSourceToTargetMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySample_BoneSourceToTargetMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping, Z_Construct_UPackage__Script_CitySample(), TEXT("CitySample_BoneSourceToTargetMapping"));
	}
	return Z_Registration_Info_UScriptStruct_CitySample_BoneSourceToTargetMapping.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySample_BoneSourceToTargetMapping>()
{
	return FCitySample_BoneSourceToTargetMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetBoneName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceBoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceBoneNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeFullTransform_MetaData[];
#endif
		static void NewProp_bIncludeFullTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeFullTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeInputPose_MetaData[];
#endif
		static void NewProp_bIncludeInputPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeInputPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Anim/CitySampleAnimNode_CopyPoseRotations.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySample_BoneSourceToTargetMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_TargetBoneName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Anim/CitySampleAnimNode_CopyPoseRotations.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_TargetBoneName = { "TargetBoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCitySample_BoneSourceToTargetMapping, TargetBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_TargetBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_TargetBoneName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_SourceBoneNames_Inner = { "SourceBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_SourceBoneNames_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Anim/CitySampleAnimNode_CopyPoseRotations.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_SourceBoneNames = { "SourceBoneNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCitySample_BoneSourceToTargetMapping, SourceBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_SourceBoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_SourceBoneNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_bIncludeFullTransform_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Anim/CitySampleAnimNode_CopyPoseRotations.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_bIncludeFullTransform_SetBit(void* Obj)
	{
		((FCitySample_BoneSourceToTargetMapping*)Obj)->bIncludeFullTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_bIncludeFullTransform = { "bIncludeFullTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCitySample_BoneSourceToTargetMapping), &Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_bIncludeFullTransform_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_bIncludeFullTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_bIncludeFullTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_bIncludeInputPose_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Anim/CitySampleAnimNode_CopyPoseRotations.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_bIncludeInputPose_SetBit(void* Obj)
	{
		((FCitySample_BoneSourceToTargetMapping*)Obj)->bIncludeInputPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_bIncludeInputPose = { "bIncludeInputPose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCitySample_BoneSourceToTargetMapping), &Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_bIncludeInputPose_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_bIncludeInputPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_bIncludeInputPose_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_TargetBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_SourceBoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_SourceBoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_bIncludeFullTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewProp_bIncludeInputPose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"CitySample_BoneSourceToTargetMapping",
		sizeof(FCitySample_BoneSourceToTargetMapping),
		alignof(FCitySample_BoneSourceToTargetMapping),
		Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_CitySample_BoneSourceToTargetMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySample_BoneSourceToTargetMapping.InnerSingleton, Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CitySample_BoneSourceToTargetMapping.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCitySampleAnimNode_CopyPoseRotations>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FCitySampleAnimNode_CopyPoseRotations cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleAnimNode_CopyPoseRotations;
class UScriptStruct* FCitySampleAnimNode_CopyPoseRotations::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleAnimNode_CopyPoseRotations.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleAnimNode_CopyPoseRotations.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations, Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleAnimNode_CopyPoseRotations"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleAnimNode_CopyPoseRotations.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleAnimNode_CopyPoseRotations>()
{
	return FCitySampleAnimNode_CopyPoseRotations::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_In;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SourceMeshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneMapping_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneMapping_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAttachedParent_MetaData[];
#endif
		static void NewProp_bUseAttachedParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAttachedParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCopyCurves_MetaData[];
#endif
		static void NewProp_bCopyCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootBoneToCopy_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RootBoneToCopy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Simple controller to copy a bone's rotation to another one.\n */" },
		{ "ModuleRelativePath", "Anim/CitySampleAnimNode_CopyPoseRotations.h" },
		{ "ToolTip", "Simple controller to copy a bone's rotation to another one." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleAnimNode_CopyPoseRotations>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_In_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Anim/CitySampleAnimNode_CopyPoseRotations.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCitySampleAnimNode_CopyPoseRotations, In), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_In_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_In_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_SourceMeshComponent_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/*  This is used by default if it's valid */" },
		{ "ModuleRelativePath", "Anim/CitySampleAnimNode_CopyPoseRotations.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "This is used by default if it's valid" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_SourceMeshComponent = { "SourceMeshComponent", nullptr, (EPropertyFlags)0x001400000008200c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCitySampleAnimNode_CopyPoseRotations, SourceMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_SourceMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_SourceMeshComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_BoneMapping_Inner = { "BoneMapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping, METADATA_PARAMS(nullptr, 0) }; // 2106772837
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_BoneMapping_MetaData[] = {
		{ "Category", "Copy" },
		{ "ModuleRelativePath", "Anim/CitySampleAnimNode_CopyPoseRotations.h" },
		{ "NeverAsPin", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_BoneMapping = { "BoneMapping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCitySampleAnimNode_CopyPoseRotations, BoneMapping), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_BoneMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_BoneMapping_MetaData)) }; // 2106772837
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_bUseAttachedParent_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/* If SourceMeshComponent is not valid, and if this is true, it will look for attahced parent as a source */" },
		{ "ModuleRelativePath", "Anim/CitySampleAnimNode_CopyPoseRotations.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "If SourceMeshComponent is not valid, and if this is true, it will look for attahced parent as a source" },
	};
#endif
	void Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_bUseAttachedParent_SetBit(void* Obj)
	{
		((FCitySampleAnimNode_CopyPoseRotations*)Obj)->bUseAttachedParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_bUseAttachedParent = { "bUseAttachedParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FCitySampleAnimNode_CopyPoseRotations), &Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_bUseAttachedParent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_bUseAttachedParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_bUseAttachedParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_bCopyCurves_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/* Copy curves also from SouceMeshComponent. This will copy the curves if this instance also contains */" },
		{ "ModuleRelativePath", "Anim/CitySampleAnimNode_CopyPoseRotations.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "Copy curves also from SouceMeshComponent. This will copy the curves if this instance also contains" },
	};
#endif
	void Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_bCopyCurves_SetBit(void* Obj)
	{
		((FCitySampleAnimNode_CopyPoseRotations*)Obj)->bCopyCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_bCopyCurves = { "bCopyCurves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FCitySampleAnimNode_CopyPoseRotations), &Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_bCopyCurves_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_bCopyCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_bCopyCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_RootBoneToCopy_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/* If you want to specify copy root, use this - this will ensure copy only below of this joint (inclusively) */" },
		{ "ModuleRelativePath", "Anim/CitySampleAnimNode_CopyPoseRotations.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "If you want to specify copy root, use this - this will ensure copy only below of this joint (inclusively)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_RootBoneToCopy = { "RootBoneToCopy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCitySampleAnimNode_CopyPoseRotations, RootBoneToCopy), METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_RootBoneToCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_RootBoneToCopy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_In,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_SourceMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_BoneMapping_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_BoneMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_bUseAttachedParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_bCopyCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewProp_RootBoneToCopy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"CitySampleAnimNode_CopyPoseRotations",
		sizeof(FCitySampleAnimNode_CopyPoseRotations),
		alignof(FCitySampleAnimNode_CopyPoseRotations),
		Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations()
	{
		if (!Z_Registration_Info_UScriptStruct_CitySampleAnimNode_CopyPoseRotations.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleAnimNode_CopyPoseRotations.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CitySampleAnimNode_CopyPoseRotations.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Anim_CitySampleAnimNode_CopyPoseRotations_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Anim_CitySampleAnimNode_CopyPoseRotations_h_Statics::ScriptStructInfo[] = {
		{ FCitySample_BoneSourceToTargetMapping::StaticStruct, Z_Construct_UScriptStruct_FCitySample_BoneSourceToTargetMapping_Statics::NewStructOps, TEXT("CitySample_BoneSourceToTargetMapping"), &Z_Registration_Info_UScriptStruct_CitySample_BoneSourceToTargetMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySample_BoneSourceToTargetMapping), 2106772837U) },
		{ FCitySampleAnimNode_CopyPoseRotations::StaticStruct, Z_Construct_UScriptStruct_FCitySampleAnimNode_CopyPoseRotations_Statics::NewStructOps, TEXT("CitySampleAnimNode_CopyPoseRotations"), &Z_Registration_Info_UScriptStruct_CitySampleAnimNode_CopyPoseRotations, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleAnimNode_CopyPoseRotations), 3140686114U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Anim_CitySampleAnimNode_CopyPoseRotations_h_2871802396(TEXT("/Script/CitySample"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Anim_CitySampleAnimNode_CopyPoseRotations_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Anim_CitySampleAnimNode_CopyPoseRotations_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS