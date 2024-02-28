// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/UI/CitySampleOptionSelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleOptionSelector() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleButtonPrompt();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleOptionSelector();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleOptionSelector_NoRegister();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorNumericType();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorType();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECitySampleOptionSelectorType;
	static UEnum* ECitySampleOptionSelectorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECitySampleOptionSelectorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECitySampleOptionSelectorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorType, Z_Construct_UPackage__Script_CitySample(), TEXT("ECitySampleOptionSelectorType"));
		}
		return Z_Registration_Info_UEnum_ECitySampleOptionSelectorType.OuterSingleton;
	}
	template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySampleOptionSelectorType>()
	{
		return ECitySampleOptionSelectorType_StaticEnum();
	}
	struct Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorType_Statics::Enumerators[] = {
		{ "ECitySampleOptionSelectorType::Boolean", (int64)ECitySampleOptionSelectorType::Boolean },
		{ "ECitySampleOptionSelectorType::Numeric", (int64)ECitySampleOptionSelectorType::Numeric },
		{ "ECitySampleOptionSelectorType::Custom", (int64)ECitySampleOptionSelectorType::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Boolean.Name", "ECitySampleOptionSelectorType::Boolean" },
		{ "Custom.Name", "ECitySampleOptionSelectorType::Custom" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "Numeric.Name", "ECitySampleOptionSelectorType::Numeric" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		"ECitySampleOptionSelectorType",
		"ECitySampleOptionSelectorType",
		Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorType()
	{
		if (!Z_Registration_Info_UEnum_ECitySampleOptionSelectorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECitySampleOptionSelectorType.InnerSingleton, Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECitySampleOptionSelectorType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECitySampleOptionSelectorNumericType;
	static UEnum* ECitySampleOptionSelectorNumericType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECitySampleOptionSelectorNumericType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECitySampleOptionSelectorNumericType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorNumericType, Z_Construct_UPackage__Script_CitySample(), TEXT("ECitySampleOptionSelectorNumericType"));
		}
		return Z_Registration_Info_UEnum_ECitySampleOptionSelectorNumericType.OuterSingleton;
	}
	template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySampleOptionSelectorNumericType>()
	{
		return ECitySampleOptionSelectorNumericType_StaticEnum();
	}
	struct Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorNumericType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorNumericType_Statics::Enumerators[] = {
		{ "ECitySampleOptionSelectorNumericType::Float", (int64)ECitySampleOptionSelectorNumericType::Float },
		{ "ECitySampleOptionSelectorNumericType::Percent", (int64)ECitySampleOptionSelectorNumericType::Percent },
		{ "ECitySampleOptionSelectorNumericType::Integer", (int64)ECitySampleOptionSelectorNumericType::Integer },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorNumericType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Float.Name", "ECitySampleOptionSelectorNumericType::Float" },
		{ "Integer.Name", "ECitySampleOptionSelectorNumericType::Integer" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "Percent.Name", "ECitySampleOptionSelectorNumericType::Percent" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorNumericType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		"ECitySampleOptionSelectorNumericType",
		"ECitySampleOptionSelectorNumericType",
		Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorNumericType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorNumericType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorNumericType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorNumericType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorNumericType()
	{
		if (!Z_Registration_Info_UEnum_ECitySampleOptionSelectorNumericType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECitySampleOptionSelectorNumericType.InnerSingleton, Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorNumericType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECitySampleOptionSelectorNumericType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleOptionsNumericRangeCustomization;
class UScriptStruct* FCitySampleOptionsNumericRangeCustomization::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleOptionsNumericRangeCustomization.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleOptionsNumericRangeCustomization.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization, Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleOptionsNumericRangeCustomization"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleOptionsNumericRangeCustomization.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleOptionsNumericRangeCustomization>()
{
	return FCitySampleOptionsNumericRangeCustomization::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ValueRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scaling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Prefix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Suffix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleOptionsNumericRangeCustomization>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::NewProp_ValueRange_MetaData[] = {
		{ "Category", "CitySampleOptionsNumericRangeCustomization" },
		{ "Comment", "/** Value range in which the scaling should be applied. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Value range in which the scaling should be applied." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::NewProp_ValueRange = { "ValueRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCitySampleOptionsNumericRangeCustomization, ValueRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::NewProp_ValueRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::NewProp_ValueRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::NewProp_Scaling_MetaData[] = {
		{ "Category", "CitySampleOptionsNumericRangeCustomization" },
		{ "ClampMin", "0.00001" },
		{ "Comment", "/** Additional scaling applied to the range when generating the default value label. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Additional scaling applied to the range when generating the default value label." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::NewProp_Scaling = { "Scaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCitySampleOptionsNumericRangeCustomization, Scaling), METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::NewProp_Scaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::NewProp_Scaling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::NewProp_Prefix_MetaData[] = {
		{ "Category", "CitySampleOptionsNumericRangeCustomization" },
		{ "Comment", "/** String that will be appended to the front of the value label. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "String that will be appended to the front of the value label." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCitySampleOptionsNumericRangeCustomization, Prefix), METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::NewProp_Prefix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::NewProp_Suffix_MetaData[] = {
		{ "Category", "CitySampleOptionsNumericRangeCustomization" },
		{ "Comment", "/** String that will be appended to the back of the value label. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "String that will be appended to the back of the value label." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCitySampleOptionsNumericRangeCustomization, Suffix), METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::NewProp_Suffix_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::NewProp_ValueRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::NewProp_Scaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::NewProp_Prefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::NewProp_Suffix,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"CitySampleOptionsNumericRangeCustomization",
		sizeof(FCitySampleOptionsNumericRangeCustomization),
		alignof(FCitySampleOptionsNumericRangeCustomization),
		Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization()
	{
		if (!Z_Registration_Info_UScriptStruct_CitySampleOptionsNumericRangeCustomization.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleOptionsNumericRangeCustomization.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CitySampleOptionsNumericRangeCustomization.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics
	{
		struct _Script_CitySample_eventCitySampleOptionSelectorOnValueChanged_Parms
		{
			const UCitySampleOptionSelector* OptionSelector;
			int32 Index;
			FText ValueLabel;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionSelector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionSelector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueLabel_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ValueLabel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics::NewProp_OptionSelector_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics::NewProp_OptionSelector = { "OptionSelector", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CitySample_eventCitySampleOptionSelectorOnValueChanged_Parms, OptionSelector), Z_Construct_UClass_UCitySampleOptionSelector_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics::NewProp_OptionSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics::NewProp_OptionSelector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CitySample_eventCitySampleOptionSelectorOnValueChanged_Parms, Index), METADATA_PARAMS(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics::NewProp_ValueLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics::NewProp_ValueLabel = { "ValueLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CitySample_eventCitySampleOptionSelectorOnValueChanged_Parms, ValueLabel), METADATA_PARAMS(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics::NewProp_ValueLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics::NewProp_ValueLabel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics::NewProp_OptionSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics::NewProp_ValueLabel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "CitySampleOptionSelectorOnValueChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics::_Script_CitySample_eventCitySampleOptionSelectorOnValueChanged_Parms), Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics
	{
		struct _Script_CitySample_eventCitySampleOptionSelectorOnValueChangedBool_Parms
		{
			const UCitySampleOptionSelector* OptionSelector;
			bool bValue;
			FText ValueLabel;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionSelector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionSelector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[];
#endif
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueLabel_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ValueLabel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::NewProp_OptionSelector_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::NewProp_OptionSelector = { "OptionSelector", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CitySample_eventCitySampleOptionSelectorOnValueChangedBool_Parms, OptionSelector), Z_Construct_UClass_UCitySampleOptionSelector_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::NewProp_OptionSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::NewProp_OptionSelector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((_Script_CitySample_eventCitySampleOptionSelectorOnValueChangedBool_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_CitySample_eventCitySampleOptionSelectorOnValueChangedBool_Parms), &Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::NewProp_bValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::NewProp_ValueLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::NewProp_ValueLabel = { "ValueLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CitySample_eventCitySampleOptionSelectorOnValueChangedBool_Parms, ValueLabel), METADATA_PARAMS(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::NewProp_ValueLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::NewProp_ValueLabel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::NewProp_OptionSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::NewProp_bValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::NewProp_ValueLabel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "CitySampleOptionSelectorOnValueChangedBool__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::_Script_CitySample_eventCitySampleOptionSelectorOnValueChangedBool_Parms), Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics
	{
		struct _Script_CitySample_eventCitySampleOptionSelectorOnValueChangedNumeric_Parms
		{
			const UCitySampleOptionSelector* OptionSelector;
			float Value;
			FText ValueLabel;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionSelector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionSelector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueLabel_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ValueLabel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics::NewProp_OptionSelector_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics::NewProp_OptionSelector = { "OptionSelector", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CitySample_eventCitySampleOptionSelectorOnValueChangedNumeric_Parms, OptionSelector), Z_Construct_UClass_UCitySampleOptionSelector_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics::NewProp_OptionSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics::NewProp_OptionSelector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CitySample_eventCitySampleOptionSelectorOnValueChangedNumeric_Parms, Value), METADATA_PARAMS(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics::NewProp_ValueLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics::NewProp_ValueLabel = { "ValueLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CitySample_eventCitySampleOptionSelectorOnValueChangedNumeric_Parms, ValueLabel), METADATA_PARAMS(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics::NewProp_ValueLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics::NewProp_ValueLabel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics::NewProp_OptionSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics::NewProp_ValueLabel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics::_Script_CitySample_eventCitySampleOptionSelectorOnValueChangedNumeric_Parms), Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCitySampleOptionSelector::execGetCustomLabels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FText>*)Z_Param__Result=P_THIS->GetCustomLabels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionSelector::execGetValueLabel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetValueLabel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionSelector::execGetValueCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetValueCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionSelector::execIndexOfNumeric)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->IndexOfNumeric(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionSelector::execGetValueIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetValueIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionSelector::execGetValueNumeric)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetValueNumeric();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionSelector::execGetValueBool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueBool();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionSelector::execResetOptionSelector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetOptionSelector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionSelector::execDecrementValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_StepSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->DecrementValue(Z_Param_StepSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionSelector::execIncrementValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_StepSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->IncrementValue(Z_Param_StepSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionSelector::execSetValueNumeric)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetValueNumeric(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionSelector::execSetValueClamped)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetValueClamped(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionSelector::execSetValueChecked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetValueChecked(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionSelector::execSetValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetValue(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionSelector::execInitOptionSelectorCustom)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InitialIndexOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitOptionSelectorCustom(Z_Param_InitialIndexOverride);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionSelector::execInitOptionSelectorNumeric)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InitialValueOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitOptionSelectorNumeric(Z_Param_InitialValueOverride);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionSelector::execInitOptionSelectorBool)
	{
		P_GET_UBOOL(Z_Param_bInitialValueOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitOptionSelectorBool(Z_Param_bInitialValueOverride);
		P_NATIVE_END;
	}
	struct CitySampleOptionSelector_eventReceiveValueChanged_Parms
	{
		int32 Index;
		FText ValueLabel;
	};
	struct CitySampleOptionSelector_eventReceiveValueChangedBool_Parms
	{
		bool bValue;
		FText ValueLabel;
	};
	struct CitySampleOptionSelector_eventReceiveValueChangedCustom_Parms
	{
		int32 Index;
		FText ValueLabel;
	};
	struct CitySampleOptionSelector_eventReceiveValueChangedNumeric_Parms
	{
		float Value;
		FText ValueLabel;
	};
	static FName NAME_UCitySampleOptionSelector_ReceiveValueChanged = FName(TEXT("ReceiveValueChanged"));
	void UCitySampleOptionSelector::ReceiveValueChanged(const int32 Index, FText const& ValueLabel)
	{
		CitySampleOptionSelector_eventReceiveValueChanged_Parms Parms;
		Parms.Index=Index;
		Parms.ValueLabel=ValueLabel;
		ProcessEvent(FindFunctionChecked(NAME_UCitySampleOptionSelector_ReceiveValueChanged),&Parms);
	}
	static FName NAME_UCitySampleOptionSelector_ReceiveValueChangedBool = FName(TEXT("ReceiveValueChangedBool"));
	void UCitySampleOptionSelector::ReceiveValueChangedBool(bool bValue, FText const& ValueLabel)
	{
		CitySampleOptionSelector_eventReceiveValueChangedBool_Parms Parms;
		Parms.bValue=bValue ? true : false;
		Parms.ValueLabel=ValueLabel;
		ProcessEvent(FindFunctionChecked(NAME_UCitySampleOptionSelector_ReceiveValueChangedBool),&Parms);
	}
	static FName NAME_UCitySampleOptionSelector_ReceiveValueChangedCustom = FName(TEXT("ReceiveValueChangedCustom"));
	void UCitySampleOptionSelector::ReceiveValueChangedCustom(const int32 Index, FText const& ValueLabel)
	{
		CitySampleOptionSelector_eventReceiveValueChangedCustom_Parms Parms;
		Parms.Index=Index;
		Parms.ValueLabel=ValueLabel;
		ProcessEvent(FindFunctionChecked(NAME_UCitySampleOptionSelector_ReceiveValueChangedCustom),&Parms);
	}
	static FName NAME_UCitySampleOptionSelector_ReceiveValueChangedNumeric = FName(TEXT("ReceiveValueChangedNumeric"));
	void UCitySampleOptionSelector::ReceiveValueChangedNumeric(const float Value, FText const& ValueLabel)
	{
		CitySampleOptionSelector_eventReceiveValueChangedNumeric_Parms Parms;
		Parms.Value=Value;
		Parms.ValueLabel=ValueLabel;
		ProcessEvent(FindFunctionChecked(NAME_UCitySampleOptionSelector_ReceiveValueChangedNumeric),&Parms);
	}
	void UCitySampleOptionSelector::StaticRegisterNativesUCitySampleOptionSelector()
	{
		UClass* Class = UCitySampleOptionSelector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecrementValue", &UCitySampleOptionSelector::execDecrementValue },
			{ "GetCustomLabels", &UCitySampleOptionSelector::execGetCustomLabels },
			{ "GetValueBool", &UCitySampleOptionSelector::execGetValueBool },
			{ "GetValueCount", &UCitySampleOptionSelector::execGetValueCount },
			{ "GetValueIndex", &UCitySampleOptionSelector::execGetValueIndex },
			{ "GetValueLabel", &UCitySampleOptionSelector::execGetValueLabel },
			{ "GetValueNumeric", &UCitySampleOptionSelector::execGetValueNumeric },
			{ "IncrementValue", &UCitySampleOptionSelector::execIncrementValue },
			{ "IndexOfNumeric", &UCitySampleOptionSelector::execIndexOfNumeric },
			{ "InitOptionSelectorBool", &UCitySampleOptionSelector::execInitOptionSelectorBool },
			{ "InitOptionSelectorCustom", &UCitySampleOptionSelector::execInitOptionSelectorCustom },
			{ "InitOptionSelectorNumeric", &UCitySampleOptionSelector::execInitOptionSelectorNumeric },
			{ "ResetOptionSelector", &UCitySampleOptionSelector::execResetOptionSelector },
			{ "SetValue", &UCitySampleOptionSelector::execSetValue },
			{ "SetValueChecked", &UCitySampleOptionSelector::execSetValueChecked },
			{ "SetValueClamped", &UCitySampleOptionSelector::execSetValueClamped },
			{ "SetValueNumeric", &UCitySampleOptionSelector::execSetValueNumeric },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySampleOptionSelector_DecrementValue_Statics
	{
		struct CitySampleOptionSelector_eventDecrementValue_Parms
		{
			int32 StepSize;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepSize;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_DecrementValue_Statics::NewProp_StepSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_DecrementValue_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventDecrementValue_Parms, StepSize), METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_DecrementValue_Statics::NewProp_StepSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_DecrementValue_Statics::NewProp_StepSize_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_DecrementValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventDecrementValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionSelector_DecrementValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_DecrementValue_Statics::NewProp_StepSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_DecrementValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_DecrementValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/**\n\x09 * Decrements the current value index by the step size and calls SetValueClamped.\n\x09 *\n\x09 * @note\x09If bWrapAround is set, this wraps around to the value at the highest valid index when decrementing past index 0.\n\x09 */" },
		{ "CPP_Default_StepSize", "1" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Decrements the current value index by the step size and calls SetValueClamped.\n\n@note        If bWrapAround is set, this wraps around to the value at the highest valid index when decrementing past index 0." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionSelector_DecrementValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionSelector, nullptr, "DecrementValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleOptionSelector_DecrementValue_Statics::CitySampleOptionSelector_eventDecrementValue_Parms), Z_Construct_UFunction_UCitySampleOptionSelector_DecrementValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_DecrementValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_DecrementValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_DecrementValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionSelector_DecrementValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionSelector_DecrementValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionSelector_GetCustomLabels_Statics
	{
		struct CitySampleOptionSelector_eventGetCustomLabels_Parms
		{
			TArray<FText> ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_GetCustomLabels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_GetCustomLabels_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_GetCustomLabels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventGetCustomLabels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_GetCustomLabels_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_GetCustomLabels_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionSelector_GetCustomLabels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_GetCustomLabels_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_GetCustomLabels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_GetCustomLabels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** Returns the array of labels for each index. Only applicable when the option selector value type is set to \"Custom\". */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Returns the array of labels for each index. Only applicable when the option selector value type is set to \"Custom\"." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionSelector_GetCustomLabels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionSelector, nullptr, "GetCustomLabels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleOptionSelector_GetCustomLabels_Statics::CitySampleOptionSelector_eventGetCustomLabels_Parms), Z_Construct_UFunction_UCitySampleOptionSelector_GetCustomLabels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_GetCustomLabels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_GetCustomLabels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_GetCustomLabels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionSelector_GetCustomLabels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionSelector_GetCustomLabels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionSelector_GetValueBool_Statics
	{
		struct CitySampleOptionSelector_eventGetValueBool_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCitySampleOptionSelector_GetValueBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleOptionSelector_eventGetValueBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_GetValueBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CitySampleOptionSelector_eventGetValueBool_Parms), &Z_Construct_UFunction_UCitySampleOptionSelector_GetValueBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionSelector_GetValueBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_GetValueBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_GetValueBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** Returns the current value as a bool. False at index 0. Otherwise true. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Returns the current value as a bool. False at index 0. Otherwise true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionSelector_GetValueBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionSelector, nullptr, "GetValueBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleOptionSelector_GetValueBool_Statics::CitySampleOptionSelector_eventGetValueBool_Parms), Z_Construct_UFunction_UCitySampleOptionSelector_GetValueBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_GetValueBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_GetValueBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_GetValueBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionSelector_GetValueBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionSelector_GetValueBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionSelector_GetValueCount_Statics
	{
		struct CitySampleOptionSelector_eventGetValueCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_GetValueCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventGetValueCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionSelector_GetValueCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_GetValueCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_GetValueCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Option Selector" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionSelector_GetValueCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionSelector, nullptr, "GetValueCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleOptionSelector_GetValueCount_Statics::CitySampleOptionSelector_eventGetValueCount_Parms), Z_Construct_UFunction_UCitySampleOptionSelector_GetValueCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_GetValueCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_GetValueCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_GetValueCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionSelector_GetValueCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionSelector_GetValueCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionSelector_GetValueIndex_Statics
	{
		struct CitySampleOptionSelector_eventGetValueIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_GetValueIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventGetValueIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionSelector_GetValueIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_GetValueIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_GetValueIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** \n\x09 * Returns the current value index. \n\x09 * \n\x09 *\x09Index Ranges\n\x09 *\x09\x09- Boolean:\x09""0 [false] - 1 [true]\n\x09 *\x09\x09- Numeric:\x09""0 - (Range / Step Size)\n\x09 *\x09\x09- Custom:\x09""0 - MaxIndex\n\x09 */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Returns the current value index.\n\n     Index Ranges\n             - Boolean:      0 [false] - 1 [true]\n             - Numeric:      0 - (Range / Step Size)\n             - Custom:       0 - MaxIndex" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionSelector_GetValueIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionSelector, nullptr, "GetValueIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleOptionSelector_GetValueIndex_Statics::CitySampleOptionSelector_eventGetValueIndex_Parms), Z_Construct_UFunction_UCitySampleOptionSelector_GetValueIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_GetValueIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_GetValueIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_GetValueIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionSelector_GetValueIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionSelector_GetValueIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionSelector_GetValueLabel_Statics
	{
		struct CitySampleOptionSelector_eventGetValueLabel_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_GetValueLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventGetValueLabel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionSelector_GetValueLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_GetValueLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_GetValueLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** Returns the string that represents the current value. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Returns the string that represents the current value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionSelector_GetValueLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionSelector, nullptr, "GetValueLabel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleOptionSelector_GetValueLabel_Statics::CitySampleOptionSelector_eventGetValueLabel_Parms), Z_Construct_UFunction_UCitySampleOptionSelector_GetValueLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_GetValueLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_GetValueLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_GetValueLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionSelector_GetValueLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionSelector_GetValueLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionSelector_GetValueNumeric_Statics
	{
		struct CitySampleOptionSelector_eventGetValueNumeric_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_GetValueNumeric_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventGetValueNumeric_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionSelector_GetValueNumeric_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_GetValueNumeric_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_GetValueNumeric_Statics::Function_MetaDataParams[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** \n\x09 * Returns the current value as a float, even though the value may represent an integer or percentage.\n\x09 * \n\x09 * @note\x09The returned value is only valid when the option selector value type is set as numeric.\n\x09 */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Returns the current value as a float, even though the value may represent an integer or percentage.\n\n@note        The returned value is only valid when the option selector value type is set as numeric." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionSelector_GetValueNumeric_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionSelector, nullptr, "GetValueNumeric", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleOptionSelector_GetValueNumeric_Statics::CitySampleOptionSelector_eventGetValueNumeric_Parms), Z_Construct_UFunction_UCitySampleOptionSelector_GetValueNumeric_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_GetValueNumeric_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_GetValueNumeric_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_GetValueNumeric_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionSelector_GetValueNumeric()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionSelector_GetValueNumeric_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionSelector_IncrementValue_Statics
	{
		struct CitySampleOptionSelector_eventIncrementValue_Parms
		{
			int32 StepSize;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepSize;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_IncrementValue_Statics::NewProp_StepSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_IncrementValue_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventIncrementValue_Parms, StepSize), METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_IncrementValue_Statics::NewProp_StepSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_IncrementValue_Statics::NewProp_StepSize_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_IncrementValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventIncrementValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionSelector_IncrementValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_IncrementValue_Statics::NewProp_StepSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_IncrementValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_IncrementValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/**\n\x09 * Increments the current value index by the step size and calls SetValueClamped.\n\x09 *\n\x09 * @note\x09If bWrapAround is set, this wraps around to the value at index 0 when incrementing past the last valid index.\n\x09 */" },
		{ "CPP_Default_StepSize", "1" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Increments the current value index by the step size and calls SetValueClamped.\n\n@note        If bWrapAround is set, this wraps around to the value at index 0 when incrementing past the last valid index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionSelector_IncrementValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionSelector, nullptr, "IncrementValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleOptionSelector_IncrementValue_Statics::CitySampleOptionSelector_eventIncrementValue_Parms), Z_Construct_UFunction_UCitySampleOptionSelector_IncrementValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_IncrementValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_IncrementValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_IncrementValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionSelector_IncrementValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionSelector_IncrementValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionSelector_IndexOfNumeric_Statics
	{
		struct CitySampleOptionSelector_eventIndexOfNumeric_Parms
		{
			float Value;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_IndexOfNumeric_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventIndexOfNumeric_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_IndexOfNumeric_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventIndexOfNumeric_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionSelector_IndexOfNumeric_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_IndexOfNumeric_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_IndexOfNumeric_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_IndexOfNumeric_Statics::Function_MetaDataParams[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** \n\x09 * Returns the closest index for a given numeric value.\n\x09 * \n\x09 * @note\x09Values outside range between Start and End values will have an appropriately out of range index.\n\x09 * @note\x09This is mainly used for mapping numeric values to a custom label.\n\x09 */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Returns the closest index for a given numeric value.\n\n@note        Values outside range between Start and End values will have an appropriately out of range index.\n@note        This is mainly used for mapping numeric values to a custom label." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionSelector_IndexOfNumeric_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionSelector, nullptr, "IndexOfNumeric", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleOptionSelector_IndexOfNumeric_Statics::CitySampleOptionSelector_eventIndexOfNumeric_Parms), Z_Construct_UFunction_UCitySampleOptionSelector_IndexOfNumeric_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_IndexOfNumeric_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_IndexOfNumeric_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_IndexOfNumeric_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionSelector_IndexOfNumeric()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionSelector_IndexOfNumeric_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorBool_Statics
	{
		struct CitySampleOptionSelector_eventInitOptionSelectorBool_Parms
		{
			bool bInitialValueOverride;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitialValueOverride_MetaData[];
#endif
		static void NewProp_bInitialValueOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialValueOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorBool_Statics::NewProp_bInitialValueOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorBool_Statics::NewProp_bInitialValueOverride_SetBit(void* Obj)
	{
		((CitySampleOptionSelector_eventInitOptionSelectorBool_Parms*)Obj)->bInitialValueOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorBool_Statics::NewProp_bInitialValueOverride = { "bInitialValueOverride", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CitySampleOptionSelector_eventInitOptionSelectorBool_Parms), &Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorBool_Statics::NewProp_bInitialValueOverride_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorBool_Statics::NewProp_bInitialValueOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorBool_Statics::NewProp_bInitialValueOverride_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorBool_Statics::NewProp_bInitialValueOverride,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/**\n\x09 * Initializes the option selector to the given initial value.\n\x09 * @note\x09If called, bAutoInit should most likely be disabled.\n\x09 */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Initializes the option selector to the given initial value.\n@note        If called, bAutoInit should most likely be disabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionSelector, nullptr, "InitOptionSelectorBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorBool_Statics::CitySampleOptionSelector_eventInitOptionSelectorBool_Parms), Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorCustom_Statics
	{
		struct CitySampleOptionSelector_eventInitOptionSelectorCustom_Parms
		{
			int32 InitialIndexOverride;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialIndexOverride_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InitialIndexOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorCustom_Statics::NewProp_InitialIndexOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorCustom_Statics::NewProp_InitialIndexOverride = { "InitialIndexOverride", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventInitOptionSelectorCustom_Parms, InitialIndexOverride), METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorCustom_Statics::NewProp_InitialIndexOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorCustom_Statics::NewProp_InitialIndexOverride_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorCustom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorCustom_Statics::NewProp_InitialIndexOverride,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorCustom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/**\n\x09 * Initializes the option selector to the given initial value.\n\x09 * @note\x09If called, bAutoInit should most likely be disabled.\n\x09 */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Initializes the option selector to the given initial value.\n@note        If called, bAutoInit should most likely be disabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorCustom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionSelector, nullptr, "InitOptionSelectorCustom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorCustom_Statics::CitySampleOptionSelector_eventInitOptionSelectorCustom_Parms), Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorCustom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorCustom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorCustom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorCustom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorCustom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorCustom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorNumeric_Statics
	{
		struct CitySampleOptionSelector_eventInitOptionSelectorNumeric_Parms
		{
			float InitialValueOverride;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValueOverride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialValueOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorNumeric_Statics::NewProp_InitialValueOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorNumeric_Statics::NewProp_InitialValueOverride = { "InitialValueOverride", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventInitOptionSelectorNumeric_Parms, InitialValueOverride), METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorNumeric_Statics::NewProp_InitialValueOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorNumeric_Statics::NewProp_InitialValueOverride_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorNumeric_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorNumeric_Statics::NewProp_InitialValueOverride,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorNumeric_Statics::Function_MetaDataParams[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/**\n\x09 * Initializes the option selector to the given initial value.\n\x09 * @note\x09If called, bAutoInit should most likely be disabled.\n\x09 */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Initializes the option selector to the given initial value.\n@note        If called, bAutoInit should most likely be disabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorNumeric_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionSelector, nullptr, "InitOptionSelectorNumeric", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorNumeric_Statics::CitySampleOptionSelector_eventInitOptionSelectorNumeric_Parms), Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorNumeric_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorNumeric_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorNumeric_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorNumeric_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorNumeric()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorNumeric_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueLabel_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ValueLabel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChanged_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChanged_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventReceiveValueChanged_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChanged_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChanged_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChanged_Statics::NewProp_ValueLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChanged_Statics::NewProp_ValueLabel = { "ValueLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventReceiveValueChanged_Parms, ValueLabel), METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChanged_Statics::NewProp_ValueLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChanged_Statics::NewProp_ValueLabel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChanged_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChanged_Statics::NewProp_ValueLabel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** BP hook for when the option selector value is updated for any type. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "BP hook for when the option selector value is updated for any type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionSelector, nullptr, "ReceiveValueChanged", nullptr, nullptr, sizeof(CitySampleOptionSelector_eventReceiveValueChanged_Parms), Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedBool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[];
#endif
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueLabel_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ValueLabel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedBool_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedBool_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((CitySampleOptionSelector_eventReceiveValueChangedBool_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedBool_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CitySampleOptionSelector_eventReceiveValueChangedBool_Parms), &Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedBool_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedBool_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedBool_Statics::NewProp_bValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedBool_Statics::NewProp_ValueLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedBool_Statics::NewProp_ValueLabel = { "ValueLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventReceiveValueChangedBool_Parms, ValueLabel), METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedBool_Statics::NewProp_ValueLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedBool_Statics::NewProp_ValueLabel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedBool_Statics::NewProp_bValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedBool_Statics::NewProp_ValueLabel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** BP hook for when the option selector value is Boolean and the value is updated. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "BP hook for when the option selector value is Boolean and the value is updated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionSelector, nullptr, "ReceiveValueChangedBool", nullptr, nullptr, sizeof(CitySampleOptionSelector_eventReceiveValueChangedBool_Parms), Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedCustom_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueLabel_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ValueLabel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedCustom_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedCustom_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventReceiveValueChangedCustom_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedCustom_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedCustom_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedCustom_Statics::NewProp_ValueLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedCustom_Statics::NewProp_ValueLabel = { "ValueLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventReceiveValueChangedCustom_Parms, ValueLabel), METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedCustom_Statics::NewProp_ValueLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedCustom_Statics::NewProp_ValueLabel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedCustom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedCustom_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedCustom_Statics::NewProp_ValueLabel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedCustom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** BP hook for when the option selector value is a Custom type and the value is updated. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "BP hook for when the option selector value is a Custom type and the value is updated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedCustom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionSelector, nullptr, "ReceiveValueChangedCustom", nullptr, nullptr, sizeof(CitySampleOptionSelector_eventReceiveValueChangedCustom_Parms), Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedCustom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedCustom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedCustom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedCustom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedCustom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedCustom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedNumeric_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueLabel_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ValueLabel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedNumeric_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedNumeric_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventReceiveValueChangedNumeric_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedNumeric_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedNumeric_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedNumeric_Statics::NewProp_ValueLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedNumeric_Statics::NewProp_ValueLabel = { "ValueLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventReceiveValueChangedNumeric_Parms, ValueLabel), METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedNumeric_Statics::NewProp_ValueLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedNumeric_Statics::NewProp_ValueLabel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedNumeric_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedNumeric_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedNumeric_Statics::NewProp_ValueLabel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedNumeric_Statics::Function_MetaDataParams[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** BP hook for when the option selector value is Numeric and the value is updated. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "BP hook for when the option selector value is Numeric and the value is updated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedNumeric_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionSelector, nullptr, "ReceiveValueChangedNumeric", nullptr, nullptr, sizeof(CitySampleOptionSelector_eventReceiveValueChangedNumeric_Parms), Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedNumeric_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedNumeric_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedNumeric_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedNumeric_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedNumeric()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedNumeric_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionSelector_ResetOptionSelector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_ResetOptionSelector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** Sets the current value to the initial value. Trusts that the Option Selector has been properly initialized via InitOptionsSelector(). */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Sets the current value to the initial value. Trusts that the Option Selector has been properly initialized via InitOptionsSelector()." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionSelector_ResetOptionSelector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionSelector, nullptr, "ResetOptionSelector", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_ResetOptionSelector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_ResetOptionSelector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionSelector_ResetOptionSelector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionSelector_ResetOptionSelector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionSelector_SetValue_Statics
	{
		struct CitySampleOptionSelector_eventSetValue_Parms
		{
			int32 Index;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_SetValue_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_SetValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventSetValue_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_SetValue_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_SetValue_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_SetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventSetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionSelector_SetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_SetValue_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_SetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_SetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** Sets the option selector to the value at the given index, if valid. Otherwise fails quietly. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Sets the option selector to the value at the given index, if valid. Otherwise fails quietly." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionSelector_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionSelector, nullptr, "SetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleOptionSelector_SetValue_Statics::CitySampleOptionSelector_eventSetValue_Parms), Z_Construct_UFunction_UCitySampleOptionSelector_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_SetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_SetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionSelector_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionSelector_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionSelector_SetValueChecked_Statics
	{
		struct CitySampleOptionSelector_eventSetValueChecked_Parms
		{
			int32 Index;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_SetValueChecked_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_SetValueChecked_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventSetValueChecked_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_SetValueChecked_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_SetValueChecked_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_SetValueChecked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventSetValueChecked_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionSelector_SetValueChecked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_SetValueChecked_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_SetValueChecked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_SetValueChecked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** Sets the option selector to the value at the given index, if valid. Otherwise, ensures and logs failure. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Sets the option selector to the value at the given index, if valid. Otherwise, ensures and logs failure." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionSelector_SetValueChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionSelector, nullptr, "SetValueChecked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleOptionSelector_SetValueChecked_Statics::CitySampleOptionSelector_eventSetValueChecked_Parms), Z_Construct_UFunction_UCitySampleOptionSelector_SetValueChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_SetValueChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_SetValueChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_SetValueChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionSelector_SetValueChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionSelector_SetValueChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionSelector_SetValueClamped_Statics
	{
		struct CitySampleOptionSelector_eventSetValueClamped_Parms
		{
			int32 Index;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_SetValueClamped_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_SetValueClamped_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventSetValueClamped_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_SetValueClamped_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_SetValueClamped_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_SetValueClamped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventSetValueClamped_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionSelector_SetValueClamped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_SetValueClamped_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_SetValueClamped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_SetValueClamped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** Sets the option selector to the value at the given index clamped to the valid index range. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Sets the option selector to the value at the given index clamped to the valid index range." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionSelector_SetValueClamped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionSelector, nullptr, "SetValueClamped", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleOptionSelector_SetValueClamped_Statics::CitySampleOptionSelector_eventSetValueClamped_Parms), Z_Construct_UFunction_UCitySampleOptionSelector_SetValueClamped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_SetValueClamped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_SetValueClamped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_SetValueClamped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionSelector_SetValueClamped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionSelector_SetValueClamped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionSelector_SetValueNumeric_Statics
	{
		struct CitySampleOptionSelector_eventSetValueNumeric_Parms
		{
			float Value;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_SetValueNumeric_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_SetValueNumeric_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventSetValueNumeric_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_SetValueNumeric_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_SetValueNumeric_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleOptionSelector_SetValueNumeric_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionSelector_eventSetValueNumeric_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionSelector_SetValueNumeric_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_SetValueNumeric_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionSelector_SetValueNumeric_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionSelector_SetValueNumeric_Statics::Function_MetaDataParams[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** Sets the option selector to the index of the closest numeric value to the passed in value. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Sets the option selector to the index of the closest numeric value to the passed in value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionSelector_SetValueNumeric_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionSelector, nullptr, "SetValueNumeric", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleOptionSelector_SetValueNumeric_Statics::CitySampleOptionSelector_eventSetValueNumeric_Parms), Z_Construct_UFunction_UCitySampleOptionSelector_SetValueNumeric_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_SetValueNumeric_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionSelector_SetValueNumeric_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionSelector_SetValueNumeric_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionSelector_SetValueNumeric()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionSelector_SetValueNumeric_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleOptionSelector);
	UClass* Z_Construct_UClass_UCitySampleOptionSelector_NoRegister()
	{
		return UCitySampleOptionSelector::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleOptionSelector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ValueType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ValueType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoInit_MetaData[];
#endif
		static void NewProp_bAutoInit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoInit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitialValue_MetaData[];
#endif
		static void NewProp_bInitialValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BooleanLabelFalse_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_BooleanLabelFalse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BooleanLabelTrue_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_BooleanLabelTrue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NumericType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumericType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NumericType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueStepSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ValueStepSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NumericRangeCustomization_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumericRangeCustomization_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NumericRangeCustomization;
		static const UECodeGen_Private::FTextPropertyParams NewProp_NumericValueLabels_ValueProp;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NumericValueLabels_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumericValueLabels_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NumericValueLabels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InitialIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIndex;
		static const UECodeGen_Private::FTextPropertyParams NewProp_CustomLabels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomLabels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomLabels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWrapAround_MetaData[];
#endif
		static void NewProp_bWrapAround_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWrapAround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueLabelPrefix_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ValueLabelPrefix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueLabelSuffix_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ValueLabelSuffix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnValueChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnValueChangedBool_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChangedBool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnValueChangedNumeric_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChangedNumeric;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnValueChangedCustom_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChangedCustom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ValueIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ValueCount;
		static const UECodeGen_Private::FTextPropertyParams NewProp_NumericIndexLabelMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumericIndexLabelMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumericIndexLabelMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NumericIndexLabelMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleOptionSelector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCitySampleButtonPrompt,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleOptionSelector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleOptionSelector_DecrementValue, "DecrementValue" }, // 3955361874
		{ &Z_Construct_UFunction_UCitySampleOptionSelector_GetCustomLabels, "GetCustomLabels" }, // 183600967
		{ &Z_Construct_UFunction_UCitySampleOptionSelector_GetValueBool, "GetValueBool" }, // 3211550047
		{ &Z_Construct_UFunction_UCitySampleOptionSelector_GetValueCount, "GetValueCount" }, // 1264743544
		{ &Z_Construct_UFunction_UCitySampleOptionSelector_GetValueIndex, "GetValueIndex" }, // 3167865940
		{ &Z_Construct_UFunction_UCitySampleOptionSelector_GetValueLabel, "GetValueLabel" }, // 218581503
		{ &Z_Construct_UFunction_UCitySampleOptionSelector_GetValueNumeric, "GetValueNumeric" }, // 2164944009
		{ &Z_Construct_UFunction_UCitySampleOptionSelector_IncrementValue, "IncrementValue" }, // 824857179
		{ &Z_Construct_UFunction_UCitySampleOptionSelector_IndexOfNumeric, "IndexOfNumeric" }, // 3582096571
		{ &Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorBool, "InitOptionSelectorBool" }, // 4182211201
		{ &Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorCustom, "InitOptionSelectorCustom" }, // 1432183566
		{ &Z_Construct_UFunction_UCitySampleOptionSelector_InitOptionSelectorNumeric, "InitOptionSelectorNumeric" }, // 393516139
		{ &Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChanged, "ReceiveValueChanged" }, // 1378683053
		{ &Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedBool, "ReceiveValueChangedBool" }, // 3433958406
		{ &Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedCustom, "ReceiveValueChangedCustom" }, // 1589404400
		{ &Z_Construct_UFunction_UCitySampleOptionSelector_ReceiveValueChangedNumeric, "ReceiveValueChangedNumeric" }, // 2510742724
		{ &Z_Construct_UFunction_UCitySampleOptionSelector_ResetOptionSelector, "ResetOptionSelector" }, // 2803019584
		{ &Z_Construct_UFunction_UCitySampleOptionSelector_SetValue, "SetValue" }, // 1537819852
		{ &Z_Construct_UFunction_UCitySampleOptionSelector_SetValueChecked, "SetValueChecked" }, // 1283217647
		{ &Z_Construct_UFunction_UCitySampleOptionSelector_SetValueClamped, "SetValueClamped" }, // 1057772340
		{ &Z_Construct_UFunction_UCitySampleOptionSelector_SetValueNumeric, "SetValueNumeric" }, // 1660565129
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents a menu option with a list of labeled values from which one value can be selected.\n * These values can be boolean, numeric, or custom (represented by a labeled index).\n */" },
		{ "IncludePath", "UI/CitySampleOptionSelector.h" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Represents a menu option with a list of labeled values from which one value can be selected.\nThese values can be boolean, numeric, or custom (represented by a labeled index)." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueType_MetaData[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** Whether the option selector value should be treated as a boolean, numeric, or custom indexed value. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Whether the option selector value should be treated as a boolean, numeric, or custom indexed value." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueType = { "ValueType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionSelector, ValueType), Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorType, METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueType_MetaData)) }; // 1446469947
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_bAutoInit_MetaData[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** \n\x09 * Whether the option selector should automatically initialize with the compile-time initial value.\n\x09 * @note\x09""Disable this when you want to modify the initial value at runtime, then call InitOptionSelector manually.\n\x09 */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Whether the option selector should automatically initialize with the compile-time initial value.\n@note        Disable this when you want to modify the initial value at runtime, then call InitOptionSelector manually." },
	};
#endif
	void Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_bAutoInit_SetBit(void* Obj)
	{
		((UCitySampleOptionSelector*)Obj)->bAutoInit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_bAutoInit = { "bAutoInit", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCitySampleOptionSelector), &Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_bAutoInit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_bAutoInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_bAutoInit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_bInitialValue_MetaData[] = {
		{ "Category", "Option Selector|Boolean" },
		{ "Comment", "/** The boolean value used to initialize the option selector when bAutoInit is enabled. */" },
		{ "EditCondition", "ValueType == ECitySampleOptionSelectorType::Boolean && bAutoInit" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "The boolean value used to initialize the option selector when bAutoInit is enabled." },
	};
#endif
	void Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_bInitialValue_SetBit(void* Obj)
	{
		((UCitySampleOptionSelector*)Obj)->bInitialValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_bInitialValue = { "bInitialValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCitySampleOptionSelector), &Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_bInitialValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_bInitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_bInitialValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_BooleanLabelFalse_MetaData[] = {
		{ "Category", "Option Selector|Boolean" },
		{ "EditCondition", "ValueType == ECitySampleOptionSelectorType::Boolean" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_BooleanLabelFalse = { "BooleanLabelFalse", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionSelector, BooleanLabelFalse), METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_BooleanLabelFalse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_BooleanLabelFalse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_BooleanLabelTrue_MetaData[] = {
		{ "Category", "Option Selector|Boolean" },
		{ "EditCondition", "ValueType == ECitySampleOptionSelectorType::Boolean" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_BooleanLabelTrue = { "BooleanLabelTrue", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionSelector, BooleanLabelTrue), METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_BooleanLabelTrue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_BooleanLabelTrue_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericType_MetaData[] = {
		{ "Category", "Option Selector|Numeric" },
		{ "Comment", "/** Numeric type of the option selector value, affecting the default label string representation and the valid property value. */" },
		{ "EditCondition", "ValueType == ECitySampleOptionSelectorType::Numeric" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Numeric type of the option selector value, affecting the default label string representation and the valid property value." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericType = { "NumericType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionSelector, NumericType), Z_Construct_UEnum_CitySample_ECitySampleOptionSelectorNumericType, METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericType_MetaData)) }; // 560248792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_InitialValue_MetaData[] = {
		{ "Category", "Option Selector|Numeric" },
		{ "Comment", "/** The numeric value used to initialize the option selector when bAutoInit is enabled. Clamped between StartValue and EndValue. */" },
		{ "EditCondition", "ValueType == ECitySampleOptionSelectorType::Numeric && bAutoInit" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "The numeric value used to initialize the option selector when bAutoInit is enabled. Clamped between StartValue and EndValue." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionSelector, InitialValue), METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_InitialValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_StartValue_MetaData[] = {
		{ "Category", "Option Selector|Numeric" },
		{ "Comment", "/** The numeric value assigned to value index 0. */" },
		{ "EditCondition", "ValueType == ECitySampleOptionSelectorType::Numeric" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "The numeric value assigned to value index 0." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_StartValue = { "StartValue", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionSelector, StartValue), METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_StartValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_StartValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_EndValue_MetaData[] = {
		{ "Category", "Option Selector|Numeric" },
		{ "Comment", "/** The numeric value that is assigned to the last valid index (the index equivalent to Range / Step Size). */" },
		{ "EditCondition", "ValueType == ECitySampleOptionSelectorType::Numeric" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "The numeric value that is assigned to the last valid index (the index equivalent to Range / Step Size)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_EndValue = { "EndValue", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionSelector, EndValue), METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_EndValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_EndValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueStepSize_MetaData[] = {
		{ "Category", "Option Selector|Numeric" },
		{ "ClampMin", "0.00001" },
		{ "Comment", "/** The value step sized used to calculate the value change between indices. */" },
		{ "EditCondition", "ValueType == ECitySampleOptionSelectorType::Numeric" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "The value step sized used to calculate the value change between indices." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueStepSize = { "ValueStepSize", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionSelector, ValueStepSize), METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueStepSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueStepSize_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericRangeCustomization_Inner = { "NumericRangeCustomization", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization, METADATA_PARAMS(nullptr, 0) }; // 1028982046
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericRangeCustomization_MetaData[] = {
		{ "Category", "Option Selector|Numeric" },
		{ "Comment", "/** Additional scaling applied to the values when generating the default value label. */" },
		{ "EditCondition", "ValueType == ECitySampleOptionSelectorType::Numeric" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Additional scaling applied to the values when generating the default value label." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericRangeCustomization = { "NumericRangeCustomization", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionSelector, NumericRangeCustomization), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericRangeCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericRangeCustomization_MetaData)) }; // 1028982046
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericValueLabels_ValueProp = { "NumericValueLabels", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericValueLabels_Key_KeyProp = { "NumericValueLabels_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericValueLabels_MetaData[] = {
		{ "Category", "Option Selector|Numeric" },
		{ "Comment", "/** Optional mapping to add custom labels for specific values, overriding the default label for the given numeric type. */" },
		{ "EditCondition", "ValueType == ECitySampleOptionSelectorType::Numeric" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Optional mapping to add custom labels for specific values, overriding the default label for the given numeric type." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericValueLabels = { "NumericValueLabels", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionSelector, NumericValueLabels), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericValueLabels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericValueLabels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_InitialIndex_MetaData[] = {
		{ "Category", "Option Selector|Custom" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Index of the value used to initialize the option selector when bAutoInit is enabled. Only applicable when the option selector type is set to \"Custom\". */" },
		{ "EditCondition", "ValueType == ECitySampleOptionSelectorType::Custom && bAutoInit" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Index of the value used to initialize the option selector when bAutoInit is enabled. Only applicable when the option selector type is set to \"Custom\"." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_InitialIndex = { "InitialIndex", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionSelector, InitialIndex), METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_InitialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_InitialIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_MaxIndex_MetaData[] = {
		{ "Category", "Option Selector|Custom" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Max index for the \"Custom\" values, effectively denoting the number of custom values (minus 1 for Index 0). */" },
		{ "EditCondition", "ValueType == ECitySampleOptionSelectorType::Custom" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Max index for the \"Custom\" values, effectively denoting the number of custom values (minus 1 for Index 0)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_MaxIndex = { "MaxIndex", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionSelector, MaxIndex), METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_MaxIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_MaxIndex_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_CustomLabels_Inner = { "CustomLabels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_CustomLabels_MetaData[] = {
		{ "Category", "Option Selector|Custom" },
		{ "Comment", "/** Array of custom labels for each value index. Only applicable when the option selector type is set to \"Custom\". */" },
		{ "EditCondition", "ValueType == ECitySampleOptionSelectorType::Custom" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Array of custom labels for each value index. Only applicable when the option selector type is set to \"Custom\"." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_CustomLabels = { "CustomLabels", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionSelector, CustomLabels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_CustomLabels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_CustomLabels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_bWrapAround_MetaData[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** Whether IncrementValue/DecrementValue wraps around to the first/last value when exceeding valid indices. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Whether IncrementValue/DecrementValue wraps around to the first/last value when exceeding valid indices." },
	};
#endif
	void Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_bWrapAround_SetBit(void* Obj)
	{
		((UCitySampleOptionSelector*)Obj)->bWrapAround = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_bWrapAround = { "bWrapAround", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCitySampleOptionSelector), &Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_bWrapAround_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_bWrapAround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_bWrapAround_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueLabelPrefix_MetaData[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** String that will be appended to the front of the value label. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "String that will be appended to the front of the value label." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueLabelPrefix = { "ValueLabelPrefix", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionSelector, ValueLabelPrefix), METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueLabelPrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueLabelPrefix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueLabelSuffix_MetaData[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** String that will be appended to the back of the value label. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "String that will be appended to the back of the value label." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueLabelSuffix = { "ValueLabelSuffix", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionSelector, ValueLabelSuffix), METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueLabelSuffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueLabelSuffix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_OnValueChanged_MetaData[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** Delegate fired when the option selector value is changed for any type. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Delegate fired when the option selector value is changed for any type." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_OnValueChanged = { "OnValueChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionSelector, OnValueChanged), Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_OnValueChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_OnValueChanged_MetaData)) }; // 3294259185
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_OnValueChangedBool_MetaData[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** Delegate fired when the option selector value is Boolean and the value is changed. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Delegate fired when the option selector value is Boolean and the value is changed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_OnValueChangedBool = { "OnValueChangedBool", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionSelector, OnValueChangedBool), Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedBool__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_OnValueChangedBool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_OnValueChangedBool_MetaData)) }; // 3855352098
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_OnValueChangedNumeric_MetaData[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** Delegate fired when the option selector value is Numeric and the value is changed. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Delegate fired when the option selector value is Numeric and the value is changed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_OnValueChangedNumeric = { "OnValueChangedNumeric", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionSelector, OnValueChangedNumeric), Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChangedNumeric__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_OnValueChangedNumeric_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_OnValueChangedNumeric_MetaData)) }; // 2062301410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_OnValueChangedCustom_MetaData[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** Delegate fired when the option selector value is a Custom type and the value is changed. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "Delegate fired when the option selector value is a Custom type and the value is changed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_OnValueChangedCustom = { "OnValueChangedCustom", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionSelector, OnValueChangedCustom), Z_Construct_UDelegateFunction_CitySample_CitySampleOptionSelectorOnValueChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_OnValueChangedCustom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_OnValueChangedCustom_MetaData)) }; // 3294259185
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueIndex_MetaData[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/**\n\x09 * The current value index.\n\x09 *\n\x09 *\x09Ranges\n\x09 *\x09\x09- Boolean:\x09""0 [false] - 1 [true]\n\x09 *\x09\x09- Numeric:\x09""0 - (Range / Step Size)\n\x09 *\x09\x09- Custom:\x09""0 - MaxIndex\n\x09 */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "The current value index.\n\n     Ranges\n             - Boolean:      0 [false] - 1 [true]\n             - Numeric:      0 - (Range / Step Size)\n             - Custom:       0 - MaxIndex" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueIndex = { "ValueIndex", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionSelector, ValueIndex), METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueCount_MetaData[] = {
		{ "Category", "Option Selector" },
		{ "Comment", "/** The number of possible values. Boolean = 2, Numeric = Range / StepSize, Custom = MaxIndex + 1. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "The number of possible values. Boolean = 2, Numeric = Range / StepSize, Custom = MaxIndex + 1." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueCount = { "ValueCount", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionSelector, ValueCount), METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueCount_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericIndexLabelMap_ValueProp = { "NumericIndexLabelMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericIndexLabelMap_Key_KeyProp = { "NumericIndexLabelMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericIndexLabelMap_MetaData[] = {
		{ "Category", "Option Selector|Numeric" },
		{ "Comment", "/** A mapping of value indices to a string label. Used to override default numeric labels for specific values. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionSelector.h" },
		{ "ToolTip", "A mapping of value indices to a string label. Used to override default numeric labels for specific values." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericIndexLabelMap = { "NumericIndexLabelMap", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionSelector, NumericIndexLabelMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericIndexLabelMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericIndexLabelMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleOptionSelector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_bAutoInit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_bInitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_BooleanLabelFalse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_BooleanLabelTrue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_StartValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_EndValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueStepSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericRangeCustomization_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericRangeCustomization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericValueLabels_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericValueLabels_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericValueLabels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_InitialIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_MaxIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_CustomLabels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_CustomLabels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_bWrapAround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueLabelPrefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueLabelSuffix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_OnValueChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_OnValueChangedBool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_OnValueChangedNumeric,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_OnValueChangedCustom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_ValueCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericIndexLabelMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericIndexLabelMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionSelector_Statics::NewProp_NumericIndexLabelMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleOptionSelector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleOptionSelector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleOptionSelector_Statics::ClassParams = {
		&UCitySampleOptionSelector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCitySampleOptionSelector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionSelector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionSelector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCitySampleOptionSelector()
	{
		if (!Z_Registration_Info_UClass_UCitySampleOptionSelector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleOptionSelector.OuterSingleton, Z_Construct_UClass_UCitySampleOptionSelector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleOptionSelector.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleOptionSelector>()
	{
		return UCitySampleOptionSelector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleOptionSelector);
	UCitySampleOptionSelector::~UCitySampleOptionSelector() {}
	struct Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleOptionSelector_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleOptionSelector_h_Statics::EnumInfo[] = {
		{ ECitySampleOptionSelectorType_StaticEnum, TEXT("ECitySampleOptionSelectorType"), &Z_Registration_Info_UEnum_ECitySampleOptionSelectorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1446469947U) },
		{ ECitySampleOptionSelectorNumericType_StaticEnum, TEXT("ECitySampleOptionSelectorNumericType"), &Z_Registration_Info_UEnum_ECitySampleOptionSelectorNumericType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 560248792U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleOptionSelector_h_Statics::ScriptStructInfo[] = {
		{ FCitySampleOptionsNumericRangeCustomization::StaticStruct, Z_Construct_UScriptStruct_FCitySampleOptionsNumericRangeCustomization_Statics::NewStructOps, TEXT("CitySampleOptionsNumericRangeCustomization"), &Z_Registration_Info_UScriptStruct_CitySampleOptionsNumericRangeCustomization, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleOptionsNumericRangeCustomization), 1028982046U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleOptionSelector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleOptionSelector, UCitySampleOptionSelector::StaticClass, TEXT("UCitySampleOptionSelector"), &Z_Registration_Info_UClass_UCitySampleOptionSelector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleOptionSelector), 3460376890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleOptionSelector_h_827523921(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleOptionSelector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleOptionSelector_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleOptionSelector_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleOptionSelector_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleOptionSelector_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleOptionSelector_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
