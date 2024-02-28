// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Util/MyBlueprintFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBlueprintFunctionLibrary() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	DEFINE_FUNCTION(UMyBlueprintFunctionLibrary::execGetSpectatorDisplayResolution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UMyBlueprintFunctionLibrary::GetSpectatorDisplayResolution();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyBlueprintFunctionLibrary::execOffsetCursorWidgetFromMouseLocationForMiddlePivot)
	{
		P_GET_STRUCT(FVector2D,Z_Param_AbsoluteCursorLocation);
		P_GET_STRUCT(FVector2D,Z_Param_TargetResolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UMyBlueprintFunctionLibrary::OffsetCursorWidgetFromMouseLocationForMiddlePivot(Z_Param_AbsoluteCursorLocation,Z_Param_TargetResolution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyBlueprintFunctionLibrary::execGetAbsoluteLocationForCursorWidgetFromMousePosition)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_STRUCT(FVector2D,Z_Param_WidgetSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UMyBlueprintFunctionLibrary::GetAbsoluteLocationForCursorWidgetFromMousePosition(Z_Param_PlayerController,Z_Param_WidgetSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyBlueprintFunctionLibrary::execSaveArrayText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveDirectory);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_TARRAY(FString,Z_Param_SaveText);
		P_GET_UBOOL(Z_Param_AllowOverwriting);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMyBlueprintFunctionLibrary::SaveArrayText(Z_Param_SaveDirectory,Z_Param_FileName,Z_Param_SaveText,Z_Param_AllowOverwriting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyBlueprintFunctionLibrary::execGetCurrentSaveDirectory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMyBlueprintFunctionLibrary::GetCurrentSaveDirectory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyBlueprintFunctionLibrary::execShowSaveDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UMyBlueprintFunctionLibrary::ShowSaveDialog();
		P_NATIVE_END;
	}
	void UMyBlueprintFunctionLibrary::StaticRegisterNativesUMyBlueprintFunctionLibrary()
	{
		UClass* Class = UMyBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAbsoluteLocationForCursorWidgetFromMousePosition", &UMyBlueprintFunctionLibrary::execGetAbsoluteLocationForCursorWidgetFromMousePosition },
			{ "GetCurrentSaveDirectory", &UMyBlueprintFunctionLibrary::execGetCurrentSaveDirectory },
			{ "GetSpectatorDisplayResolution", &UMyBlueprintFunctionLibrary::execGetSpectatorDisplayResolution },
			{ "OffsetCursorWidgetFromMouseLocationForMiddlePivot", &UMyBlueprintFunctionLibrary::execOffsetCursorWidgetFromMouseLocationForMiddlePivot },
			{ "SaveArrayText", &UMyBlueprintFunctionLibrary::execSaveArrayText },
			{ "ShowSaveDialog", &UMyBlueprintFunctionLibrary::execShowSaveDialog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAbsoluteLocationForCursorWidgetFromMousePosition_Statics
	{
		struct MyBlueprintFunctionLibrary_eventGetAbsoluteLocationForCursorWidgetFromMousePosition_Parms
		{
			APlayerController* PlayerController;
			FVector2D WidgetSize;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetSize;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAbsoluteLocationForCursorWidgetFromMousePosition_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventGetAbsoluteLocationForCursorWidgetFromMousePosition_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAbsoluteLocationForCursorWidgetFromMousePosition_Statics::NewProp_WidgetSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAbsoluteLocationForCursorWidgetFromMousePosition_Statics::NewProp_WidgetSize = { "WidgetSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventGetAbsoluteLocationForCursorWidgetFromMousePosition_Parms, WidgetSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAbsoluteLocationForCursorWidgetFromMousePosition_Statics::NewProp_WidgetSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAbsoluteLocationForCursorWidgetFromMousePosition_Statics::NewProp_WidgetSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAbsoluteLocationForCursorWidgetFromMousePosition_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAbsoluteLocationForCursorWidgetFromMousePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventGetAbsoluteLocationForCursorWidgetFromMousePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAbsoluteLocationForCursorWidgetFromMousePosition_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAbsoluteLocationForCursorWidgetFromMousePosition_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAbsoluteLocationForCursorWidgetFromMousePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAbsoluteLocationForCursorWidgetFromMousePosition_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAbsoluteLocationForCursorWidgetFromMousePosition_Statics::NewProp_WidgetSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAbsoluteLocationForCursorWidgetFromMousePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAbsoluteLocationForCursorWidgetFromMousePosition_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Calculates the expected cursor position from a viewport of some size to a widget of some size.\n*\n* @param PlayerController The player controller reference from which to get the mouse position.\n* @param WidgetSize The size of the widget for which the cursor position should be calculated.\n* @return Returns the \"absolute\" location for the widget as a FVector2D offset from the widget origin of 0,0 (top left corner).\n*/" },
		{ "CPP_Default_WidgetSize", "(X=1920.000,Y=1080.000)" },
		{ "ModuleRelativePath", "Util/MyBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Calculates the expected cursor position from a viewport of some size to a widget of some size.\n\n@param PlayerController The player controller reference from which to get the mouse position.\n@param WidgetSize The size of the widget for which the cursor position should be calculated.\n@return Returns the \"absolute\" location for the widget as a FVector2D offset from the widget origin of 0,0 (top left corner)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAbsoluteLocationForCursorWidgetFromMousePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "GetAbsoluteLocationForCursorWidgetFromMousePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAbsoluteLocationForCursorWidgetFromMousePosition_Statics::MyBlueprintFunctionLibrary_eventGetAbsoluteLocationForCursorWidgetFromMousePosition_Parms), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAbsoluteLocationForCursorWidgetFromMousePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAbsoluteLocationForCursorWidgetFromMousePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14842401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAbsoluteLocationForCursorWidgetFromMousePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAbsoluteLocationForCursorWidgetFromMousePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAbsoluteLocationForCursorWidgetFromMousePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAbsoluteLocationForCursorWidgetFromMousePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetCurrentSaveDirectory_Statics
	{
		struct MyBlueprintFunctionLibrary_eventGetCurrentSaveDirectory_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetCurrentSaveDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventGetCurrentSaveDirectory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetCurrentSaveDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetCurrentSaveDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetCurrentSaveDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logging" },
		{ "ModuleRelativePath", "Util/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetCurrentSaveDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "GetCurrentSaveDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetCurrentSaveDirectory_Statics::MyBlueprintFunctionLibrary_eventGetCurrentSaveDirectory_Parms), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetCurrentSaveDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetCurrentSaveDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetCurrentSaveDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetCurrentSaveDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetCurrentSaveDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetCurrentSaveDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetSpectatorDisplayResolution_Statics
	{
		struct MyBlueprintFunctionLibrary_eventGetSpectatorDisplayResolution_Parms
		{
			FVector2D ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetSpectatorDisplayResolution_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetSpectatorDisplayResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventGetSpectatorDisplayResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetSpectatorDisplayResolution_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetSpectatorDisplayResolution_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetSpectatorDisplayResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetSpectatorDisplayResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetSpectatorDisplayResolution_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Gets the spectator display resolution for both in editor and in game\n\x09*\n\x09* @return The display resolution.\n\x09*/" },
		{ "ModuleRelativePath", "Util/MyBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Gets the spectator display resolution for both in editor and in game\n\n@return The display resolution." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetSpectatorDisplayResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "GetSpectatorDisplayResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetSpectatorDisplayResolution_Statics::MyBlueprintFunctionLibrary_eventGetSpectatorDisplayResolution_Parms), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetSpectatorDisplayResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetSpectatorDisplayResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14842401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetSpectatorDisplayResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetSpectatorDisplayResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetSpectatorDisplayResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetSpectatorDisplayResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics
	{
		struct MyBlueprintFunctionLibrary_eventOffsetCursorWidgetFromMouseLocationForMiddlePivot_Parms
		{
			FVector2D AbsoluteCursorLocation;
			FVector2D TargetResolution;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsoluteCursorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbsoluteCursorLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetResolution;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics::NewProp_AbsoluteCursorLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics::NewProp_AbsoluteCursorLocation = { "AbsoluteCursorLocation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventOffsetCursorWidgetFromMouseLocationForMiddlePivot_Parms, AbsoluteCursorLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics::NewProp_AbsoluteCursorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics::NewProp_AbsoluteCursorLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics::NewProp_TargetResolution_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics::NewProp_TargetResolution = { "TargetResolution", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventOffsetCursorWidgetFromMouseLocationForMiddlePivot_Parms, TargetResolution), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics::NewProp_TargetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics::NewProp_TargetResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventOffsetCursorWidgetFromMouseLocationForMiddlePivot_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics::NewProp_AbsoluteCursorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics::NewProp_TargetResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Retargets a cursor's absolute position to a 3D widget given that in order for widget interaction to work correctly, the widget component should have a pivot of (0.5, 0.5).\n\x09*\n\x09* @param AbsoluteCursorLocation The position of the cursor as an offset from the widget origin.\n\x09* @param TargetResolution The target resolution of the widget.\n\x09* @return The cursor location corrected for the pivot offset.\n\x09*/" },
		{ "CPP_Default_TargetResolution", "(X=1920.000,Y=1080.000)" },
		{ "ModuleRelativePath", "Util/MyBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Retargets a cursor's absolute position to a 3D widget given that in order for widget interaction to work correctly, the widget component should have a pivot of (0.5, 0.5).\n\n@param AbsoluteCursorLocation The position of the cursor as an offset from the widget origin.\n@param TargetResolution The target resolution of the widget.\n@return The cursor location corrected for the pivot offset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "OffsetCursorWidgetFromMouseLocationForMiddlePivot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics::MyBlueprintFunctionLibrary_eventOffsetCursorWidgetFromMouseLocationForMiddlePivot_Parms), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14842401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics
	{
		struct MyBlueprintFunctionLibrary_eventSaveArrayText_Parms
		{
			FString SaveDirectory;
			FString FileName;
			TArray<FString> SaveText;
			bool AllowOverwriting;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveDirectory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveText_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SaveText;
		static void NewProp_AllowOverwriting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowOverwriting;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::NewProp_SaveDirectory = { "SaveDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventSaveArrayText_Parms, SaveDirectory), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventSaveArrayText_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::NewProp_SaveText_Inner = { "SaveText", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::NewProp_SaveText = { "SaveText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventSaveArrayText_Parms, SaveText), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::NewProp_AllowOverwriting_SetBit(void* Obj)
	{
		((MyBlueprintFunctionLibrary_eventSaveArrayText_Parms*)Obj)->AllowOverwriting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::NewProp_AllowOverwriting = { "AllowOverwriting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MyBlueprintFunctionLibrary_eventSaveArrayText_Parms), &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::NewProp_AllowOverwriting_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyBlueprintFunctionLibrary_eventSaveArrayText_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MyBlueprintFunctionLibrary_eventSaveArrayText_Parms), &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::NewProp_SaveDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::NewProp_SaveText_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::NewProp_SaveText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::NewProp_AllowOverwriting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logging" },
		{ "ModuleRelativePath", "Util/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "SaveArrayText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::MyBlueprintFunctionLibrary_eventSaveArrayText_Parms), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_ShowSaveDialog_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_ShowSaveDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logging" },
		{ "ModuleRelativePath", "Util/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_ShowSaveDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "ShowSaveDialog", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_ShowSaveDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_ShowSaveDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_ShowSaveDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_ShowSaveDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister()
	{
		return UMyBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetAbsoluteLocationForCursorWidgetFromMousePosition, "GetAbsoluteLocationForCursorWidgetFromMousePosition" }, // 858264058
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetCurrentSaveDirectory, "GetCurrentSaveDirectory" }, // 697738005
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_GetSpectatorDisplayResolution, "GetSpectatorDisplayResolution" }, // 1051143969
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OffsetCursorWidgetFromMouseLocationForMiddlePivot, "OffsetCursorWidgetFromMouseLocationForMiddlePivot" }, // 2587416685
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveArrayText, "SaveArrayText" }, // 321008549
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_ShowSaveDialog, "ShowSaveDialog" }, // 3912606098
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Util/MyBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Util/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::ClassParams = {
		&UMyBlueprintFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UMyBlueprintFunctionLibrary>()
	{
		return UMyBlueprintFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBlueprintFunctionLibrary);
	UMyBlueprintFunctionLibrary::~UMyBlueprintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Util_MyBlueprintFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Util_MyBlueprintFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyBlueprintFunctionLibrary, UMyBlueprintFunctionLibrary::StaticClass, TEXT("UMyBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UMyBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBlueprintFunctionLibrary), 1522966952U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Util_MyBlueprintFunctionLibrary_h_2668460357(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Util_MyBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Util_MyBlueprintFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
