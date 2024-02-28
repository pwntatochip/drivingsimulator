// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Crowd/CrowdCharacterDataAsset.h"
#include "CitySample/Crowd/CrowdCharacterDefinition.h"
#include "Engine/Classes/Components/LODSyncComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdCharacterDataAsset() {}
// Cross Module References
	ANIMTOTEXTURE_API UClass* Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCrowdCharacterDataAsset();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCrowdCharacterDataAsset_NoRegister();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySampleCrowdBodyType();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySampleCrowdGender();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleComponentSync();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdCharacterDefinition();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdGenderDefinition();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdHairColorDefinition();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLODMappingData();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	DEFINE_FUNCTION(UCrowdCharacterDataAsset::execFindAccesoryMeshes)
	{
		P_GET_UBOOL(Z_Param_bMale);
		P_GET_UBOOL(Z_Param_bFemale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UStaticMesh*>*)Z_Param__Result=P_THIS->FindAccesoryMeshes(Z_Param_bMale,Z_Param_bFemale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCrowdCharacterDataAsset::execFindGroomMeshes)
	{
		P_GET_UBOOL(Z_Param_bMale);
		P_GET_UBOOL(Z_Param_bFemale);
		P_GET_UBOOL(Z_Param_bHair);
		P_GET_UBOOL(Z_Param_bEyebrows);
		P_GET_UBOOL(Z_Param_bFuzz);
		P_GET_UBOOL(Z_Param_bEyelashes);
		P_GET_UBOOL(Z_Param_bMustache);
		P_GET_UBOOL(Z_Param_bBeard);
		P_GET_PROPERTY(FIntProperty,Z_Param_GroupIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UStaticMesh*>*)Z_Param__Result=P_THIS->FindGroomMeshes(Z_Param_bMale,Z_Param_bFemale,Z_Param_bHair,Z_Param_bEyebrows,Z_Param_bFuzz,Z_Param_bEyelashes,Z_Param_bMustache,Z_Param_bBeard,Z_Param_GroupIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCrowdCharacterDataAsset::execFindGrooms)
	{
		P_GET_UBOOL(Z_Param_bMale);
		P_GET_UBOOL(Z_Param_bFemale);
		P_GET_UBOOL(Z_Param_bHair);
		P_GET_UBOOL(Z_Param_bEyebrows);
		P_GET_UBOOL(Z_Param_bFuzz);
		P_GET_UBOOL(Z_Param_bEyelashes);
		P_GET_UBOOL(Z_Param_bMustache);
		P_GET_UBOOL(Z_Param_bBeard);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UGroomAsset*>*)Z_Param__Result=P_THIS->FindGrooms(Z_Param_bMale,Z_Param_bFemale,Z_Param_bHair,Z_Param_bEyebrows,Z_Param_bFuzz,Z_Param_bEyelashes,Z_Param_bMustache,Z_Param_bBeard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCrowdCharacterDataAsset::execFindSkeletalMeshes)
	{
		P_GET_UBOOL(Z_Param_bMale);
		P_GET_UBOOL(Z_Param_bFemale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USkeletalMesh*>*)Z_Param__Result=P_THIS->FindSkeletalMeshes(Z_Param_bMale,Z_Param_bFemale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCrowdCharacterDataAsset::execFindHeadSkeletalMeshes)
	{
		P_GET_UBOOL(Z_Param_bMale);
		P_GET_UBOOL(Z_Param_bFemale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USkeletalMesh*>*)Z_Param__Result=P_THIS->FindHeadSkeletalMeshes(Z_Param_bMale,Z_Param_bFemale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCrowdCharacterDataAsset::execFindBodySkeletalMeshes)
	{
		P_GET_UBOOL(Z_Param_bMale);
		P_GET_UBOOL(Z_Param_bFemale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USkeletalMesh*>*)Z_Param__Result=P_THIS->FindBodySkeletalMeshes(Z_Param_bMale,Z_Param_bFemale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCrowdCharacterDataAsset::execFindBaseSkeletalMeshes)
	{
		P_GET_UBOOL(Z_Param_bMale);
		P_GET_UBOOL(Z_Param_bFemale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USkeletalMesh*>*)Z_Param__Result=P_THIS->FindBaseSkeletalMeshes(Z_Param_bMale,Z_Param_bFemale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCrowdCharacterDataAsset::execFindOutfitSkeletalMeshes)
	{
		P_GET_UBOOL(Z_Param_bMale);
		P_GET_UBOOL(Z_Param_bFemale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USkeletalMesh*>*)Z_Param__Result=P_THIS->FindOutfitSkeletalMeshes(Z_Param_bMale,Z_Param_bFemale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCrowdCharacterDataAsset::execFindDataAssets)
	{
		P_GET_UBOOL(Z_Param_bMale);
		P_GET_UBOOL(Z_Param_bFemale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UAnimToTextureDataAsset*>*)Z_Param__Result=P_THIS->FindDataAssets(Z_Param_bMale,Z_Param_bFemale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCrowdCharacterDataAsset::execFindHeadDataAssets)
	{
		P_GET_UBOOL(Z_Param_bMale);
		P_GET_UBOOL(Z_Param_bFemale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UAnimToTextureDataAsset*>*)Z_Param__Result=P_THIS->FindHeadDataAssets(Z_Param_bMale,Z_Param_bFemale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCrowdCharacterDataAsset::execFindBodyDataAssets)
	{
		P_GET_UBOOL(Z_Param_bMale);
		P_GET_UBOOL(Z_Param_bFemale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UAnimToTextureDataAsset*>*)Z_Param__Result=P_THIS->FindBodyDataAssets(Z_Param_bMale,Z_Param_bFemale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCrowdCharacterDataAsset::execFindOutfitDataAssets)
	{
		P_GET_UBOOL(Z_Param_bMale);
		P_GET_UBOOL(Z_Param_bFemale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UAnimToTextureDataAsset*>*)Z_Param__Result=P_THIS->FindOutfitDataAssets(Z_Param_bMale,Z_Param_bFemale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCrowdCharacterDataAsset::execGetCharacterDefinitionFromIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_GlobalIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCrowdCharacterDefinition*)Z_Param__Result=P_THIS->GetCharacterDefinitionFromIndex(Z_Param_GlobalIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCrowdCharacterDataAsset::execGetCharacterDefinition)
	{
		P_GET_ENUM(ECitySampleCrowdGender,Z_Param_Skeleton);
		P_GET_ENUM(ECitySampleCrowdBodyType,Z_Param_BodyType);
		P_GET_PROPERTY(FIntProperty,Z_Param_HeadIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_OutfitIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_OutfitMaterialIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_HairIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_HairColorIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_AccessoryIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SkinTextureIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SkinTextureModifierIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ScaleFactorIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCrowdCharacterDefinition*)Z_Param__Result=P_THIS->GetCharacterDefinition(ECitySampleCrowdGender(Z_Param_Skeleton),ECitySampleCrowdBodyType(Z_Param_BodyType),Z_Param_HeadIndex,Z_Param_OutfitIndex,Z_Param_OutfitMaterialIndex,Z_Param_HairIndex,Z_Param_HairColorIndex,Z_Param_AccessoryIndex,Z_Param_SkinTextureIndex,Z_Param_SkinTextureModifierIndex,Z_Param_ScaleFactorIndex);
		P_NATIVE_END;
	}
	void UCrowdCharacterDataAsset::StaticRegisterNativesUCrowdCharacterDataAsset()
	{
		UClass* Class = UCrowdCharacterDataAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindAccesoryMeshes", &UCrowdCharacterDataAsset::execFindAccesoryMeshes },
			{ "FindBaseSkeletalMeshes", &UCrowdCharacterDataAsset::execFindBaseSkeletalMeshes },
			{ "FindBodyDataAssets", &UCrowdCharacterDataAsset::execFindBodyDataAssets },
			{ "FindBodySkeletalMeshes", &UCrowdCharacterDataAsset::execFindBodySkeletalMeshes },
			{ "FindDataAssets", &UCrowdCharacterDataAsset::execFindDataAssets },
			{ "FindGroomMeshes", &UCrowdCharacterDataAsset::execFindGroomMeshes },
			{ "FindGrooms", &UCrowdCharacterDataAsset::execFindGrooms },
			{ "FindHeadDataAssets", &UCrowdCharacterDataAsset::execFindHeadDataAssets },
			{ "FindHeadSkeletalMeshes", &UCrowdCharacterDataAsset::execFindHeadSkeletalMeshes },
			{ "FindOutfitDataAssets", &UCrowdCharacterDataAsset::execFindOutfitDataAssets },
			{ "FindOutfitSkeletalMeshes", &UCrowdCharacterDataAsset::execFindOutfitSkeletalMeshes },
			{ "FindSkeletalMeshes", &UCrowdCharacterDataAsset::execFindSkeletalMeshes },
			{ "GetCharacterDefinition", &UCrowdCharacterDataAsset::execGetCharacterDefinition },
			{ "GetCharacterDefinitionFromIndex", &UCrowdCharacterDataAsset::execGetCharacterDefinitionFromIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics
	{
		struct CrowdCharacterDataAsset_eventFindAccesoryMeshes_Parms
		{
			bool bMale;
			bool bFemale;
			TArray<UStaticMesh*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[];
#endif
		static void NewProp_bMale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFemale_MetaData[];
#endif
		static void NewProp_bFemale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFemale;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_bMale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_bMale_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindAccesoryMeshes_Parms*)Obj)->bMale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindAccesoryMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_bMale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_bMale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_bFemale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_bFemale_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindAccesoryMeshes_Parms*)Obj)->bFemale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_bFemale = { "bFemale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindAccesoryMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_bFemale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_bFemale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_bFemale_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindAccesoryMeshes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_bMale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_bFemale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Finds All Unique Accessory Meshes used in all Definitions.*/" },
		{ "CPP_Default_bFemale", "true" },
		{ "CPP_Default_bMale", "true" },
		{ "ModuleRelativePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "ToolTip", "Finds All Unique Accessory Meshes used in all Definitions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "FindAccesoryMeshes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::CrowdCharacterDataAsset_eventFindAccesoryMeshes_Parms), Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics
	{
		struct CrowdCharacterDataAsset_eventFindBaseSkeletalMeshes_Parms
		{
			bool bMale;
			bool bFemale;
			TArray<USkeletalMesh*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[];
#endif
		static void NewProp_bMale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFemale_MetaData[];
#endif
		static void NewProp_bFemale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFemale;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_bMale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_bMale_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindBaseSkeletalMeshes_Parms*)Obj)->bMale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindBaseSkeletalMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_bMale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_bMale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_bFemale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_bFemale_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindBaseSkeletalMeshes_Parms*)Obj)->bFemale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_bFemale = { "bFemale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindBaseSkeletalMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_bFemale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_bFemale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_bFemale_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindBaseSkeletalMeshes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_bMale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_bFemale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Finds All Unique Base SkeletalMeshes used in all BodyDefinitions */" },
		{ "CPP_Default_bFemale", "true" },
		{ "CPP_Default_bMale", "true" },
		{ "ModuleRelativePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "ToolTip", "Finds All Unique Base SkeletalMeshes used in all BodyDefinitions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "FindBaseSkeletalMeshes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::CrowdCharacterDataAsset_eventFindBaseSkeletalMeshes_Parms), Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics
	{
		struct CrowdCharacterDataAsset_eventFindBodyDataAssets_Parms
		{
			bool bMale;
			bool bFemale;
			TArray<UAnimToTextureDataAsset*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[];
#endif
		static void NewProp_bMale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFemale_MetaData[];
#endif
		static void NewProp_bFemale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFemale;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_bMale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_bMale_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindBodyDataAssets_Parms*)Obj)->bMale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindBodyDataAssets_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_bMale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_bMale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_bFemale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_bFemale_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindBodyDataAssets_Parms*)Obj)->bFemale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_bFemale = { "bFemale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindBodyDataAssets_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_bFemale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_bFemale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_bFemale_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindBodyDataAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_bMale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_bFemale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Finds All Unique Body DataAsset used in all BodyDefinitions */" },
		{ "CPP_Default_bFemale", "true" },
		{ "CPP_Default_bMale", "true" },
		{ "ModuleRelativePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "ToolTip", "Finds All Unique Body DataAsset used in all BodyDefinitions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "FindBodyDataAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::CrowdCharacterDataAsset_eventFindBodyDataAssets_Parms), Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics
	{
		struct CrowdCharacterDataAsset_eventFindBodySkeletalMeshes_Parms
		{
			bool bMale;
			bool bFemale;
			TArray<USkeletalMesh*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[];
#endif
		static void NewProp_bMale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFemale_MetaData[];
#endif
		static void NewProp_bFemale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFemale;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_bMale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_bMale_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindBodySkeletalMeshes_Parms*)Obj)->bMale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindBodySkeletalMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_bMale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_bMale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_bFemale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_bFemale_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindBodySkeletalMeshes_Parms*)Obj)->bFemale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_bFemale = { "bFemale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindBodySkeletalMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_bFemale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_bFemale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_bFemale_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindBodySkeletalMeshes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_bMale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_bFemale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Finds All Unique Body SkeletalMeshes used in all BodyDefinitions */" },
		{ "CPP_Default_bFemale", "true" },
		{ "CPP_Default_bMale", "true" },
		{ "ModuleRelativePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "ToolTip", "Finds All Unique Body SkeletalMeshes used in all BodyDefinitions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "FindBodySkeletalMeshes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::CrowdCharacterDataAsset_eventFindBodySkeletalMeshes_Parms), Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics
	{
		struct CrowdCharacterDataAsset_eventFindDataAssets_Parms
		{
			bool bMale;
			bool bFemale;
			TArray<UAnimToTextureDataAsset*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[];
#endif
		static void NewProp_bMale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFemale_MetaData[];
#endif
		static void NewProp_bFemale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFemale;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_bMale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_bMale_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindDataAssets_Parms*)Obj)->bMale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindDataAssets_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_bMale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_bMale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_bFemale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_bFemale_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindDataAssets_Parms*)Obj)->bFemale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_bFemale = { "bFemale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindDataAssets_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_bFemale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_bFemale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_bFemale_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindDataAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_bMale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_bFemale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Finds Unique (Outfit/Body/Head) DataAsset used in all Definitions. */" },
		{ "CPP_Default_bFemale", "true" },
		{ "CPP_Default_bMale", "true" },
		{ "ModuleRelativePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "ToolTip", "Finds Unique (Outfit/Body/Head) DataAsset used in all Definitions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "FindDataAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::CrowdCharacterDataAsset_eventFindDataAssets_Parms), Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics
	{
		struct CrowdCharacterDataAsset_eventFindGroomMeshes_Parms
		{
			bool bMale;
			bool bFemale;
			bool bHair;
			bool bEyebrows;
			bool bFuzz;
			bool bEyelashes;
			bool bMustache;
			bool bBeard;
			int32 GroupIndex;
			TArray<UStaticMesh*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[];
#endif
		static void NewProp_bMale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFemale_MetaData[];
#endif
		static void NewProp_bFemale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFemale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHair_MetaData[];
#endif
		static void NewProp_bHair_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHair;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEyebrows_MetaData[];
#endif
		static void NewProp_bEyebrows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEyebrows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFuzz_MetaData[];
#endif
		static void NewProp_bFuzz_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFuzz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEyelashes_MetaData[];
#endif
		static void NewProp_bEyelashes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEyelashes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMustache_MetaData[];
#endif
		static void NewProp_bMustache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMustache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBeard_MetaData[];
#endif
		static void NewProp_bBeard_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBeard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GroupIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bMale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bMale_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindGroomMeshes_Parms*)Obj)->bMale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGroomMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bMale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bMale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bFemale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bFemale_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindGroomMeshes_Parms*)Obj)->bFemale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bFemale = { "bFemale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGroomMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bFemale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bFemale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bFemale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bHair_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bHair_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindGroomMeshes_Parms*)Obj)->bHair = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bHair = { "bHair", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGroomMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bHair_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bHair_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bHair_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bEyebrows_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bEyebrows_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindGroomMeshes_Parms*)Obj)->bEyebrows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bEyebrows = { "bEyebrows", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGroomMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bEyebrows_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bEyebrows_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bEyebrows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bFuzz_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bFuzz_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindGroomMeshes_Parms*)Obj)->bFuzz = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bFuzz = { "bFuzz", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGroomMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bFuzz_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bFuzz_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bFuzz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bEyelashes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bEyelashes_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindGroomMeshes_Parms*)Obj)->bEyelashes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bEyelashes = { "bEyelashes", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGroomMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bEyelashes_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bEyelashes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bEyelashes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bMustache_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bMustache_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindGroomMeshes_Parms*)Obj)->bMustache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bMustache = { "bMustache", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGroomMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bMustache_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bMustache_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bMustache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bBeard_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bBeard_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindGroomMeshes_Parms*)Obj)->bBeard = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bBeard = { "bBeard", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGroomMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bBeard_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bBeard_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bBeard_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_GroupIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindGroomMeshes_Parms, GroupIndex), METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_GroupIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_GroupIndex_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindGroomMeshes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bMale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bFemale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bHair,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bEyebrows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bFuzz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bEyelashes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bMustache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_bBeard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_GroupIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*INDEX_NONE*/" },
		{ "CPP_Default_bBeard", "true" },
		{ "CPP_Default_bEyebrows", "true" },
		{ "CPP_Default_bEyelashes", "true" },
		{ "CPP_Default_bFemale", "true" },
		{ "CPP_Default_bFuzz", "true" },
		{ "CPP_Default_bHair", "true" },
		{ "CPP_Default_bMale", "true" },
		{ "CPP_Default_bMustache", "true" },
		{ "CPP_Default_GroupIndex", "-1" },
		{ "ModuleRelativePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "ToolTip", "INDEX_NONE" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "FindGroomMeshes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::CrowdCharacterDataAsset_eventFindGroomMeshes_Parms), Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics
	{
		struct CrowdCharacterDataAsset_eventFindGrooms_Parms
		{
			bool bMale;
			bool bFemale;
			bool bHair;
			bool bEyebrows;
			bool bFuzz;
			bool bEyelashes;
			bool bMustache;
			bool bBeard;
			TArray<UGroomAsset*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[];
#endif
		static void NewProp_bMale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFemale_MetaData[];
#endif
		static void NewProp_bFemale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFemale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHair_MetaData[];
#endif
		static void NewProp_bHair_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHair;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEyebrows_MetaData[];
#endif
		static void NewProp_bEyebrows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEyebrows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFuzz_MetaData[];
#endif
		static void NewProp_bFuzz_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFuzz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEyelashes_MetaData[];
#endif
		static void NewProp_bEyelashes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEyelashes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMustache_MetaData[];
#endif
		static void NewProp_bMustache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMustache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBeard_MetaData[];
#endif
		static void NewProp_bBeard_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBeard;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bMale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bMale_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindGrooms_Parms*)Obj)->bMale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGrooms_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bMale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bMale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bFemale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bFemale_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindGrooms_Parms*)Obj)->bFemale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bFemale = { "bFemale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGrooms_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bFemale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bFemale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bFemale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bHair_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bHair_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindGrooms_Parms*)Obj)->bHair = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bHair = { "bHair", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGrooms_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bHair_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bHair_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bHair_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bEyebrows_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bEyebrows_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindGrooms_Parms*)Obj)->bEyebrows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bEyebrows = { "bEyebrows", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGrooms_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bEyebrows_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bEyebrows_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bEyebrows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bFuzz_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bFuzz_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindGrooms_Parms*)Obj)->bFuzz = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bFuzz = { "bFuzz", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGrooms_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bFuzz_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bFuzz_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bFuzz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bEyelashes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bEyelashes_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindGrooms_Parms*)Obj)->bEyelashes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bEyelashes = { "bEyelashes", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGrooms_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bEyelashes_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bEyelashes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bEyelashes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bMustache_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bMustache_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindGrooms_Parms*)Obj)->bMustache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bMustache = { "bMustache", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGrooms_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bMustache_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bMustache_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bMustache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bBeard_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bBeard_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindGrooms_Parms*)Obj)->bBeard = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bBeard = { "bBeard", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindGrooms_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bBeard_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bBeard_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bBeard_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindGrooms_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bMale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bFemale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bHair,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bEyebrows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bFuzz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bEyelashes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bMustache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_bBeard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Finds All Unique Grooms used in all Definitions */" },
		{ "CPP_Default_bBeard", "true" },
		{ "CPP_Default_bEyebrows", "true" },
		{ "CPP_Default_bEyelashes", "true" },
		{ "CPP_Default_bFemale", "true" },
		{ "CPP_Default_bFuzz", "true" },
		{ "CPP_Default_bHair", "true" },
		{ "CPP_Default_bMale", "true" },
		{ "CPP_Default_bMustache", "true" },
		{ "ModuleRelativePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "ToolTip", "Finds All Unique Grooms used in all Definitions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "FindGrooms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::CrowdCharacterDataAsset_eventFindGrooms_Parms), Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics
	{
		struct CrowdCharacterDataAsset_eventFindHeadDataAssets_Parms
		{
			bool bMale;
			bool bFemale;
			TArray<UAnimToTextureDataAsset*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[];
#endif
		static void NewProp_bMale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFemale_MetaData[];
#endif
		static void NewProp_bFemale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFemale;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_bMale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_bMale_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindHeadDataAssets_Parms*)Obj)->bMale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindHeadDataAssets_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_bMale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_bMale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_bFemale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_bFemale_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindHeadDataAssets_Parms*)Obj)->bFemale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_bFemale = { "bFemale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindHeadDataAssets_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_bFemale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_bFemale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_bFemale_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindHeadDataAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_bMale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_bFemale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Finds All Unique Head DataAsset used in all Definitions */" },
		{ "CPP_Default_bFemale", "true" },
		{ "CPP_Default_bMale", "true" },
		{ "ModuleRelativePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "ToolTip", "Finds All Unique Head DataAsset used in all Definitions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "FindHeadDataAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::CrowdCharacterDataAsset_eventFindHeadDataAssets_Parms), Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics
	{
		struct CrowdCharacterDataAsset_eventFindHeadSkeletalMeshes_Parms
		{
			bool bMale;
			bool bFemale;
			TArray<USkeletalMesh*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[];
#endif
		static void NewProp_bMale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFemale_MetaData[];
#endif
		static void NewProp_bFemale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFemale;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_bMale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_bMale_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindHeadSkeletalMeshes_Parms*)Obj)->bMale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindHeadSkeletalMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_bMale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_bMale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_bFemale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_bFemale_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindHeadSkeletalMeshes_Parms*)Obj)->bFemale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_bFemale = { "bFemale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindHeadSkeletalMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_bFemale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_bFemale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_bFemale_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindHeadSkeletalMeshes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_bMale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_bFemale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Finds All Unique Head SkeletalMeshes used in all Definitions */" },
		{ "CPP_Default_bFemale", "true" },
		{ "CPP_Default_bMale", "true" },
		{ "ModuleRelativePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "ToolTip", "Finds All Unique Head SkeletalMeshes used in all Definitions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "FindHeadSkeletalMeshes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::CrowdCharacterDataAsset_eventFindHeadSkeletalMeshes_Parms), Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics
	{
		struct CrowdCharacterDataAsset_eventFindOutfitDataAssets_Parms
		{
			bool bMale;
			bool bFemale;
			TArray<UAnimToTextureDataAsset*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[];
#endif
		static void NewProp_bMale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFemale_MetaData[];
#endif
		static void NewProp_bFemale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFemale;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_bMale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_bMale_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindOutfitDataAssets_Parms*)Obj)->bMale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindOutfitDataAssets_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_bMale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_bMale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_bFemale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_bFemale_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindOutfitDataAssets_Parms*)Obj)->bFemale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_bFemale = { "bFemale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindOutfitDataAssets_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_bFemale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_bFemale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_bFemale_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindOutfitDataAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_bMale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_bFemale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Finds All Unique Outfit DataAsset used in all OutfitDefinitions */" },
		{ "CPP_Default_bFemale", "true" },
		{ "CPP_Default_bMale", "true" },
		{ "ModuleRelativePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "ToolTip", "Finds All Unique Outfit DataAsset used in all OutfitDefinitions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "FindOutfitDataAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::CrowdCharacterDataAsset_eventFindOutfitDataAssets_Parms), Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics
	{
		struct CrowdCharacterDataAsset_eventFindOutfitSkeletalMeshes_Parms
		{
			bool bMale;
			bool bFemale;
			TArray<USkeletalMesh*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[];
#endif
		static void NewProp_bMale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFemale_MetaData[];
#endif
		static void NewProp_bFemale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFemale;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_bMale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_bMale_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindOutfitSkeletalMeshes_Parms*)Obj)->bMale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindOutfitSkeletalMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_bMale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_bMale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_bFemale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_bFemale_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindOutfitSkeletalMeshes_Parms*)Obj)->bFemale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_bFemale = { "bFemale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindOutfitSkeletalMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_bFemale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_bFemale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_bFemale_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindOutfitSkeletalMeshes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_bMale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_bFemale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Finds All Unique Outfit SkeletalMeshes used in all OutfitDefinitions */" },
		{ "CPP_Default_bFemale", "true" },
		{ "CPP_Default_bMale", "true" },
		{ "ModuleRelativePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "ToolTip", "Finds All Unique Outfit SkeletalMeshes used in all OutfitDefinitions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "FindOutfitSkeletalMeshes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::CrowdCharacterDataAsset_eventFindOutfitSkeletalMeshes_Parms), Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics
	{
		struct CrowdCharacterDataAsset_eventFindSkeletalMeshes_Parms
		{
			bool bMale;
			bool bFemale;
			TArray<USkeletalMesh*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMale_MetaData[];
#endif
		static void NewProp_bMale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFemale_MetaData[];
#endif
		static void NewProp_bFemale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFemale;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_bMale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_bMale_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindSkeletalMeshes_Parms*)Obj)->bMale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_bMale = { "bMale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindSkeletalMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_bMale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_bMale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_bMale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_bFemale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_bFemale_SetBit(void* Obj)
	{
		((CrowdCharacterDataAsset_eventFindSkeletalMeshes_Parms*)Obj)->bFemale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_bFemale = { "bFemale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdCharacterDataAsset_eventFindSkeletalMeshes_Parms), &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_bFemale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_bFemale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_bFemale_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventFindSkeletalMeshes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_bMale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_bFemale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Finds Unique (Outfit/Body/Head) SkeletalMeshes used in all Definitions. */" },
		{ "CPP_Default_bFemale", "true" },
		{ "CPP_Default_bMale", "true" },
		{ "ModuleRelativePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "ToolTip", "Finds Unique (Outfit/Body/Head) SkeletalMeshes used in all Definitions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "FindSkeletalMeshes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::CrowdCharacterDataAsset_eventFindSkeletalMeshes_Parms), Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics
	{
		struct CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms
		{
			ECitySampleCrowdGender Skeleton;
			ECitySampleCrowdBodyType BodyType;
			int32 HeadIndex;
			int32 OutfitIndex;
			int32 OutfitMaterialIndex;
			int32 HairIndex;
			int32 HairColorIndex;
			int32 AccessoryIndex;
			int32 SkinTextureIndex;
			int32 SkinTextureModifierIndex;
			int32 ScaleFactorIndex;
			FCrowdCharacterDefinition ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Skeleton_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Skeleton;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BodyType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BodyType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HeadIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutfitIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutfitIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutfitMaterialIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutfitMaterialIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HairIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairColorIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HairColorIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccessoryIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AccessoryIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinTextureIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SkinTextureIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinTextureModifierIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SkinTextureModifierIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFactorIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ScaleFactorIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_Skeleton_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_Skeleton_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms, Skeleton), Z_Construct_UEnum_CitySample_ECitySampleCrowdGender, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_Skeleton_MetaData)) }; // 2300556037
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_BodyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_BodyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_BodyType = { "BodyType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms, BodyType), Z_Construct_UEnum_CitySample_ECitySampleCrowdBodyType, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_BodyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_BodyType_MetaData)) }; // 1226486887
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_HeadIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_HeadIndex = { "HeadIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms, HeadIndex), METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_HeadIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_HeadIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_OutfitIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_OutfitIndex = { "OutfitIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms, OutfitIndex), METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_OutfitIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_OutfitIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_OutfitMaterialIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_OutfitMaterialIndex = { "OutfitMaterialIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms, OutfitMaterialIndex), METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_OutfitMaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_OutfitMaterialIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_HairIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_HairIndex = { "HairIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms, HairIndex), METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_HairIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_HairIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_HairColorIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_HairColorIndex = { "HairColorIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms, HairColorIndex), METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_HairColorIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_HairColorIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_AccessoryIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_AccessoryIndex = { "AccessoryIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms, AccessoryIndex), METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_AccessoryIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_AccessoryIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_SkinTextureIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_SkinTextureIndex = { "SkinTextureIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms, SkinTextureIndex), METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_SkinTextureIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_SkinTextureIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_SkinTextureModifierIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_SkinTextureModifierIndex = { "SkinTextureModifierIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms, SkinTextureModifierIndex), METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_SkinTextureModifierIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_SkinTextureModifierIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_ScaleFactorIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_ScaleFactorIndex = { "ScaleFactorIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms, ScaleFactorIndex), METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_ScaleFactorIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_ScaleFactorIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms, ReturnValue), Z_Construct_UScriptStruct_FCrowdCharacterDefinition, METADATA_PARAMS(nullptr, 0) }; // 2676628175
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_Skeleton_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_BodyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_BodyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_HeadIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_OutfitIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_OutfitMaterialIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_HairIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_HairColorIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_AccessoryIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_SkinTextureIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_SkinTextureModifierIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_ScaleFactorIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Returns Character Definition from given indices */" },
		{ "ModuleRelativePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "ToolTip", "Returns Character Definition from given indices" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "GetCharacterDefinition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::CrowdCharacterDataAsset_eventGetCharacterDefinition_Parms), Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics
	{
		struct CrowdCharacterDataAsset_eventGetCharacterDefinitionFromIndex_Parms
		{
			int32 GlobalIndex;
			FCrowdCharacterDefinition ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::NewProp_GlobalIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::NewProp_GlobalIndex = { "GlobalIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinitionFromIndex_Parms, GlobalIndex), METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::NewProp_GlobalIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::NewProp_GlobalIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CrowdCharacterDataAsset_eventGetCharacterDefinitionFromIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FCrowdCharacterDefinition, METADATA_PARAMS(nullptr, 0) }; // 2676628175
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::NewProp_GlobalIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Returns Definition Indices from a Global Index */" },
		{ "ModuleRelativePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "ToolTip", "Returns Definition Indices from a Global Index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdCharacterDataAsset, nullptr, "GetCharacterDefinitionFromIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::CrowdCharacterDataAsset_eventGetCharacterDefinitionFromIndex_Parms), Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCrowdCharacterDataAsset);
	UClass* Z_Construct_UClass_UCrowdCharacterDataAsset_NoRegister()
	{
		return UCrowdCharacterDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UCrowdCharacterDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletonA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletonB;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HairColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HairColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumLODs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForcedLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ForcedLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingMinLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RayTracingMinLOD;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentsToSync_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentsToSync_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentsToSync;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomLODMapping_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomLODMapping_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomLODMapping_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CustomLODMapping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindAccesoryMeshes, "FindAccesoryMeshes" }, // 1998544469
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBaseSkeletalMeshes, "FindBaseSkeletalMeshes" }, // 2068061766
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodyDataAssets, "FindBodyDataAssets" }, // 3783169903
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindBodySkeletalMeshes, "FindBodySkeletalMeshes" }, // 424469102
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindDataAssets, "FindDataAssets" }, // 292324799
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGroomMeshes, "FindGroomMeshes" }, // 569841533
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindGrooms, "FindGrooms" }, // 2544614349
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadDataAssets, "FindHeadDataAssets" }, // 483495026
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindHeadSkeletalMeshes, "FindHeadSkeletalMeshes" }, // 2746198341
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitDataAssets, "FindOutfitDataAssets" }, // 1225042496
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindOutfitSkeletalMeshes, "FindOutfitSkeletalMeshes" }, // 3663692972
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_FindSkeletalMeshes, "FindSkeletalMeshes" }, // 1482548340
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinition, "GetCharacterDefinition" }, // 3658713605
		{ &Z_Construct_UFunction_UCrowdCharacterDataAsset_GetCharacterDefinitionFromIndex, "GetCharacterDefinitionFromIndex" }, // 1501613202
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n [Data Structure]\n\n- Male (GenderDefinition)\n\x09- NormalWeight (BodyOutfitDefinition)\n\x09\x09- Body (BodyDefinition)\n\x09\x09\x09- Body (SkeletalMesh*)\n\x09\x09\x09- Base (SkeletalMesh*)\n\x09\x09- Outfits (TArray<OutfitDefinition>)\n\x09\x09\x09- Top (SkeletalMesh*)\n\x09\x09\x09- Bottom (SkeletalMesh*)\n\x09\x09\x09- Shoes (SkeletalMesh*)\n\x09\x09- ScaleFactors (TArray<float>)\n\x09- OverWeight\n\x09- UnderWeight\n\x09- Heads (TArray<SkeletalMesh*>)\n\x09- Hairs (TArray<HairDefinition>)\n\x09- Accessories (TArray<AccessoryDefinition>)\n\x09- Textures (TArray<UTexture2D*>)\n\n- Female (GenderDefinition)\n\x09- \n\n*/" },
		{ "IncludePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "ToolTip", "[Data Structure]\n\n- Male (GenderDefinition)\n      - NormalWeight (BodyOutfitDefinition)\n              - Body (BodyDefinition)\n                      - Body (SkeletalMesh*)\n                      - Base (SkeletalMesh*)\n              - Outfits (TArray<OutfitDefinition>)\n                      - Top (SkeletalMesh*)\n                      - Bottom (SkeletalMesh*)\n                      - Shoes (SkeletalMesh*)\n              - ScaleFactors (TArray<float>)\n      - OverWeight\n      - UnderWeight\n      - Heads (TArray<SkeletalMesh*>)\n      - Hairs (TArray<HairDefinition>)\n      - Accessories (TArray<AccessoryDefinition>)\n      - Textures (TArray<UTexture2D*>)\n\n- Female (GenderDefinition)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_SkeletonA_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "CrowdCharacterDataAsset" },
		{ "Comment", "/* Male BodyTypes, Outift & Hair Definition */" },
		{ "ModuleRelativePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "ToolTip", "Male BodyTypes, Outift & Hair Definition" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_SkeletonA = { "SkeletonA", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCrowdCharacterDataAsset, SkeletonA), Z_Construct_UScriptStruct_FCrowdGenderDefinition, METADATA_PARAMS(Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_SkeletonA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_SkeletonA_MetaData)) }; // 965087484
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_SkeletonB_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "CrowdCharacterDataAsset" },
		{ "Comment", "/* Female BodyTypes, Outift & Hair Definition */" },
		{ "ModuleRelativePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "ToolTip", "Female BodyTypes, Outift & Hair Definition" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_SkeletonB = { "SkeletonB", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCrowdCharacterDataAsset, SkeletonB), Z_Construct_UScriptStruct_FCrowdGenderDefinition, METADATA_PARAMS(Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_SkeletonB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_SkeletonB_MetaData)) }; // 965087484
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_HairColors_Inner = { "HairColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCrowdHairColorDefinition, METADATA_PARAMS(nullptr, 0) }; // 1333946040
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_HairColors_MetaData[] = {
		{ "Category", "CrowdCharacterDataAsset" },
		{ "Comment", "/* Array of Hair Color Definitions */" },
		{ "ModuleRelativePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "ToolTip", "Array of Hair Color Definitions" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_HairColors = { "HairColors", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCrowdCharacterDataAsset, HairColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_HairColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_HairColors_MetaData)) }; // 1333946040
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_NumLODs_MetaData[] = {
		{ "Category", "LOD Sync" },
		{ "Comment", "// if -1, it's default and it will calculate the max number of LODs from all sub components\n// if not, it is a number of LODs (not the max index of LODs)\n" },
		{ "ModuleRelativePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "ToolTip", "if -1, it's default and it will calculate the max number of LODs from all sub components\nif not, it is a number of LODs (not the max index of LODs)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_NumLODs = { "NumLODs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCrowdCharacterDataAsset, NumLODs), METADATA_PARAMS(Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_NumLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_NumLODs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_ForcedLOD_MetaData[] = {
		{ "Category", "LOD Sync" },
		{ "Comment", "// if -1, it's automatically switching\n" },
		{ "ModuleRelativePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "ToolTip", "if -1, it's automatically switching" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_ForcedLOD = { "ForcedLOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCrowdCharacterDataAsset, ForcedLOD), METADATA_PARAMS(Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_ForcedLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_ForcedLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_RayTracingMinLOD_MetaData[] = {
		{ "Category", "LOD Sync" },
		{ "Comment", "// Optionnally override the min. ray tracing LOD set on the skeleton mesh. Default: -1, use the skeleton mesh value\n" },
		{ "ModuleRelativePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "ToolTip", "Optionnally override the min. ray tracing LOD set on the skeleton mesh. Default: -1, use the skeleton mesh value" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_RayTracingMinLOD = { "RayTracingMinLOD", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCrowdCharacterDataAsset, RayTracingMinLOD), METADATA_PARAMS(Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_RayTracingMinLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_RayTracingMinLOD_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_ComponentsToSync_Inner = { "ComponentsToSync", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCitySampleComponentSync, METADATA_PARAMS(nullptr, 0) }; // 1254482149
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_ComponentsToSync_MetaData[] = {
		{ "Category", "LOD Sync" },
		{ "Comment", "/** \n\x09*\x09""Array of components whose LOD may drive or be driven by this component.\n\x09*  Components that are flagged as 'Drive' are treated as being in priority order, with the last component having highest priority. The highest priority\n\x09*  visible component will set the LOD for all other components. If no components are visible, then the highest priority non-visible component will set LOD.\n\x09*/" },
		{ "ModuleRelativePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "ToolTip", "Array of components whose LOD may drive or be driven by this component.\nComponents that are flagged as 'Drive' are treated as being in priority order, with the last component having highest priority. The highest priority\nvisible component will set the LOD for all other components. If no components are visible, then the highest priority non-visible component will set LOD." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_ComponentsToSync = { "ComponentsToSync", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCrowdCharacterDataAsset, ComponentsToSync), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_ComponentsToSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_ComponentsToSync_MetaData)) }; // 1254482149
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_CustomLODMapping_ValueProp = { "CustomLODMapping", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FLODMappingData, METADATA_PARAMS(nullptr, 0) }; // 1756294627
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_CustomLODMapping_Key_KeyProp = { "CustomLODMapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCitySampleCharacterComponentIdentifier, METADATA_PARAMS(nullptr, 0) }; // 372397131
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_CustomLODMapping_MetaData[] = {
		{ "Category", "LOD Sync" },
		{ "Comment", "// by default, the mapping will be one to one\n// but if you want custom, add here. \n" },
		{ "ModuleRelativePath", "Crowd/CrowdCharacterDataAsset.h" },
		{ "ToolTip", "by default, the mapping will be one to one\nbut if you want custom, add here." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_CustomLODMapping = { "CustomLODMapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCrowdCharacterDataAsset, CustomLODMapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_CustomLODMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_CustomLODMapping_MetaData)) }; // 372397131 1756294627
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_SkeletonA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_SkeletonB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_HairColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_HairColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_NumLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_ForcedLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_RayTracingMinLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_ComponentsToSync_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_ComponentsToSync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_CustomLODMapping_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_CustomLODMapping_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::NewProp_CustomLODMapping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrowdCharacterDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::ClassParams = {
		&UCrowdCharacterDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrowdCharacterDataAsset()
	{
		if (!Z_Registration_Info_UClass_UCrowdCharacterDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrowdCharacterDataAsset.OuterSingleton, Z_Construct_UClass_UCrowdCharacterDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCrowdCharacterDataAsset.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCrowdCharacterDataAsset>()
	{
		return UCrowdCharacterDataAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrowdCharacterDataAsset);
	UCrowdCharacterDataAsset::~UCrowdCharacterDataAsset() {}
	struct Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCrowdCharacterDataAsset, UCrowdCharacterDataAsset::StaticClass, TEXT("UCrowdCharacterDataAsset"), &Z_Registration_Info_UClass_UCrowdCharacterDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrowdCharacterDataAsset), 1598593762U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterDataAsset_h_3483438116(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
