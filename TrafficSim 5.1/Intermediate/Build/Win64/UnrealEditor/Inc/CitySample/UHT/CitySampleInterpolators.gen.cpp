// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Util/CitySampleInterpolators.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleInterpolators() {}
// Cross Module References
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FAccelerationInterpolatorParams();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FAccelerationInterpolatorVector();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorFloat();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorRotator();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorVector();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IIRInterpolatorVector;
class UScriptStruct* FIIRInterpolatorVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IIRInterpolatorVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IIRInterpolatorVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIIRInterpolatorVector, Z_Construct_UPackage__Script_CitySample(), TEXT("IIRInterpolatorVector"));
	}
	return Z_Registration_Info_UScriptStruct_IIRInterpolatorVector.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FIIRInterpolatorVector>()
{
	return FIIRInterpolatorVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Blueprint-accessible wrappers for the templated interpolators, for use as FProperties\n */" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
		{ "ToolTip", "Blueprint-accessible wrappers for the templated interpolators, for use as FProperties" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIIRInterpolatorVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "IIRInterpolatorVector" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIIRInterpolatorVector, InterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::NewProp_InterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::NewProp_InterpSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::NewProp_InterpSpeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"IIRInterpolatorVector",
		sizeof(FIIRInterpolatorVector),
		alignof(FIIRInterpolatorVector),
		Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorVector()
	{
		if (!Z_Registration_Info_UScriptStruct_IIRInterpolatorVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IIRInterpolatorVector.InnerSingleton, Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IIRInterpolatorVector.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorVector;
class UScriptStruct* FDoubleIIRInterpolatorVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector, Z_Construct_UPackage__Script_CitySample(), TEXT("DoubleIIRInterpolatorVector"));
	}
	return Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorVector.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FDoubleIIRInterpolatorVector>()
{
	return FDoubleIIRInterpolatorVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PrimaryInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntermediateInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IntermediateInterpSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoubleIIRInterpolatorVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::NewProp_PrimaryInterpSpeed_MetaData[] = {
		{ "Category", "DoubleIIRInterpolatorVector" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::NewProp_PrimaryInterpSpeed = { "PrimaryInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDoubleIIRInterpolatorVector, PrimaryInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::NewProp_PrimaryInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::NewProp_PrimaryInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::NewProp_IntermediateInterpSpeed_MetaData[] = {
		{ "Category", "DoubleIIRInterpolatorVector" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::NewProp_IntermediateInterpSpeed = { "IntermediateInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDoubleIIRInterpolatorVector, IntermediateInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::NewProp_IntermediateInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::NewProp_IntermediateInterpSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::NewProp_PrimaryInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::NewProp_IntermediateInterpSpeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"DoubleIIRInterpolatorVector",
		sizeof(FDoubleIIRInterpolatorVector),
		alignof(FDoubleIIRInterpolatorVector),
		Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector()
	{
		if (!Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorVector.InnerSingleton, Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorVector.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IIRInterpolatorRotator;
class UScriptStruct* FIIRInterpolatorRotator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IIRInterpolatorRotator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IIRInterpolatorRotator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIIRInterpolatorRotator, Z_Construct_UPackage__Script_CitySample(), TEXT("IIRInterpolatorRotator"));
	}
	return Z_Registration_Info_UScriptStruct_IIRInterpolatorRotator.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FIIRInterpolatorRotator>()
{
	return FIIRInterpolatorRotator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIIRInterpolatorRotator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "IIRInterpolatorRotator" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIIRInterpolatorRotator, InterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::NewProp_InterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::NewProp_InterpSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::NewProp_InterpSpeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"IIRInterpolatorRotator",
		sizeof(FIIRInterpolatorRotator),
		alignof(FIIRInterpolatorRotator),
		Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorRotator()
	{
		if (!Z_Registration_Info_UScriptStruct_IIRInterpolatorRotator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IIRInterpolatorRotator.InnerSingleton, Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IIRInterpolatorRotator.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorRotator;
class UScriptStruct* FDoubleIIRInterpolatorRotator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorRotator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorRotator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator, Z_Construct_UPackage__Script_CitySample(), TEXT("DoubleIIRInterpolatorRotator"));
	}
	return Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorRotator.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FDoubleIIRInterpolatorRotator>()
{
	return FDoubleIIRInterpolatorRotator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PrimaryInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntermediateInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IntermediateInterpSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoubleIIRInterpolatorRotator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::NewProp_PrimaryInterpSpeed_MetaData[] = {
		{ "Category", "DoubleIIRInterpolatorRotator" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::NewProp_PrimaryInterpSpeed = { "PrimaryInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDoubleIIRInterpolatorRotator, PrimaryInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::NewProp_PrimaryInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::NewProp_PrimaryInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::NewProp_IntermediateInterpSpeed_MetaData[] = {
		{ "Category", "DoubleIIRInterpolatorRotator" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::NewProp_IntermediateInterpSpeed = { "IntermediateInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDoubleIIRInterpolatorRotator, IntermediateInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::NewProp_IntermediateInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::NewProp_IntermediateInterpSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::NewProp_PrimaryInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::NewProp_IntermediateInterpSpeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"DoubleIIRInterpolatorRotator",
		sizeof(FDoubleIIRInterpolatorRotator),
		alignof(FDoubleIIRInterpolatorRotator),
		Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator()
	{
		if (!Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorRotator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorRotator.InnerSingleton, Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorRotator.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IIRInterpolatorFloat;
class UScriptStruct* FIIRInterpolatorFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IIRInterpolatorFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IIRInterpolatorFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIIRInterpolatorFloat, Z_Construct_UPackage__Script_CitySample(), TEXT("IIRInterpolatorFloat"));
	}
	return Z_Registration_Info_UScriptStruct_IIRInterpolatorFloat.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FIIRInterpolatorFloat>()
{
	return FIIRInterpolatorFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIIRInterpolatorFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "IIRInterpolatorFloat" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIIRInterpolatorFloat, InterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::NewProp_InterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::NewProp_InterpSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::NewProp_InterpSpeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"IIRInterpolatorFloat",
		sizeof(FIIRInterpolatorFloat),
		alignof(FIIRInterpolatorFloat),
		Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_IIRInterpolatorFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IIRInterpolatorFloat.InnerSingleton, Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IIRInterpolatorFloat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorFloat;
class UScriptStruct* FDoubleIIRInterpolatorFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat, Z_Construct_UPackage__Script_CitySample(), TEXT("DoubleIIRInterpolatorFloat"));
	}
	return Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorFloat.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FDoubleIIRInterpolatorFloat>()
{
	return FDoubleIIRInterpolatorFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PrimaryInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntermediateInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IntermediateInterpSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoubleIIRInterpolatorFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::NewProp_PrimaryInterpSpeed_MetaData[] = {
		{ "Category", "DoubleIIRInterpolatorFloat" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::NewProp_PrimaryInterpSpeed = { "PrimaryInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDoubleIIRInterpolatorFloat, PrimaryInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::NewProp_PrimaryInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::NewProp_PrimaryInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::NewProp_IntermediateInterpSpeed_MetaData[] = {
		{ "Category", "DoubleIIRInterpolatorFloat" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::NewProp_IntermediateInterpSpeed = { "IntermediateInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDoubleIIRInterpolatorFloat, IntermediateInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::NewProp_IntermediateInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::NewProp_IntermediateInterpSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::NewProp_PrimaryInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::NewProp_IntermediateInterpSpeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"DoubleIIRInterpolatorFloat",
		sizeof(FDoubleIIRInterpolatorFloat),
		alignof(FDoubleIIRInterpolatorFloat),
		Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorFloat.InnerSingleton, Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorFloat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelerationInterpolatorParams;
class UScriptStruct* FAccelerationInterpolatorParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelerationInterpolatorParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelerationInterpolatorParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelerationInterpolatorParams, Z_Construct_UPackage__Script_CitySample(), TEXT("AccelerationInterpolatorParams"));
	}
	return Z_Registration_Info_UScriptStruct_AccelerationInterpolatorParams.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FAccelerationInterpolatorParams>()
{
	return FAccelerationInterpolatorParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDeceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDeceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelerationInterpolatorParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "AccelerationInterpolatorParams" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAccelerationInterpolatorParams, Acceleration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::NewProp_Acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::NewProp_MinDeceleration_MetaData[] = {
		{ "Category", "AccelerationInterpolatorParams" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::NewProp_MinDeceleration = { "MinDeceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAccelerationInterpolatorParams, MinDeceleration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::NewProp_MinDeceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::NewProp_MinDeceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "AccelerationInterpolatorParams" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAccelerationInterpolatorParams, MaxSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::NewProp_MaxSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::NewProp_Acceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::NewProp_MinDeceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::NewProp_MaxSpeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"AccelerationInterpolatorParams",
		sizeof(FAccelerationInterpolatorParams),
		alignof(FAccelerationInterpolatorParams),
		Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelerationInterpolatorParams()
	{
		if (!Z_Registration_Info_UScriptStruct_AccelerationInterpolatorParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelerationInterpolatorParams.InnerSingleton, Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AccelerationInterpolatorParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelerationInterpolatorFloat;
class UScriptStruct* FAccelerationInterpolatorFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelerationInterpolatorFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelerationInterpolatorFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat, Z_Construct_UPackage__Script_CitySample(), TEXT("AccelerationInterpolatorFloat"));
	}
	return Z_Registration_Info_UScriptStruct_AccelerationInterpolatorFloat.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FAccelerationInterpolatorFloat>()
{
	return FAccelerationInterpolatorFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccelerationParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelerationInterpolatorFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::NewProp_AccelerationParams_MetaData[] = {
		{ "Category", "AccelerationInterpolator" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::NewProp_AccelerationParams = { "AccelerationParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAccelerationInterpolatorFloat, AccelerationParams), Z_Construct_UScriptStruct_FAccelerationInterpolatorParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::NewProp_AccelerationParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::NewProp_AccelerationParams_MetaData)) }; // 2795501363
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::NewProp_AccelerationParams,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"AccelerationInterpolatorFloat",
		sizeof(FAccelerationInterpolatorFloat),
		alignof(FAccelerationInterpolatorFloat),
		Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_AccelerationInterpolatorFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelerationInterpolatorFloat.InnerSingleton, Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AccelerationInterpolatorFloat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelerationInterpolatorVector;
class UScriptStruct* FAccelerationInterpolatorVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelerationInterpolatorVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelerationInterpolatorVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelerationInterpolatorVector, Z_Construct_UPackage__Script_CitySample(), TEXT("AccelerationInterpolatorVector"));
	}
	return Z_Registration_Info_UScriptStruct_AccelerationInterpolatorVector.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FAccelerationInterpolatorVector>()
{
	return FAccelerationInterpolatorVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccelerationParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelerationInterpolatorVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::NewProp_AccelerationParams_MetaData[] = {
		{ "Category", "AccelerationInterpolator" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::NewProp_AccelerationParams = { "AccelerationParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAccelerationInterpolatorVector, AccelerationParams), Z_Construct_UScriptStruct_FAccelerationInterpolatorParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::NewProp_AccelerationParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::NewProp_AccelerationParams_MetaData)) }; // 2795501363
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::NewProp_AccelerationParams,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"AccelerationInterpolatorVector",
		sizeof(FAccelerationInterpolatorVector),
		alignof(FAccelerationInterpolatorVector),
		Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelerationInterpolatorVector()
	{
		if (!Z_Registration_Info_UScriptStruct_AccelerationInterpolatorVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelerationInterpolatorVector.InnerSingleton, Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AccelerationInterpolatorVector.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelerationInterpolatorRotator;
class UScriptStruct* FAccelerationInterpolatorRotator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelerationInterpolatorRotator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelerationInterpolatorRotator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator, Z_Construct_UPackage__Script_CitySample(), TEXT("AccelerationInterpolatorRotator"));
	}
	return Z_Registration_Info_UScriptStruct_AccelerationInterpolatorRotator.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FAccelerationInterpolatorRotator>()
{
	return FAccelerationInterpolatorRotator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccelerationParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelerationInterpolatorRotator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::NewProp_AccelerationParams_MetaData[] = {
		{ "Category", "AccelerationInterpolator" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::NewProp_AccelerationParams = { "AccelerationParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAccelerationInterpolatorRotator, AccelerationParams), Z_Construct_UScriptStruct_FAccelerationInterpolatorParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::NewProp_AccelerationParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::NewProp_AccelerationParams_MetaData)) }; // 2795501363
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::NewProp_AccelerationParams,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"AccelerationInterpolatorRotator",
		sizeof(FAccelerationInterpolatorRotator),
		alignof(FAccelerationInterpolatorRotator),
		Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator()
	{
		if (!Z_Registration_Info_UScriptStruct_AccelerationInterpolatorRotator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelerationInterpolatorRotator.InnerSingleton, Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AccelerationInterpolatorRotator.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorVector;
class UScriptStruct* FCritDampSpringInterpolatorVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector, Z_Construct_UPackage__Script_CitySample(), TEXT("CritDampSpringInterpolatorVector"));
	}
	return Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorVector.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCritDampSpringInterpolatorVector>()
{
	return FCritDampSpringInterpolatorVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NaturalFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NaturalFrequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UStruct wrapper for critically damped spring vector interpolator */" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
		{ "ToolTip", "UStruct wrapper for critically damped spring vector interpolator" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCritDampSpringInterpolatorVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::NewProp_NaturalFrequency_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** Higher = a stiffer spring */" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
		{ "ToolTip", "Higher = a stiffer spring" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::NewProp_NaturalFrequency = { "NaturalFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCritDampSpringInterpolatorVector, NaturalFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::NewProp_NaturalFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::NewProp_NaturalFrequency_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::NewProp_NaturalFrequency,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"CritDampSpringInterpolatorVector",
		sizeof(FCritDampSpringInterpolatorVector),
		alignof(FCritDampSpringInterpolatorVector),
		Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector()
	{
		if (!Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorVector.InnerSingleton, Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorVector.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorRotator;
class UScriptStruct* FCritDampSpringInterpolatorRotator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorRotator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorRotator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator, Z_Construct_UPackage__Script_CitySample(), TEXT("CritDampSpringInterpolatorRotator"));
	}
	return Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorRotator.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCritDampSpringInterpolatorRotator>()
{
	return FCritDampSpringInterpolatorRotator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NaturalFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NaturalFrequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UStruct wrapper for critically damped spring rotator interpolator */" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
		{ "ToolTip", "UStruct wrapper for critically damped spring rotator interpolator" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCritDampSpringInterpolatorRotator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::NewProp_NaturalFrequency_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** Higher = a stiffer spring */" },
		{ "ModuleRelativePath", "Util/CitySampleInterpolators.h" },
		{ "ToolTip", "Higher = a stiffer spring" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::NewProp_NaturalFrequency = { "NaturalFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCritDampSpringInterpolatorRotator, NaturalFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::NewProp_NaturalFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::NewProp_NaturalFrequency_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::NewProp_NaturalFrequency,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"CritDampSpringInterpolatorRotator",
		sizeof(FCritDampSpringInterpolatorRotator),
		alignof(FCritDampSpringInterpolatorRotator),
		Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator()
	{
		if (!Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorRotator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorRotator.InnerSingleton, Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorRotator.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Util_CitySampleInterpolators_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Util_CitySampleInterpolators_h_Statics::ScriptStructInfo[] = {
		{ FIIRInterpolatorVector::StaticStruct, Z_Construct_UScriptStruct_FIIRInterpolatorVector_Statics::NewStructOps, TEXT("IIRInterpolatorVector"), &Z_Registration_Info_UScriptStruct_IIRInterpolatorVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIIRInterpolatorVector), 4156365342U) },
		{ FDoubleIIRInterpolatorVector::StaticStruct, Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector_Statics::NewStructOps, TEXT("DoubleIIRInterpolatorVector"), &Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDoubleIIRInterpolatorVector), 145096914U) },
		{ FIIRInterpolatorRotator::StaticStruct, Z_Construct_UScriptStruct_FIIRInterpolatorRotator_Statics::NewStructOps, TEXT("IIRInterpolatorRotator"), &Z_Registration_Info_UScriptStruct_IIRInterpolatorRotator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIIRInterpolatorRotator), 2968566194U) },
		{ FDoubleIIRInterpolatorRotator::StaticStruct, Z_Construct_UScriptStruct_FDoubleIIRInterpolatorRotator_Statics::NewStructOps, TEXT("DoubleIIRInterpolatorRotator"), &Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorRotator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDoubleIIRInterpolatorRotator), 2621786273U) },
		{ FIIRInterpolatorFloat::StaticStruct, Z_Construct_UScriptStruct_FIIRInterpolatorFloat_Statics::NewStructOps, TEXT("IIRInterpolatorFloat"), &Z_Registration_Info_UScriptStruct_IIRInterpolatorFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIIRInterpolatorFloat), 3579112660U) },
		{ FDoubleIIRInterpolatorFloat::StaticStruct, Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat_Statics::NewStructOps, TEXT("DoubleIIRInterpolatorFloat"), &Z_Registration_Info_UScriptStruct_DoubleIIRInterpolatorFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDoubleIIRInterpolatorFloat), 2755721650U) },
		{ FAccelerationInterpolatorParams::StaticStruct, Z_Construct_UScriptStruct_FAccelerationInterpolatorParams_Statics::NewStructOps, TEXT("AccelerationInterpolatorParams"), &Z_Registration_Info_UScriptStruct_AccelerationInterpolatorParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelerationInterpolatorParams), 2795501363U) },
		{ FAccelerationInterpolatorFloat::StaticStruct, Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat_Statics::NewStructOps, TEXT("AccelerationInterpolatorFloat"), &Z_Registration_Info_UScriptStruct_AccelerationInterpolatorFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelerationInterpolatorFloat), 171372712U) },
		{ FAccelerationInterpolatorVector::StaticStruct, Z_Construct_UScriptStruct_FAccelerationInterpolatorVector_Statics::NewStructOps, TEXT("AccelerationInterpolatorVector"), &Z_Registration_Info_UScriptStruct_AccelerationInterpolatorVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelerationInterpolatorVector), 4167640084U) },
		{ FAccelerationInterpolatorRotator::StaticStruct, Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator_Statics::NewStructOps, TEXT("AccelerationInterpolatorRotator"), &Z_Registration_Info_UScriptStruct_AccelerationInterpolatorRotator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelerationInterpolatorRotator), 1051981463U) },
		{ FCritDampSpringInterpolatorVector::StaticStruct, Z_Construct_UScriptStruct_FCritDampSpringInterpolatorVector_Statics::NewStructOps, TEXT("CritDampSpringInterpolatorVector"), &Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCritDampSpringInterpolatorVector), 2777370539U) },
		{ FCritDampSpringInterpolatorRotator::StaticStruct, Z_Construct_UScriptStruct_FCritDampSpringInterpolatorRotator_Statics::NewStructOps, TEXT("CritDampSpringInterpolatorRotator"), &Z_Registration_Info_UScriptStruct_CritDampSpringInterpolatorRotator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCritDampSpringInterpolatorRotator), 1903125885U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Util_CitySampleInterpolators_h_467577913(TEXT("/Script/CitySample"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Util_CitySampleInterpolators_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Util_CitySampleInterpolators_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
