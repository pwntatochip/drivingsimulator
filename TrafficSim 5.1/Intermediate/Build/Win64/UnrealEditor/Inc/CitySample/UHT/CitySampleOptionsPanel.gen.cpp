// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/UI/CitySampleOptionsPanel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleOptionsPanel() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleOptionsPanel();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleOptionsPanel_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySamplePanel();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	DEFINE_FUNCTION(UCitySampleOptionsPanel::execClearCurrentOption)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCurrentOption();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionsPanel::execDecrementCurrentOption)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCitySampleButtonPrompt**)Z_Param__Result=P_THIS->DecrementCurrentOption();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionsPanel::execIncrementCurrentOption)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCitySampleButtonPrompt**)Z_Param__Result=P_THIS->IncrementCurrentOption();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionsPanel::execSetCurrentOption)
	{
		P_GET_OBJECT(UCitySampleButtonPrompt,Z_Param_Option);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCitySampleButtonPrompt**)Z_Param__Result=P_THIS->SetCurrentOption(Z_Param_Option);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionsPanel::execSetCurrentOptionByIndexClamped)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCitySampleButtonPrompt**)Z_Param__Result=P_THIS->SetCurrentOptionByIndexClamped(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionsPanel::execSetCurrentOptionByIndexChecked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCitySampleButtonPrompt**)Z_Param__Result=P_THIS->SetCurrentOptionByIndexChecked(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionsPanel::execGetCurrentOption)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCitySampleButtonPrompt**)Z_Param__Result=P_THIS->GetCurrentOption();
		P_NATIVE_END;
	}
	struct CitySampleOptionsPanel_eventOnSetCurrentOption_Parms
	{
		UCitySampleButtonPrompt* PreviousOption;
		UCitySampleButtonPrompt* NewOption;
	};
	static FName NAME_UCitySampleOptionsPanel_OnSetCurrentOption = FName(TEXT("OnSetCurrentOption"));
	void UCitySampleOptionsPanel::OnSetCurrentOption(UCitySampleButtonPrompt* PreviousOption, UCitySampleButtonPrompt* NewOption)
	{
		CitySampleOptionsPanel_eventOnSetCurrentOption_Parms Parms;
		Parms.PreviousOption=PreviousOption;
		Parms.NewOption=NewOption;
		ProcessEvent(FindFunctionChecked(NAME_UCitySampleOptionsPanel_OnSetCurrentOption),&Parms);
	}
	void UCitySampleOptionsPanel::StaticRegisterNativesUCitySampleOptionsPanel()
	{
		UClass* Class = UCitySampleOptionsPanel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearCurrentOption", &UCitySampleOptionsPanel::execClearCurrentOption },
			{ "DecrementCurrentOption", &UCitySampleOptionsPanel::execDecrementCurrentOption },
			{ "GetCurrentOption", &UCitySampleOptionsPanel::execGetCurrentOption },
			{ "IncrementCurrentOption", &UCitySampleOptionsPanel::execIncrementCurrentOption },
			{ "SetCurrentOption", &UCitySampleOptionsPanel::execSetCurrentOption },
			{ "SetCurrentOptionByIndexChecked", &UCitySampleOptionsPanel::execSetCurrentOptionByIndexChecked },
			{ "SetCurrentOptionByIndexClamped", &UCitySampleOptionsPanel::execSetCurrentOptionByIndexClamped },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySampleOptionsPanel_ClearCurrentOption_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_ClearCurrentOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Options Panel" },
		{ "Comment", "/** Clears the current option, such that no option is currently selected. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionsPanel.h" },
		{ "ToolTip", "Clears the current option, such that no option is currently selected." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionsPanel_ClearCurrentOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionsPanel, nullptr, "ClearCurrentOption", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionsPanel_ClearCurrentOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_ClearCurrentOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionsPanel_ClearCurrentOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionsPanel_ClearCurrentOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics
	{
		struct CitySampleOptionsPanel_eventDecrementCurrentOption_Parms
		{
			UCitySampleButtonPrompt* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionsPanel_eventDecrementCurrentOption_Parms, ReturnValue), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Options Panel" },
		{ "Comment", "/**\n\x09 * Decrements the current option index and calls SetCurrentOptionByIndexClamped.\n\x09 *\n\x09 * @note\x09If bWrapAround is set, this wraps around to the option at the last valid index when decrementing past index 0.\n\x09 */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionsPanel.h" },
		{ "ToolTip", "Decrements the current option index and calls SetCurrentOptionByIndexClamped.\n\n@note        If bWrapAround is set, this wraps around to the option at the last valid index when decrementing past index 0." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionsPanel, nullptr, "DecrementCurrentOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::CitySampleOptionsPanel_eventDecrementCurrentOption_Parms), Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics
	{
		struct CitySampleOptionsPanel_eventGetCurrentOption_Parms
		{
			UCitySampleButtonPrompt* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionsPanel_eventGetCurrentOption_Parms, ReturnValue), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Options Panel" },
		{ "Comment", "/** Returns the currently selected option. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionsPanel.h" },
		{ "ToolTip", "Returns the currently selected option." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionsPanel, nullptr, "GetCurrentOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::CitySampleOptionsPanel_eventGetCurrentOption_Parms), Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics
	{
		struct CitySampleOptionsPanel_eventIncrementCurrentOption_Parms
		{
			UCitySampleButtonPrompt* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionsPanel_eventIncrementCurrentOption_Parms, ReturnValue), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Options Panel" },
		{ "Comment", "/**\n\x09 * Increments the current option index and calls SetCurrentOptionByIndexClamped.\n\x09 *\n\x09 * @note\x09If bWrapAround is set, this wraps around to the option at index 0 when incrementing past the last valid index.\n\x09 */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionsPanel.h" },
		{ "ToolTip", "Increments the current option index and calls SetCurrentOptionByIndexClamped.\n\n@note        If bWrapAround is set, this wraps around to the option at index 0 when incrementing past the last valid index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionsPanel, nullptr, "IncrementCurrentOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::CitySampleOptionsPanel_eventIncrementCurrentOption_Parms), Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousOption_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewOption_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::NewProp_PreviousOption_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::NewProp_PreviousOption = { "PreviousOption", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionsPanel_eventOnSetCurrentOption_Parms, PreviousOption), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::NewProp_PreviousOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::NewProp_PreviousOption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::NewProp_NewOption_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::NewProp_NewOption = { "NewOption", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionsPanel_eventOnSetCurrentOption_Parms, NewOption), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::NewProp_NewOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::NewProp_NewOption_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::NewProp_PreviousOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::NewProp_NewOption,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Options Panel" },
		{ "Comment", "/** BP hook for updating the UI when the current option selection changes. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionsPanel.h" },
		{ "ToolTip", "BP hook for updating the UI when the current option selection changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionsPanel, nullptr, "OnSetCurrentOption", nullptr, nullptr, sizeof(CitySampleOptionsPanel_eventOnSetCurrentOption_Parms), Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics
	{
		struct CitySampleOptionsPanel_eventSetCurrentOption_Parms
		{
			const UCitySampleButtonPrompt* Option;
			UCitySampleButtonPrompt* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Option;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::NewProp_Option_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionsPanel_eventSetCurrentOption_Parms, Option), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::NewProp_Option_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::NewProp_Option_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionsPanel_eventSetCurrentOption_Parms, ReturnValue), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::NewProp_Option,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Options Panel" },
		{ "Comment", "/** \n\x09 * Sets the currently selected option. If null, clears the selected option. \n\x09 * \n\x09 * @note\x09If not found in the list of options, does nothing. \n\x09 */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionsPanel.h" },
		{ "ToolTip", "Sets the currently selected option. If null, clears the selected option.\n\n@note        If not found in the list of options, does nothing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionsPanel, nullptr, "SetCurrentOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::CitySampleOptionsPanel_eventSetCurrentOption_Parms), Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics
	{
		struct CitySampleOptionsPanel_eventSetCurrentOptionByIndexChecked_Parms
		{
			int32 Index;
			UCitySampleButtonPrompt* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionsPanel_eventSetCurrentOptionByIndexChecked_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionsPanel_eventSetCurrentOptionByIndexChecked_Parms, ReturnValue), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Options Panel" },
		{ "Comment", "/** Sets the currently selected option by index. Ensures a valid index and logs attempts with invalid indices. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionsPanel.h" },
		{ "ToolTip", "Sets the currently selected option by index. Ensures a valid index and logs attempts with invalid indices." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionsPanel, nullptr, "SetCurrentOptionByIndexChecked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::CitySampleOptionsPanel_eventSetCurrentOptionByIndexChecked_Parms), Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics
	{
		struct CitySampleOptionsPanel_eventSetCurrentOptionByIndexClamped_Parms
		{
			int32 Index;
			UCitySampleButtonPrompt* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionsPanel_eventSetCurrentOptionByIndexClamped_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleOptionsPanel_eventSetCurrentOptionByIndexClamped_Parms, ReturnValue), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Options Panel" },
		{ "Comment", "/** Sets the currently selected option by index. Clamps the given index to the nearest valid index. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionsPanel.h" },
		{ "ToolTip", "Sets the currently selected option by index. Clamps the given index to the nearest valid index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionsPanel, nullptr, "SetCurrentOptionByIndexClamped", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::CitySampleOptionsPanel_eventSetCurrentOptionByIndexClamped_Parms), Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleOptionsPanel);
	UClass* Z_Construct_UClass_UCitySampleOptionsPanel_NoRegister()
	{
		return UCitySampleOptionsPanel::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleOptionsPanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionsScroll_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionsScroll;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Options_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialOptionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InitialOptionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWrapAround_MetaData[];
#endif
		static void NewProp_bWrapAround_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWrapAround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentOptionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentOptionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleOptionsPanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCitySamplePanel,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleOptionsPanel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleOptionsPanel_ClearCurrentOption, "ClearCurrentOption" }, // 3923725637
		{ &Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption, "DecrementCurrentOption" }, // 3240277663
		{ &Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption, "GetCurrentOption" }, // 3967268051
		{ &Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption, "IncrementCurrentOption" }, // 1761094551
		{ &Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption, "OnSetCurrentOption" }, // 695603063
		{ &Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption, "SetCurrentOption" }, // 1775629880
		{ &Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked, "SetCurrentOptionByIndexChecked" }, // 449975249
		{ &Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped, "SetCurrentOptionByIndexClamped" }, // 1238271784
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionsPanel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A CitySample Panel that represents a list of options that can be navigated through and set.\n */" },
		{ "IncludePath", "UI/CitySampleOptionsPanel.h" },
		{ "ModuleRelativePath", "UI/CitySampleOptionsPanel.h" },
		{ "ToolTip", "A CitySample Panel that represents a list of options that can be navigated through and set." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_OptionsScroll_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Options Panel" },
		{ "Comment", "/** Optional scroll box widget binding used to generate the options array on initialization. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/CitySampleOptionsPanel.h" },
		{ "ToolTip", "Optional scroll box widget binding used to generate the options array on initialization." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_OptionsScroll = { "OptionsScroll", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionsPanel, OptionsScroll), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_OptionsScroll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_OptionsScroll_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "Options Panel" },
		{ "Comment", "/** Array of widgets that represent the different options that can be navigated through and set. *///UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Options Panel\")\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/CitySampleOptionsPanel.h" },
		{ "ToolTip", "Array of widgets that represent the different options that can be navigated through and set. //UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Options Panel\")" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x002008800002000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionsPanel, Options), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_Options_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_InitialOptionIndex_MetaData[] = {
		{ "Category", "Options Panel" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Index of the option to initialize the options panel */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionsPanel.h" },
		{ "ToolTip", "Index of the option to initialize the options panel" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_InitialOptionIndex = { "InitialOptionIndex", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionsPanel, InitialOptionIndex), METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_InitialOptionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_InitialOptionIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_bWrapAround_MetaData[] = {
		{ "Category", "Options Panel" },
		{ "Comment", "/** Whether IncrementCurrentOption/DecrementCurrentOption wraps around to the first/last value when exceeding valid indices. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionsPanel.h" },
		{ "ToolTip", "Whether IncrementCurrentOption/DecrementCurrentOption wraps around to the first/last value when exceeding valid indices." },
	};
#endif
	void Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_bWrapAround_SetBit(void* Obj)
	{
		((UCitySampleOptionsPanel*)Obj)->bWrapAround = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_bWrapAround = { "bWrapAround", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCitySampleOptionsPanel), &Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_bWrapAround_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_bWrapAround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_bWrapAround_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_CurrentOptionIndex_MetaData[] = {
		{ "Category", "Options Panel" },
		{ "Comment", "/** Index of the currently selected option. */" },
		{ "ModuleRelativePath", "UI/CitySampleOptionsPanel.h" },
		{ "ToolTip", "Index of the currently selected option." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_CurrentOptionIndex = { "CurrentOptionIndex", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleOptionsPanel, CurrentOptionIndex), METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_CurrentOptionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_CurrentOptionIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleOptionsPanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_OptionsScroll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_Options_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_InitialOptionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_bWrapAround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_CurrentOptionIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleOptionsPanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleOptionsPanel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleOptionsPanel_Statics::ClassParams = {
		&UCitySampleOptionsPanel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCitySampleOptionsPanel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionsPanel_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCitySampleOptionsPanel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionsPanel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCitySampleOptionsPanel()
	{
		if (!Z_Registration_Info_UClass_UCitySampleOptionsPanel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleOptionsPanel.OuterSingleton, Z_Construct_UClass_UCitySampleOptionsPanel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleOptionsPanel.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleOptionsPanel>()
	{
		return UCitySampleOptionsPanel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleOptionsPanel);
	UCitySampleOptionsPanel::~UCitySampleOptionsPanel() {}
	struct Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleOptionsPanel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleOptionsPanel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleOptionsPanel, UCitySampleOptionsPanel::StaticClass, TEXT("UCitySampleOptionsPanel"), &Z_Registration_Info_UClass_UCitySampleOptionsPanel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleOptionsPanel), 4223377388U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleOptionsPanel_h_95910195(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleOptionsPanel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleOptionsPanel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
