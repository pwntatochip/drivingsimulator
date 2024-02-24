// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/UI/CitySampleMenu.h"
#include "InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleMenu() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleControlsOverlayInterface_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleMenu();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleMenu_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySamplePanel();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySamplePanel_NoRegister();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleMenuTabData();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleMenuTabData;
class UScriptStruct* FCitySampleMenuTabData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleMenuTabData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleMenuTabData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleMenuTabData, Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleMenuTabData"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleMenuTabData.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleMenuTabData>()
{
	return FCitySampleMenuTabData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectorName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SelectorName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FrameName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ContentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Selector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Frame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Content;
		static const UECodeGen_Private::FTextPropertyParams NewProp_InputActionDescriptions_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputActionDescriptions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActionDescriptions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InputActionDescriptions;
		static const UECodeGen_Private::FTextPropertyParams NewProp_InputKeyDescriptionOverrides_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputKeyDescriptionOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputKeyDescriptionOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InputKeyDescriptionOverrides;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a menu tab made up of a selector, frame, and content widgets that are relevant when a tab is active.\n */" },
		{ "ModuleRelativePath", "UI/CitySampleMenu.h" },
		{ "ToolTip", "Represents a menu tab made up of a selector, frame, and content widgets that are relevant when a tab is active." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleMenuTabData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_SelectorName_MetaData[] = {
		{ "Category", "CitySampleMenuTabData" },
		{ "Comment", "// #todo: remove names and name lookup to init the pointers once the references can be set directly\n" },
		{ "ModuleRelativePath", "UI/CitySampleMenu.h" },
		{ "ToolTip", "#todo: remove names and name lookup to init the pointers once the references can be set directly" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_SelectorName = { "SelectorName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCitySampleMenuTabData, SelectorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_SelectorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_SelectorName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_FrameName_MetaData[] = {
		{ "Category", "CitySampleMenuTabData" },
		{ "ModuleRelativePath", "UI/CitySampleMenu.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_FrameName = { "FrameName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCitySampleMenuTabData, FrameName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_FrameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_FrameName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_ContentName_MetaData[] = {
		{ "Category", "CitySampleMenuTabData" },
		{ "ModuleRelativePath", "UI/CitySampleMenu.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_ContentName = { "ContentName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCitySampleMenuTabData, ContentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_ContentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_ContentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_Selector_MetaData[] = {
		{ "Category", "CitySampleMenuTabData" },
		{ "Comment", "/** A button widget that represents the tab selection, i.e. an icon in a list that highlights when active. *///UPROPERTY(EditAnywhere, BlueprintReadOnly)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/CitySampleMenu.h" },
		{ "ToolTip", "A button widget that represents the tab selection, i.e. an icon in a list that highlights when active. //UPROPERTY(EditAnywhere, BlueprintReadOnly)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x00100000000a201d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCitySampleMenuTabData, Selector), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_Selector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_Selector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_Frame_MetaData[] = {
		{ "Category", "CitySampleMenuTabData" },
		{ "Comment", "/** A widget that acts as the parent for the content, i.e. an overlay, canvas panel, or border that contains the content. *///UPROPERTY(EditAnywhere, BlueprintReadOnly)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/CitySampleMenu.h" },
		{ "ToolTip", "A widget that acts as the parent for the content, i.e. an overlay, canvas panel, or border that contains the content. //UPROPERTY(EditAnywhere, BlueprintReadOnly)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x00100000000a201d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCitySampleMenuTabData, Frame), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_Frame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_Frame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_Content_MetaData[] = {
		{ "Category", "CitySampleMenuTabData" },
		{ "Comment", "/** The CitySamplePanel widget representing the tab's content. Can be passed the input from a call to ProcessInput. *///UPROPERTY(EditAnywhere, BlueprintReadOnly)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/CitySampleMenu.h" },
		{ "ToolTip", "The CitySamplePanel widget representing the tab's content. Can be passed the input from a call to ProcessInput. //UPROPERTY(EditAnywhere, BlueprintReadOnly)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x00100000000a201d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCitySampleMenuTabData, Content), Z_Construct_UClass_UCitySamplePanel_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_Content_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputActionDescriptions_ValueProp = { "InputActionDescriptions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputActionDescriptions_Key_KeyProp = { "InputActionDescriptions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputActionDescriptions_MetaData[] = {
		{ "Category", "CitySampleMenuTabData" },
		{ "Comment", "/** Mapping of relevant InputActions to their string description for the controls overlay UI. */" },
		{ "ModuleRelativePath", "UI/CitySampleMenu.h" },
		{ "ToolTip", "Mapping of relevant InputActions to their string description for the controls overlay UI." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputActionDescriptions = { "InputActionDescriptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCitySampleMenuTabData, InputActionDescriptions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputActionDescriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputActionDescriptions_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputKeyDescriptionOverrides_ValueProp = { "InputKeyDescriptionOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputKeyDescriptionOverrides_Key_KeyProp = { "InputKeyDescriptionOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputKeyDescriptionOverrides_MetaData[] = {
		{ "Category", "CitySampleMenuTabData" },
		{ "Comment", "/** Mapping of relevant input keys to their string description for the controls overlay UI. */" },
		{ "ModuleRelativePath", "UI/CitySampleMenu.h" },
		{ "ToolTip", "Mapping of relevant input keys to their string description for the controls overlay UI." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputKeyDescriptionOverrides = { "InputKeyDescriptionOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCitySampleMenuTabData, InputKeyDescriptionOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputKeyDescriptionOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputKeyDescriptionOverrides_MetaData)) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_SelectorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_FrameName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_ContentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_Selector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputActionDescriptions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputActionDescriptions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputActionDescriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputKeyDescriptionOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputKeyDescriptionOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewProp_InputKeyDescriptionOverrides,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"CitySampleMenuTabData",
		sizeof(FCitySampleMenuTabData),
		alignof(FCitySampleMenuTabData),
		Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCitySampleMenuTabData()
	{
		if (!Z_Registration_Info_UScriptStruct_CitySampleMenuTabData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleMenuTabData.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CitySampleMenuTabData.InnerSingleton;
	}
	DEFINE_FUNCTION(UCitySampleMenu::execDecrementTab)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCitySampleMenuTabData*)Z_Param__Result=P_THIS->DecrementTab();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleMenu::execIncrementTab)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCitySampleMenuTabData*)Z_Param__Result=P_THIS->IncrementTab();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleMenu::execSetTab)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCitySampleMenuTabData*)Z_Param__Result=P_THIS->SetTab(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleMenu::execGetCurrentTabIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentTabIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleMenu::execGetCurrentTab)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCitySampleMenuTabData*)Z_Param__Result=P_THIS->GetCurrentTab();
		P_NATIVE_END;
	}
	struct CitySampleMenu_eventOnSetTab_Parms
	{
		FCitySampleMenuTabData PreviousTabData;
		FCitySampleMenuTabData NewTabData;
	};
	static FName NAME_UCitySampleMenu_OnSetTab = FName(TEXT("OnSetTab"));
	void UCitySampleMenu::OnSetTab(FCitySampleMenuTabData const& PreviousTabData, FCitySampleMenuTabData const& NewTabData)
	{
		CitySampleMenu_eventOnSetTab_Parms Parms;
		Parms.PreviousTabData=PreviousTabData;
		Parms.NewTabData=NewTabData;
		ProcessEvent(FindFunctionChecked(NAME_UCitySampleMenu_OnSetTab),&Parms);
	}
	void UCitySampleMenu::StaticRegisterNativesUCitySampleMenu()
	{
		UClass* Class = UCitySampleMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecrementTab", &UCitySampleMenu::execDecrementTab },
			{ "GetCurrentTab", &UCitySampleMenu::execGetCurrentTab },
			{ "GetCurrentTabIndex", &UCitySampleMenu::execGetCurrentTabIndex },
			{ "IncrementTab", &UCitySampleMenu::execIncrementTab },
			{ "SetTab", &UCitySampleMenu::execSetTab },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics
	{
		struct CitySampleMenu_eventDecrementTab_Parms
		{
			FCitySampleMenuTabData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleMenu_eventDecrementTab_Parms, ReturnValue), Z_Construct_UScriptStruct_FCitySampleMenuTabData, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::NewProp_ReturnValue_MetaData)) }; // 1492076236
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "Comment", "/**\n\x09 * Decrements the current tab index and sets the tab to match.\n\x09 * \n\x09 * @note\x09If bWrapAroundTabs is set, this wraps around to the last tab when decrementing from the first tab.\n\x09 *\x09\x09\x09Otherwise clamps to index 0 and sets the current tab to match, if it exists.\n\x09 */" },
		{ "ModuleRelativePath", "UI/CitySampleMenu.h" },
		{ "ToolTip", "Decrements the current tab index and sets the tab to match.\n\n@note        If bWrapAroundTabs is set, this wraps around to the last tab when decrementing from the first tab.\n                     Otherwise clamps to index 0 and sets the current tab to match, if it exists." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMenu, nullptr, "DecrementTab", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::CitySampleMenu_eventDecrementTab_Parms), Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleMenu_DecrementTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMenu_DecrementTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics
	{
		struct CitySampleMenu_eventGetCurrentTab_Parms
		{
			FCitySampleMenuTabData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleMenu_eventGetCurrentTab_Parms, ReturnValue), Z_Construct_UScriptStruct_FCitySampleMenuTabData, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::NewProp_ReturnValue_MetaData)) }; // 1492076236
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "Comment", "/** \n\x09 * Returns the widgets that make up the current tab, some or all widget refs may be null.\n\x09 * \n\x09 * @note\x09""All widget references are guaranteed to be null if the index is invalid, i.e. when there are no tabs. \n\x09 */" },
		{ "ModuleRelativePath", "UI/CitySampleMenu.h" },
		{ "ToolTip", "Returns the widgets that make up the current tab, some or all widget refs may be null.\n\n@note        All widget references are guaranteed to be null if the index is invalid, i.e. when there are no tabs." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMenu, nullptr, "GetCurrentTab", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::CitySampleMenu_eventGetCurrentTab_Parms), Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics
	{
		struct CitySampleMenu_eventGetCurrentTabIndex_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleMenu_eventGetCurrentTabIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "Comment", "/** Gets the current tab index. Defaults to 0, even when there are no tabs. */" },
		{ "ModuleRelativePath", "UI/CitySampleMenu.h" },
		{ "ToolTip", "Gets the current tab index. Defaults to 0, even when there are no tabs." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMenu, nullptr, "GetCurrentTabIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics::CitySampleMenu_eventGetCurrentTabIndex_Parms), Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics
	{
		struct CitySampleMenu_eventIncrementTab_Parms
		{
			FCitySampleMenuTabData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleMenu_eventIncrementTab_Parms, ReturnValue), Z_Construct_UScriptStruct_FCitySampleMenuTabData, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::NewProp_ReturnValue_MetaData)) }; // 1492076236
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "Comment", "/** \n\x09 * Increments the current tab index and sets the tab to match.\n\x09 * \n\x09 * @note\x09If bWrapAroundTabs is set, this wraps around to the first tab when incrementing from the final tab.\n\x09 *\x09\x09\x09Otherwise clamps to the last tab index, or 0 if there are none, and sets the tab to match, if it exists. \n\x09 */" },
		{ "ModuleRelativePath", "UI/CitySampleMenu.h" },
		{ "ToolTip", "Increments the current tab index and sets the tab to match.\n\n@note        If bWrapAroundTabs is set, this wraps around to the first tab when incrementing from the final tab.\n                     Otherwise clamps to the last tab index, or 0 if there are none, and sets the tab to match, if it exists." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMenu, nullptr, "IncrementTab", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::CitySampleMenu_eventIncrementTab_Parms), Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleMenu_IncrementTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMenu_IncrementTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousTabData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousTabData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewTabData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTabData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::NewProp_PreviousTabData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::NewProp_PreviousTabData = { "PreviousTabData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleMenu_eventOnSetTab_Parms, PreviousTabData), Z_Construct_UScriptStruct_FCitySampleMenuTabData, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::NewProp_PreviousTabData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::NewProp_PreviousTabData_MetaData)) }; // 1492076236
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::NewProp_NewTabData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::NewProp_NewTabData = { "NewTabData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleMenu_eventOnSetTab_Parms, NewTabData), Z_Construct_UScriptStruct_FCitySampleMenuTabData, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::NewProp_NewTabData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::NewProp_NewTabData_MetaData)) }; // 1492076236
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::NewProp_PreviousTabData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::NewProp_NewTabData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "Comment", "/** BP hook to handle UI updates when switching between tabs. */" },
		{ "ModuleRelativePath", "UI/CitySampleMenu.h" },
		{ "ToolTip", "BP hook to handle UI updates when switching between tabs." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMenu, nullptr, "OnSetTab", nullptr, nullptr, sizeof(CitySampleMenu_eventOnSetTab_Parms), Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleMenu_OnSetTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMenu_OnSetTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics
	{
		struct CitySampleMenu_eventSetTab_Parms
		{
			int32 Index;
			FCitySampleMenuTabData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleMenu_eventSetTab_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleMenu_eventSetTab_Parms, ReturnValue), Z_Construct_UScriptStruct_FCitySampleMenuTabData, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::NewProp_ReturnValue_MetaData)) }; // 1492076236
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "Comment", "/** Sets the current tab based on the given index, clamped to a valid index in the tabs array, or 0 if there are none. */" },
		{ "ModuleRelativePath", "UI/CitySampleMenu.h" },
		{ "ToolTip", "Sets the current tab based on the given index, clamped to a valid index in the tabs array, or 0 if there are none." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMenu, nullptr, "SetTab", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::CitySampleMenu_eventSetTab_Parms), Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleMenu_SetTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMenu_SetTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleMenu);
	UClass* Z_Construct_UClass_UCitySampleMenu_NoRegister()
	{
		return UCitySampleMenu::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWrapAroundTabs_MetaData[];
#endif
		static void NewProp_bWrapAroundTabs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWrapAroundTabs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tabs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tabs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tabs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingTabIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartingTabIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAdjustZOrderOfTabs_MetaData[];
#endif
		static void NewProp_bAdjustZOrderOfTabs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdjustZOrderOfTabs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTabIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentTabIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCitySamplePanel,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleMenu_DecrementTab, "DecrementTab" }, // 1453456864
		{ &Z_Construct_UFunction_UCitySampleMenu_GetCurrentTab, "GetCurrentTab" }, // 3778970445
		{ &Z_Construct_UFunction_UCitySampleMenu_GetCurrentTabIndex, "GetCurrentTabIndex" }, // 859957711
		{ &Z_Construct_UFunction_UCitySampleMenu_IncrementTab, "IncrementTab" }, // 255900061
		{ &Z_Construct_UFunction_UCitySampleMenu_OnSetTab, "OnSetTab" }, // 4109573009
		{ &Z_Construct_UFunction_UCitySampleMenu_SetTab, "SetTab" }, // 3157619349
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * CitySample Panel base for a tabbed menu, enabling navigating between tabs that optionally contain CitySamplePanel content.\n */" },
		{ "IncludePath", "UI/CitySampleMenu.h" },
		{ "ModuleRelativePath", "UI/CitySampleMenu.h" },
		{ "ToolTip", "CitySample Panel base for a tabbed menu, enabling navigating between tabs that optionally contain CitySamplePanel content." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_bWrapAroundTabs_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/** Whether IncrementTab/DecrementTab should wrap around to the tab at the first/last valid index, if possible. */" },
		{ "ModuleRelativePath", "UI/CitySampleMenu.h" },
		{ "ToolTip", "Whether IncrementTab/DecrementTab should wrap around to the tab at the first/last valid index, if possible." },
	};
#endif
	void Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_bWrapAroundTabs_SetBit(void* Obj)
	{
		((UCitySampleMenu*)Obj)->bWrapAroundTabs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_bWrapAroundTabs = { "bWrapAroundTabs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCitySampleMenu), &Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_bWrapAroundTabs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_bWrapAroundTabs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_bWrapAroundTabs_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_Tabs_Inner = { "Tabs", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCitySampleMenuTabData, METADATA_PARAMS(nullptr, 0) }; // 1492076236
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_Tabs_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/** An array of tab data, specifically an array of widget references that make up a tab (selector, frame, and content). */" },
		{ "ModuleRelativePath", "UI/CitySampleMenu.h" },
		{ "ToolTip", "An array of tab data, specifically an array of widget references that make up a tab (selector, frame, and content)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_Tabs = { "Tabs", nullptr, (EPropertyFlags)0x0020088000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleMenu, Tabs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_Tabs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_Tabs_MetaData)) }; // 1492076236
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_StartingTabIndex_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/CitySampleMenu.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_StartingTabIndex = { "StartingTabIndex", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleMenu, StartingTabIndex), METADATA_PARAMS(Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_StartingTabIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_StartingTabIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_bAdjustZOrderOfTabs_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/** If true, the current tab will have ZOrder=0, the previous tab will have ZOrder=1 and so on. Currently requires tabs to be wrapped with a Canvas Panel. */" },
		{ "ModuleRelativePath", "UI/CitySampleMenu.h" },
		{ "ToolTip", "If true, the current tab will have ZOrder=0, the previous tab will have ZOrder=1 and so on. Currently requires tabs to be wrapped with a Canvas Panel." },
	};
#endif
	void Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_bAdjustZOrderOfTabs_SetBit(void* Obj)
	{
		((UCitySampleMenu*)Obj)->bAdjustZOrderOfTabs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_bAdjustZOrderOfTabs = { "bAdjustZOrderOfTabs", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCitySampleMenu), &Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_bAdjustZOrderOfTabs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_bAdjustZOrderOfTabs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_bAdjustZOrderOfTabs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_CurrentTabIndex_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/** The index of the current tab in the tabs array. */" },
		{ "ModuleRelativePath", "UI/CitySampleMenu.h" },
		{ "ToolTip", "The index of the current tab in the tabs array." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_CurrentTabIndex = { "CurrentTabIndex", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleMenu, CurrentTabIndex), METADATA_PARAMS(Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_CurrentTabIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_CurrentTabIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_bWrapAroundTabs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_Tabs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_Tabs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_StartingTabIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_bAdjustZOrderOfTabs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleMenu_Statics::NewProp_CurrentTabIndex,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCitySampleMenu_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCitySampleControlsOverlayInterface_NoRegister, (int32)VTABLE_OFFSET(UCitySampleMenu, ICitySampleControlsOverlayInterface), false },  // 906653447
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleMenu_Statics::ClassParams = {
		&UCitySampleMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCitySampleMenu_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMenu_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCitySampleMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCitySampleMenu()
	{
		if (!Z_Registration_Info_UClass_UCitySampleMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleMenu.OuterSingleton, Z_Construct_UClass_UCitySampleMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleMenu.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleMenu>()
	{
		return UCitySampleMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleMenu);
	UCitySampleMenu::~UCitySampleMenu() {}
	struct Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMenu_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMenu_h_Statics::ScriptStructInfo[] = {
		{ FCitySampleMenuTabData::StaticStruct, Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics::NewStructOps, TEXT("CitySampleMenuTabData"), &Z_Registration_Info_UScriptStruct_CitySampleMenuTabData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleMenuTabData), 1492076236U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleMenu, UCitySampleMenu::StaticClass, TEXT("UCitySampleMenu"), &Z_Registration_Info_UClass_UCitySampleMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleMenu), 4100400891U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMenu_h_677705936(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMenu_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMenu_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMenu_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
