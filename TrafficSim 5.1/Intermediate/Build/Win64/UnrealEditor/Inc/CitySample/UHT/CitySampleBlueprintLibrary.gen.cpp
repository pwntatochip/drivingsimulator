// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Util/CitySampleBlueprintLibrary.h"
#include "CitySample/Util/CitySampleInterpolators.h"
#include "ZoneGraph/Public/ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleBlueprintLibrary() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleCharacter_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleGameMode_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleGameState_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySamplePlayerController_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleWorldInfo_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleBlueprintLibrary();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleBlueprintLibrary_NoRegister();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_EDeviceProfileOverrideMode();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_EPlayerTraversalState();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FAccelerationInterpolatorVector();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorFloat();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorRotator();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CitySample();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTag();
// End Cross Module References
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execEvalDoubleIIRInterpolatorRotator)
	{
		P_GET_STRUCT_REF(FIIRInterpolatorRotator,Z_Param_Out_Interpolator);
		P_GET_STRUCT(FRotator,Z_Param_NewGoal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UCitySampleBlueprintLibrary::EvalDoubleIIRInterpolatorRotator(Z_Param_Out_Interpolator,Z_Param_NewGoal,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execEvalDoubleIIRInterpolatorVector)
	{
		P_GET_STRUCT_REF(FDoubleIIRInterpolatorVector,Z_Param_Out_Interpolator);
		P_GET_STRUCT(FVector,Z_Param_NewGoal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UCitySampleBlueprintLibrary::EvalDoubleIIRInterpolatorVector(Z_Param_Out_Interpolator,Z_Param_NewGoal,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execEvaIIRInterpolatorRotator)
	{
		P_GET_STRUCT_REF(FIIRInterpolatorRotator,Z_Param_Out_Interpolator);
		P_GET_STRUCT(FRotator,Z_Param_NewGoal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UCitySampleBlueprintLibrary::EvaIIRInterpolatorRotator(Z_Param_Out_Interpolator,Z_Param_NewGoal,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execEvalIIRInterpolatorVector)
	{
		P_GET_STRUCT_REF(FIIRInterpolatorVector,Z_Param_Out_Interpolator);
		P_GET_STRUCT(FVector,Z_Param_NewGoal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UCitySampleBlueprintLibrary::EvalIIRInterpolatorVector(Z_Param_Out_Interpolator,Z_Param_NewGoal,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execEvalIIRInterpolatorFloat)
	{
		P_GET_STRUCT_REF(FIIRInterpolatorFloat,Z_Param_Out_Interpolator);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewGoal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UCitySampleBlueprintLibrary::EvalIIRInterpolatorFloat(Z_Param_Out_Interpolator,Z_Param_NewGoal,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execEvalAccelInterpolatorRotator)
	{
		P_GET_STRUCT_REF(FAccelerationInterpolatorRotator,Z_Param_Out_Interpolator);
		P_GET_STRUCT(FRotator,Z_Param_NewGoal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UCitySampleBlueprintLibrary::EvalAccelInterpolatorRotator(Z_Param_Out_Interpolator,Z_Param_NewGoal,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execEvalAccelInterpolatorVector)
	{
		P_GET_STRUCT_REF(FAccelerationInterpolatorVector,Z_Param_Out_Interpolator);
		P_GET_STRUCT(FVector,Z_Param_NewGoal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UCitySampleBlueprintLibrary::EvalAccelInterpolatorVector(Z_Param_Out_Interpolator,Z_Param_NewGoal,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execEvalAccelInterpolatorFloat)
	{
		P_GET_STRUCT_REF(FAccelerationInterpolatorFloat,Z_Param_Out_Interpolator);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewGoal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UCitySampleBlueprintLibrary::EvalAccelInterpolatorFloat(Z_Param_Out_Interpolator,Z_Param_NewGoal,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execFindNearestLaneLocationByTags)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FTransform,Z_Param_InPoint);
		P_GET_TARRAY_REF(FZoneGraphTag,Z_Param_Out_Tags);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutPoint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCitySampleBlueprintLibrary::FindNearestLaneLocationByTags(Z_Param_WorldContextObject,Z_Param_InPoint,Z_Param_Out_Tags,Z_Param_Out_OutPoint,Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execFindNearestLaneLocationByNames)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FTransform,Z_Param_InPoint);
		P_GET_TARRAY_REF(FName,Z_Param_Out_LaneNames);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutPoint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCitySampleBlueprintLibrary::FindNearestLaneLocationByNames(Z_Param_WorldContextObject,Z_Param_InPoint,Z_Param_Out_LaneNames,Z_Param_Out_OutPoint,Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execFindNearestLaneLocationByTag)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FTransform,Z_Param_InPoint);
		P_GET_STRUCT(FZoneGraphTag,Z_Param_Tag);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutPoint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCitySampleBlueprintLibrary::FindNearestLaneLocationByTag(Z_Param_WorldContextObject,Z_Param_InPoint,Z_Param_Tag,Z_Param_Out_OutPoint,Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execFindNearestLaneLocationByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FTransform,Z_Param_InPoint);
		P_GET_PROPERTY(FNameProperty,Z_Param_LaneName);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutPoint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCitySampleBlueprintLibrary::FindNearestLaneLocationByName(Z_Param_WorldContextObject,Z_Param_InPoint,Z_Param_LaneName,Z_Param_Out_OutPoint,Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execIsMassVisualizationEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCitySampleBlueprintLibrary::IsMassVisualizationEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execGetWorldInfo)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACitySampleWorldInfo**)Z_Param__Result=UCitySampleBlueprintLibrary::GetWorldInfo(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execIsPlayerOfTraversalType)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_ENUM(EPlayerTraversalState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACitySamplePlayerController**)Z_Param__Result=UCitySampleBlueprintLibrary::IsPlayerOfTraversalType(Z_Param_InActor,EPlayerTraversalState(Z_Param_State));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execGetCitySampleGameState)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACitySampleGameState**)Z_Param__Result=UCitySampleBlueprintLibrary::GetCitySampleGameState(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execGetCitySampleGameMode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACitySampleGameMode**)Z_Param__Result=UCitySampleBlueprintLibrary::GetCitySampleGameMode(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execGetCitySamplePlayerCharacter)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACitySampleCharacter**)Z_Param__Result=UCitySampleBlueprintLibrary::GetCitySamplePlayerCharacter(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execGetCitySamplePlayerController)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACitySamplePlayerController**)Z_Param__Result=UCitySampleBlueprintLibrary::GetCitySamplePlayerController(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execApplyDefaultLoadingSettings)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleBlueprintLibrary::ApplyDefaultLoadingSettings(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execRestoreDefaultDeviceProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleBlueprintLibrary::RestoreDefaultDeviceProfile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execOverrideDeviceProfileForMode)
	{
		P_GET_ENUM(EDeviceProfileOverrideMode,Z_Param_NewMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleBlueprintLibrary::OverrideDeviceProfileForMode(EDeviceProfileOverrideMode(Z_Param_NewMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execGetBaseDeviceProfileName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UCitySampleBlueprintLibrary::GetBaseDeviceProfileName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execGetActiveDeviceProfileName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UCitySampleBlueprintLibrary::GetActiveDeviceProfileName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execLogCSVEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleBlueprintLibrary::LogCSVEvent(Z_Param_EventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execLogCitySampleDebugMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCitySampleBlueprintLibrary::LogCitySampleDebugMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleBlueprintLibrary::execGetVersionString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UCitySampleBlueprintLibrary::GetVersionString();
		P_NATIVE_END;
	}
	void UCitySampleBlueprintLibrary::StaticRegisterNativesUCitySampleBlueprintLibrary()
	{
		UClass* Class = UCitySampleBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDefaultLoadingSettings", &UCitySampleBlueprintLibrary::execApplyDefaultLoadingSettings },
			{ "EvaIIRInterpolatorRotator", &UCitySampleBlueprintLibrary::execEvaIIRInterpolatorRotator },
			{ "EvalAccelInterpolatorFloat", &UCitySampleBlueprintLibrary::execEvalAccelInterpolatorFloat },
			{ "EvalAccelInterpolatorRotator", &UCitySampleBlueprintLibrary::execEvalAccelInterpolatorRotator },
			{ "EvalAccelInterpolatorVector", &UCitySampleBlueprintLibrary::execEvalAccelInterpolatorVector },
			{ "EvalDoubleIIRInterpolatorRotator", &UCitySampleBlueprintLibrary::execEvalDoubleIIRInterpolatorRotator },
			{ "EvalDoubleIIRInterpolatorVector", &UCitySampleBlueprintLibrary::execEvalDoubleIIRInterpolatorVector },
			{ "EvalIIRInterpolatorFloat", &UCitySampleBlueprintLibrary::execEvalIIRInterpolatorFloat },
			{ "EvalIIRInterpolatorVector", &UCitySampleBlueprintLibrary::execEvalIIRInterpolatorVector },
			{ "FindNearestLaneLocationByName", &UCitySampleBlueprintLibrary::execFindNearestLaneLocationByName },
			{ "FindNearestLaneLocationByNames", &UCitySampleBlueprintLibrary::execFindNearestLaneLocationByNames },
			{ "FindNearestLaneLocationByTag", &UCitySampleBlueprintLibrary::execFindNearestLaneLocationByTag },
			{ "FindNearestLaneLocationByTags", &UCitySampleBlueprintLibrary::execFindNearestLaneLocationByTags },
			{ "GetActiveDeviceProfileName", &UCitySampleBlueprintLibrary::execGetActiveDeviceProfileName },
			{ "GetBaseDeviceProfileName", &UCitySampleBlueprintLibrary::execGetBaseDeviceProfileName },
			{ "GetCitySampleGameMode", &UCitySampleBlueprintLibrary::execGetCitySampleGameMode },
			{ "GetCitySampleGameState", &UCitySampleBlueprintLibrary::execGetCitySampleGameState },
			{ "GetCitySamplePlayerCharacter", &UCitySampleBlueprintLibrary::execGetCitySamplePlayerCharacter },
			{ "GetCitySamplePlayerController", &UCitySampleBlueprintLibrary::execGetCitySamplePlayerController },
			{ "GetVersionString", &UCitySampleBlueprintLibrary::execGetVersionString },
			{ "GetWorldInfo", &UCitySampleBlueprintLibrary::execGetWorldInfo },
			{ "IsMassVisualizationEnabled", &UCitySampleBlueprintLibrary::execIsMassVisualizationEnabled },
			{ "IsPlayerOfTraversalType", &UCitySampleBlueprintLibrary::execIsPlayerOfTraversalType },
			{ "LogCitySampleDebugMessage", &UCitySampleBlueprintLibrary::execLogCitySampleDebugMessage },
			{ "LogCSVEvent", &UCitySampleBlueprintLibrary::execLogCSVEvent },
			{ "OverrideDeviceProfileForMode", &UCitySampleBlueprintLibrary::execOverrideDeviceProfileForMode },
			{ "RestoreDefaultDeviceProfile", &UCitySampleBlueprintLibrary::execRestoreDefaultDeviceProfile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_ApplyDefaultLoadingSettings_Statics
	{
		struct CitySampleBlueprintLibrary_eventApplyDefaultLoadingSettings_Parms
		{
			UObject* WorldContextObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_ApplyDefaultLoadingSettings_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventApplyDefaultLoadingSettings_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_ApplyDefaultLoadingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_ApplyDefaultLoadingSettings_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_ApplyDefaultLoadingSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample|World Partition Streaming" },
		{ "Comment", "/** Sets the default loading settings based on current platform profile. */" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
		{ "ToolTip", "Sets the default loading settings based on current platform profile." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_ApplyDefaultLoadingSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "ApplyDefaultLoadingSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_ApplyDefaultLoadingSettings_Statics::CitySampleBlueprintLibrary_eventApplyDefaultLoadingSettings_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_ApplyDefaultLoadingSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_ApplyDefaultLoadingSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_ApplyDefaultLoadingSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_ApplyDefaultLoadingSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_ApplyDefaultLoadingSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_ApplyDefaultLoadingSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvaIIRInterpolatorRotator_Statics
	{
		struct CitySampleBlueprintLibrary_eventEvaIIRInterpolatorRotator_Parms
		{
			FIIRInterpolatorRotator Interpolator;
			FRotator NewGoal;
			float DeltaTime;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGoal;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvaIIRInterpolatorRotator_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvaIIRInterpolatorRotator_Parms, Interpolator), Z_Construct_UScriptStruct_FIIRInterpolatorRotator, METADATA_PARAMS(nullptr, 0) }; // 2968566194
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvaIIRInterpolatorRotator_Statics::NewProp_NewGoal = { "NewGoal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvaIIRInterpolatorRotator_Parms, NewGoal), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvaIIRInterpolatorRotator_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvaIIRInterpolatorRotator_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvaIIRInterpolatorRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvaIIRInterpolatorRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvaIIRInterpolatorRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvaIIRInterpolatorRotator_Statics::NewProp_Interpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvaIIRInterpolatorRotator_Statics::NewProp_NewGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvaIIRInterpolatorRotator_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvaIIRInterpolatorRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvaIIRInterpolatorRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvaIIRInterpolatorRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "EvaIIRInterpolatorRotator", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvaIIRInterpolatorRotator_Statics::CitySampleBlueprintLibrary_eventEvaIIRInterpolatorRotator_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvaIIRInterpolatorRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvaIIRInterpolatorRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvaIIRInterpolatorRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvaIIRInterpolatorRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvaIIRInterpolatorRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvaIIRInterpolatorRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorFloat_Statics
	{
		struct CitySampleBlueprintLibrary_eventEvalAccelInterpolatorFloat_Parms
		{
			FAccelerationInterpolatorFloat Interpolator;
			float NewGoal;
			float DeltaTime;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewGoal;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorFloat_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalAccelInterpolatorFloat_Parms, Interpolator), Z_Construct_UScriptStruct_FAccelerationInterpolatorFloat, METADATA_PARAMS(nullptr, 0) }; // 171372712
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorFloat_Statics::NewProp_NewGoal = { "NewGoal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalAccelInterpolatorFloat_Parms, NewGoal), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorFloat_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalAccelInterpolatorFloat_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalAccelInterpolatorFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorFloat_Statics::NewProp_Interpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorFloat_Statics::NewProp_NewGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorFloat_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// Interpolators\n" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
		{ "ToolTip", "Interpolators" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "EvalAccelInterpolatorFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorFloat_Statics::CitySampleBlueprintLibrary_eventEvalAccelInterpolatorFloat_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorRotator_Statics
	{
		struct CitySampleBlueprintLibrary_eventEvalAccelInterpolatorRotator_Parms
		{
			FAccelerationInterpolatorRotator Interpolator;
			FRotator NewGoal;
			float DeltaTime;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGoal;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorRotator_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalAccelInterpolatorRotator_Parms, Interpolator), Z_Construct_UScriptStruct_FAccelerationInterpolatorRotator, METADATA_PARAMS(nullptr, 0) }; // 1051981463
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorRotator_Statics::NewProp_NewGoal = { "NewGoal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalAccelInterpolatorRotator_Parms, NewGoal), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorRotator_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalAccelInterpolatorRotator_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalAccelInterpolatorRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorRotator_Statics::NewProp_Interpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorRotator_Statics::NewProp_NewGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorRotator_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "EvalAccelInterpolatorRotator", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorRotator_Statics::CitySampleBlueprintLibrary_eventEvalAccelInterpolatorRotator_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorVector_Statics
	{
		struct CitySampleBlueprintLibrary_eventEvalAccelInterpolatorVector_Parms
		{
			FAccelerationInterpolatorVector Interpolator;
			FVector NewGoal;
			float DeltaTime;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGoal;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorVector_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalAccelInterpolatorVector_Parms, Interpolator), Z_Construct_UScriptStruct_FAccelerationInterpolatorVector, METADATA_PARAMS(nullptr, 0) }; // 4167640084
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorVector_Statics::NewProp_NewGoal = { "NewGoal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalAccelInterpolatorVector_Parms, NewGoal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorVector_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalAccelInterpolatorVector_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalAccelInterpolatorVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorVector_Statics::NewProp_Interpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorVector_Statics::NewProp_NewGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorVector_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "EvalAccelInterpolatorVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorVector_Statics::CitySampleBlueprintLibrary_eventEvalAccelInterpolatorVector_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorRotator_Statics
	{
		struct CitySampleBlueprintLibrary_eventEvalDoubleIIRInterpolatorRotator_Parms
		{
			FIIRInterpolatorRotator Interpolator;
			FRotator NewGoal;
			float DeltaTime;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGoal;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorRotator_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalDoubleIIRInterpolatorRotator_Parms, Interpolator), Z_Construct_UScriptStruct_FIIRInterpolatorRotator, METADATA_PARAMS(nullptr, 0) }; // 2968566194
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorRotator_Statics::NewProp_NewGoal = { "NewGoal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalDoubleIIRInterpolatorRotator_Parms, NewGoal), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorRotator_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalDoubleIIRInterpolatorRotator_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalDoubleIIRInterpolatorRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorRotator_Statics::NewProp_Interpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorRotator_Statics::NewProp_NewGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorRotator_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "EvalDoubleIIRInterpolatorRotator", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorRotator_Statics::CitySampleBlueprintLibrary_eventEvalDoubleIIRInterpolatorRotator_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorVector_Statics
	{
		struct CitySampleBlueprintLibrary_eventEvalDoubleIIRInterpolatorVector_Parms
		{
			FDoubleIIRInterpolatorVector Interpolator;
			FVector NewGoal;
			float DeltaTime;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGoal;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorVector_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalDoubleIIRInterpolatorVector_Parms, Interpolator), Z_Construct_UScriptStruct_FDoubleIIRInterpolatorVector, METADATA_PARAMS(nullptr, 0) }; // 145096914
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorVector_Statics::NewProp_NewGoal = { "NewGoal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalDoubleIIRInterpolatorVector_Parms, NewGoal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorVector_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalDoubleIIRInterpolatorVector_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalDoubleIIRInterpolatorVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorVector_Statics::NewProp_Interpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorVector_Statics::NewProp_NewGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorVector_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "EvalDoubleIIRInterpolatorVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorVector_Statics::CitySampleBlueprintLibrary_eventEvalDoubleIIRInterpolatorVector_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorFloat_Statics
	{
		struct CitySampleBlueprintLibrary_eventEvalIIRInterpolatorFloat_Parms
		{
			FIIRInterpolatorFloat Interpolator;
			float NewGoal;
			float DeltaTime;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewGoal;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorFloat_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalIIRInterpolatorFloat_Parms, Interpolator), Z_Construct_UScriptStruct_FIIRInterpolatorFloat, METADATA_PARAMS(nullptr, 0) }; // 3579112660
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorFloat_Statics::NewProp_NewGoal = { "NewGoal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalIIRInterpolatorFloat_Parms, NewGoal), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorFloat_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalIIRInterpolatorFloat_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalIIRInterpolatorFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorFloat_Statics::NewProp_Interpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorFloat_Statics::NewProp_NewGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorFloat_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "EvalIIRInterpolatorFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorFloat_Statics::CitySampleBlueprintLibrary_eventEvalIIRInterpolatorFloat_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorVector_Statics
	{
		struct CitySampleBlueprintLibrary_eventEvalIIRInterpolatorVector_Parms
		{
			FIIRInterpolatorVector Interpolator;
			FVector NewGoal;
			float DeltaTime;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Interpolator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewGoal;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorVector_Statics::NewProp_Interpolator = { "Interpolator", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalIIRInterpolatorVector_Parms, Interpolator), Z_Construct_UScriptStruct_FIIRInterpolatorVector, METADATA_PARAMS(nullptr, 0) }; // 4156365342
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorVector_Statics::NewProp_NewGoal = { "NewGoal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalIIRInterpolatorVector_Parms, NewGoal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorVector_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalIIRInterpolatorVector_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventEvalIIRInterpolatorVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorVector_Statics::NewProp_Interpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorVector_Statics::NewProp_NewGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorVector_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "EvalIIRInterpolatorVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorVector_Statics::CitySampleBlueprintLibrary_eventEvalIIRInterpolatorVector_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName_Statics
	{
		struct CitySampleBlueprintLibrary_eventFindNearestLaneLocationByName_Parms
		{
			UObject* WorldContextObject;
			FTransform InPoint;
			FName LaneName;
			FTransform OutPoint;
			float Radius;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LaneName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoint;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventFindNearestLaneLocationByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventFindNearestLaneLocationByName_Parms, InPoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName_Statics::NewProp_LaneName = { "LaneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventFindNearestLaneLocationByName_Parms, LaneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName_Statics::NewProp_OutPoint = { "OutPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventFindNearestLaneLocationByName_Parms, OutPoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventFindNearestLaneLocationByName_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleBlueprintLibrary_eventFindNearestLaneLocationByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CitySampleBlueprintLibrary_eventFindNearestLaneLocationByName_Parms), &Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName_Statics::NewProp_InPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName_Statics::NewProp_LaneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName_Statics::NewProp_OutPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample|Navigation" },
		{ "Comment", "/**\n\x09 * Given a point, we will first try to find the nearest pedestrian lane, and then we will try to find\n\x09 * the nearest point on that lane. Useful for spawning actors.\n\x09 *\n\x09 * @param [in]\x09InPoint\x09\x09The point we are using to find the lane.\n\x09 * @param [in]\x09LaneName\x09The name associated with the ZoneGraphTag that we should search for.\n\x09 *\x09\x09\x09\x09\x09\x09\x09When invalid, we'll query all available lane types.\n\x09 * @param [out]\x09OutPoint\x09The point on the lane we found. Only valid if the method return success.\n\x09 * @param [in]\x09Radius\x09\x09The radius / bounds length from InPoint where we'll search for the lane.\n\x09 *\n\x09 * @return True if we found an appropriate lane and location, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
		{ "ToolTip", "Given a point, we will first try to find the nearest pedestrian lane, and then we will try to find\nthe nearest point on that lane. Useful for spawning actors.\n\n@param [in]  InPoint         The point we are using to find the lane.\n@param [in]  LaneName        The name associated with the ZoneGraphTag that we should search for.\n                                                     When invalid, we'll query all available lane types.\n@param [out] OutPoint        The point on the lane we found. Only valid if the method return success.\n@param [in]  Radius          The radius / bounds length from InPoint where we'll search for the lane.\n\n@return True if we found an appropriate lane and location, false otherwise." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "FindNearestLaneLocationByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName_Statics::CitySampleBlueprintLibrary_eventFindNearestLaneLocationByName_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics
	{
		struct CitySampleBlueprintLibrary_eventFindNearestLaneLocationByNames_Parms
		{
			UObject* WorldContextObject;
			FTransform InPoint;
			TArray<FName> LaneNames;
			FTransform OutPoint;
			float Radius;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LaneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LaneNames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoint;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventFindNearestLaneLocationByNames_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventFindNearestLaneLocationByNames_Parms, InPoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::NewProp_LaneNames_Inner = { "LaneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::NewProp_LaneNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::NewProp_LaneNames = { "LaneNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventFindNearestLaneLocationByNames_Parms, LaneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::NewProp_LaneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::NewProp_LaneNames_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::NewProp_OutPoint = { "OutPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventFindNearestLaneLocationByNames_Parms, OutPoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventFindNearestLaneLocationByNames_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleBlueprintLibrary_eventFindNearestLaneLocationByNames_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CitySampleBlueprintLibrary_eventFindNearestLaneLocationByNames_Parms), &Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::NewProp_InPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::NewProp_LaneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::NewProp_LaneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::NewProp_OutPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample|Navigation" },
		{ "Comment", "/**\n\x09 * Given a point, we will first try to find the nearest pedestrian lane, and then we will try to find\n\x09 * the nearest point on that lane. Useful for spawning actors.\n\x09 *\n\x09 * @param [in]\x09InPoint\x09\x09The point we are using to find the lane.\n\x09 * @param [in]\x09LaneNames\x09""An array of names associated with the ZoneGraphTag that we should search for.\n\x09 *\x09\x09\x09\x09\x09\x09\x09When empty, we'll query all available lane types.\n\x09 * @param [out]\x09OutPoint\x09The point on the lane we found. Only valid if the method return success.\n\x09 * @param [in]\x09Radius\x09\x09The radius / bounds length from InPoint where we'll search for the lane.\n\x09 *\n\x09 * @return True if we found an appropriate lane and location, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
		{ "ToolTip", "Given a point, we will first try to find the nearest pedestrian lane, and then we will try to find\nthe nearest point on that lane. Useful for spawning actors.\n\n@param [in]  InPoint         The point we are using to find the lane.\n@param [in]  LaneNames       An array of names associated with the ZoneGraphTag that we should search for.\n                                                     When empty, we'll query all available lane types.\n@param [out] OutPoint        The point on the lane we found. Only valid if the method return success.\n@param [in]  Radius          The radius / bounds length from InPoint where we'll search for the lane.\n\n@return True if we found an appropriate lane and location, false otherwise." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "FindNearestLaneLocationByNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::CitySampleBlueprintLibrary_eventFindNearestLaneLocationByNames_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag_Statics
	{
		struct CitySampleBlueprintLibrary_eventFindNearestLaneLocationByTag_Parms
		{
			UObject* WorldContextObject;
			FTransform InPoint;
			FZoneGraphTag Tag;
			FTransform OutPoint;
			float Radius;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoint;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventFindNearestLaneLocationByTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventFindNearestLaneLocationByTag_Parms, InPoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventFindNearestLaneLocationByTag_Parms, Tag), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(nullptr, 0) }; // 1504622355
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag_Statics::NewProp_OutPoint = { "OutPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventFindNearestLaneLocationByTag_Parms, OutPoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventFindNearestLaneLocationByTag_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleBlueprintLibrary_eventFindNearestLaneLocationByTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CitySampleBlueprintLibrary_eventFindNearestLaneLocationByTag_Parms), &Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag_Statics::NewProp_InPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag_Statics::NewProp_OutPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample|Navigation" },
		{ "Comment", "/**\n\x09 * Given a point, we will first try to find the nearest pedestrian lane, and then we will try to find\n\x09 * the nearest point on that lane. Useful for spawning actors.\n\x09 *\n\x09 * @param [in]\x09InPoint\x09\x09The point we are using to find the lane.\n\x09 * @param [in]\x09Tag\x09The tag associated with the ZoneGraphTag that we search for.\n\x09 * @param [out]\x09OutPoint\x09The point on the lane we found. Only valid if the method return success.\n\x09 * @param [in]\x09Radius\x09\x09The radius / bounds length from InPoint where we'll search for the lane.\n\x09 *\n\x09 * @return True if we found an appropriate lane and location, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
		{ "ToolTip", "Given a point, we will first try to find the nearest pedestrian lane, and then we will try to find\nthe nearest point on that lane. Useful for spawning actors.\n\n@param [in]  InPoint         The point we are using to find the lane.\n@param [in]  Tag     The tag associated with the ZoneGraphTag that we search for.\n@param [out] OutPoint        The point on the lane we found. Only valid if the method return success.\n@param [in]  Radius          The radius / bounds length from InPoint where we'll search for the lane.\n\n@return True if we found an appropriate lane and location, false otherwise." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "FindNearestLaneLocationByTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag_Statics::CitySampleBlueprintLibrary_eventFindNearestLaneLocationByTag_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics
	{
		struct CitySampleBlueprintLibrary_eventFindNearestLaneLocationByTags_Parms
		{
			UObject* WorldContextObject;
			FTransform InPoint;
			TArray<FZoneGraphTag> Tags;
			FTransform OutPoint;
			float Radius;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoint;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventFindNearestLaneLocationByTags_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventFindNearestLaneLocationByTags_Parms, InPoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(nullptr, 0) }; // 1504622355
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventFindNearestLaneLocationByTags_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::NewProp_Tags_MetaData)) }; // 1504622355
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::NewProp_OutPoint = { "OutPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventFindNearestLaneLocationByTags_Parms, OutPoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventFindNearestLaneLocationByTags_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleBlueprintLibrary_eventFindNearestLaneLocationByTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CitySampleBlueprintLibrary_eventFindNearestLaneLocationByTags_Parms), &Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::NewProp_InPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::NewProp_OutPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample|Navigation" },
		{ "Comment", "/**\n\x09 * Given a point, we will first try to find the nearest pedestrian lane, and then we will try to find\n\x09 * the nearest point on that lane. Useful for spawning actors.\n\x09 *\n\x09 * @param [in]\x09InPoint\x09\x09The point we are using to find the lane.\n\x09 * @param [in]\x09Tags\x09\x09""An array of names associated with the ZoneGraphTag that we should search for.\n\x09 *\x09\x09\x09\x09\x09\x09\x09When empty, we'll query all available lane types.\n\x09 * @param [out]\x09OutPoint\x09The point on the lane we found. Only valid if the method return success.\n\x09 * @param [in]\x09Radius\x09\x09The radius / bounds length from InPoint where we'll search for the lane.\n\x09 *\n\x09 * @return True if we found an appropriate lane and location, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
		{ "ToolTip", "Given a point, we will first try to find the nearest pedestrian lane, and then we will try to find\nthe nearest point on that lane. Useful for spawning actors.\n\n@param [in]  InPoint         The point we are using to find the lane.\n@param [in]  Tags            An array of names associated with the ZoneGraphTag that we should search for.\n                                                     When empty, we'll query all available lane types.\n@param [out] OutPoint        The point on the lane we found. Only valid if the method return success.\n@param [in]  Radius          The radius / bounds length from InPoint where we'll search for the lane.\n\n@return True if we found an appropriate lane and location, false otherwise." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "FindNearestLaneLocationByTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::CitySampleBlueprintLibrary_eventFindNearestLaneLocationByTags_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetActiveDeviceProfileName_Statics
	{
		struct CitySampleBlueprintLibrary_eventGetActiveDeviceProfileName_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetActiveDeviceProfileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventGetActiveDeviceProfileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetActiveDeviceProfileName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetActiveDeviceProfileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetActiveDeviceProfileName_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample" },
		{ "Comment", "/** Returns the name of the active Device Profile */" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
		{ "ToolTip", "Returns the name of the active Device Profile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetActiveDeviceProfileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "GetActiveDeviceProfileName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetActiveDeviceProfileName_Statics::CitySampleBlueprintLibrary_eventGetActiveDeviceProfileName_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetActiveDeviceProfileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetActiveDeviceProfileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetActiveDeviceProfileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetActiveDeviceProfileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetActiveDeviceProfileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetActiveDeviceProfileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetBaseDeviceProfileName_Statics
	{
		struct CitySampleBlueprintLibrary_eventGetBaseDeviceProfileName_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetBaseDeviceProfileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventGetBaseDeviceProfileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetBaseDeviceProfileName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetBaseDeviceProfileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetBaseDeviceProfileName_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample" },
		{ "Comment", "/** Returns the name of the base Device Profile ignoring any overrides */" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
		{ "ToolTip", "Returns the name of the base Device Profile ignoring any overrides" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetBaseDeviceProfileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "GetBaseDeviceProfileName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetBaseDeviceProfileName_Statics::CitySampleBlueprintLibrary_eventGetBaseDeviceProfileName_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetBaseDeviceProfileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetBaseDeviceProfileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetBaseDeviceProfileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetBaseDeviceProfileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetBaseDeviceProfileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetBaseDeviceProfileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameMode_Statics
	{
		struct CitySampleBlueprintLibrary_eventGetCitySampleGameMode_Parms
		{
			const UObject* WorldContextObject;
			ACitySampleGameMode* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameMode_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventGetCitySampleGameMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameMode_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameMode_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventGetCitySampleGameMode_Parms, ReturnValue), Z_Construct_UClass_ACitySampleGameMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameMode_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "GetCitySampleGameMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameMode_Statics::CitySampleBlueprintLibrary_eventGetCitySampleGameMode_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameState_Statics
	{
		struct CitySampleBlueprintLibrary_eventGetCitySampleGameState_Parms
		{
			const UObject* WorldContextObject;
			ACitySampleGameState* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameState_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventGetCitySampleGameState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameState_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameState_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventGetCitySampleGameState_Parms, ReturnValue), Z_Construct_UClass_ACitySampleGameState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameState_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameState_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "GetCitySampleGameState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameState_Statics::CitySampleBlueprintLibrary_eventGetCitySampleGameState_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerCharacter_Statics
	{
		struct CitySampleBlueprintLibrary_eventGetCitySamplePlayerCharacter_Parms
		{
			const UObject* WorldContextObject;
			ACitySampleCharacter* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerCharacter_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerCharacter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventGetCitySamplePlayerCharacter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerCharacter_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerCharacter_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventGetCitySamplePlayerCharacter_Parms, ReturnValue), Z_Construct_UClass_ACitySampleCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerCharacter_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "GetCitySamplePlayerCharacter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerCharacter_Statics::CitySampleBlueprintLibrary_eventGetCitySamplePlayerCharacter_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerController_Statics
	{
		struct CitySampleBlueprintLibrary_eventGetCitySamplePlayerController_Parms
		{
			const UObject* WorldContextObject;
			ACitySamplePlayerController* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerController_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventGetCitySamplePlayerController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerController_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerController_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventGetCitySamplePlayerController_Parms, ReturnValue), Z_Construct_UClass_ACitySamplePlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerController_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "GetCitySamplePlayerController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerController_Statics::CitySampleBlueprintLibrary_eventGetCitySamplePlayerController_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetVersionString_Statics
	{
		struct CitySampleBlueprintLibrary_eventGetVersionString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetVersionString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventGetVersionString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetVersionString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetVersionString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetVersionString_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample" },
		{ "Comment", "/** Returns formatted string containing the Engine changelist version and the build config. */" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
		{ "ToolTip", "Returns formatted string containing the Engine changelist version and the build config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetVersionString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "GetVersionString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetVersionString_Statics::CitySampleBlueprintLibrary_eventGetVersionString_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetVersionString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetVersionString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetVersionString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetVersionString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetVersionString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetVersionString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetWorldInfo_Statics
	{
		struct CitySampleBlueprintLibrary_eventGetWorldInfo_Parms
		{
			const UObject* WorldContextObject;
			ACitySampleWorldInfo* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetWorldInfo_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetWorldInfo_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventGetWorldInfo_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetWorldInfo_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetWorldInfo_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetWorldInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventGetWorldInfo_Parms, ReturnValue), Z_Construct_UClass_ACitySampleWorldInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetWorldInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetWorldInfo_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetWorldInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetWorldInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample" },
		{ "Comment", "/** Returns the WorldInfo actor, if it exists. */" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
		{ "ToolTip", "Returns the WorldInfo actor, if it exists." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetWorldInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "GetWorldInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetWorldInfo_Statics::CitySampleBlueprintLibrary_eventGetWorldInfo_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetWorldInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetWorldInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetWorldInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetWorldInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetWorldInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetWorldInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsMassVisualizationEnabled_Statics
	{
		struct CitySampleBlueprintLibrary_eventIsMassVisualizationEnabled_Parms
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
	void Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsMassVisualizationEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleBlueprintLibrary_eventIsMassVisualizationEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsMassVisualizationEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CitySampleBlueprintLibrary_eventIsMassVisualizationEnabled_Parms), &Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsMassVisualizationEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsMassVisualizationEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsMassVisualizationEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsMassVisualizationEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample|Mass" },
		{ "Comment", "/** Whether the mass entity visualizer is active. */" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
		{ "ToolTip", "Whether the mass entity visualizer is active." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsMassVisualizationEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "IsMassVisualizationEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsMassVisualizationEnabled_Statics::CitySampleBlueprintLibrary_eventIsMassVisualizationEnabled_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsMassVisualizationEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsMassVisualizationEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsMassVisualizationEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsMassVisualizationEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsMassVisualizationEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsMassVisualizationEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType_Statics
	{
		struct CitySampleBlueprintLibrary_eventIsPlayerOfTraversalType_Parms
		{
			const AActor* InActor;
			EPlayerTraversalState State;
			ACitySamplePlayerController* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType_Statics::NewProp_InActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventIsPlayerOfTraversalType_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType_Statics::NewProp_InActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType_Statics::NewProp_InActor_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType_Statics::NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventIsPlayerOfTraversalType_Parms, State), Z_Construct_UEnum_CitySample_EPlayerTraversalState, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType_Statics::NewProp_State_MetaData)) }; // 2296943739
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventIsPlayerOfTraversalType_Parms, ReturnValue), Z_Construct_UClass_ACitySamplePlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample" },
		{ "Comment", "/** Checks if an actor is a player-controlled pawn in the specific traversal state. Returns that CitySamplePlayerController if true, nullptr if false */" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
		{ "ToolTip", "Checks if an actor is a player-controlled pawn in the specific traversal state. Returns that CitySamplePlayerController if true, nullptr if false" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "IsPlayerOfTraversalType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType_Statics::CitySampleBlueprintLibrary_eventIsPlayerOfTraversalType_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCitySampleDebugMessage_Statics
	{
		struct CitySampleBlueprintLibrary_eventLogCitySampleDebugMessage_Parms
		{
			FString Message;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCitySampleDebugMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCitySampleDebugMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventLogCitySampleDebugMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCitySampleDebugMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCitySampleDebugMessage_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCitySampleDebugMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCitySampleDebugMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCitySampleDebugMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCitySampleDebugMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "LogCitySampleDebugMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCitySampleDebugMessage_Statics::CitySampleBlueprintLibrary_eventLogCitySampleDebugMessage_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCitySampleDebugMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCitySampleDebugMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCitySampleDebugMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCitySampleDebugMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCitySampleDebugMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCitySampleDebugMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCSVEvent_Statics
	{
		struct CitySampleBlueprintLibrary_eventLogCSVEvent_Parms
		{
			FString EventName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCSVEvent_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCSVEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventLogCSVEvent_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCSVEvent_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCSVEvent_Statics::NewProp_EventName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCSVEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCSVEvent_Statics::NewProp_EventName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCSVEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample|Profiling" },
		{ "Comment", "/** Track a Named Event */" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
		{ "ToolTip", "Track a Named Event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCSVEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "LogCSVEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCSVEvent_Statics::CitySampleBlueprintLibrary_eventLogCSVEvent_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCSVEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCSVEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCSVEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCSVEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCSVEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCSVEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_OverrideDeviceProfileForMode_Statics
	{
		struct CitySampleBlueprintLibrary_eventOverrideDeviceProfileForMode_Parms
		{
			EDeviceProfileOverrideMode NewMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_OverrideDeviceProfileForMode_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_OverrideDeviceProfileForMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleBlueprintLibrary_eventOverrideDeviceProfileForMode_Parms, NewMode), Z_Construct_UEnum_CitySample_EDeviceProfileOverrideMode, METADATA_PARAMS(nullptr, 0) }; // 356581331
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleBlueprintLibrary_OverrideDeviceProfileForMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_OverrideDeviceProfileForMode_Statics::NewProp_NewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleBlueprintLibrary_OverrideDeviceProfileForMode_Statics::NewProp_NewMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_OverrideDeviceProfileForMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample" },
		{ "Comment", "/** Attempts to find and replace the current device profile with the corresponding profile for the given mode. */" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
		{ "ToolTip", "Attempts to find and replace the current device profile with the corresponding profile for the given mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_OverrideDeviceProfileForMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "OverrideDeviceProfileForMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleBlueprintLibrary_OverrideDeviceProfileForMode_Statics::CitySampleBlueprintLibrary_eventOverrideDeviceProfileForMode_Parms), Z_Construct_UFunction_UCitySampleBlueprintLibrary_OverrideDeviceProfileForMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_OverrideDeviceProfileForMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_OverrideDeviceProfileForMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_OverrideDeviceProfileForMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_OverrideDeviceProfileForMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_OverrideDeviceProfileForMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleBlueprintLibrary_RestoreDefaultDeviceProfile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleBlueprintLibrary_RestoreDefaultDeviceProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "CitySample" },
		{ "Comment", "/** Restores the device profile in the case it was overridden. */" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
		{ "ToolTip", "Restores the device profile in the case it was overridden." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleBlueprintLibrary_RestoreDefaultDeviceProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleBlueprintLibrary, nullptr, "RestoreDefaultDeviceProfile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleBlueprintLibrary_RestoreDefaultDeviceProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleBlueprintLibrary_RestoreDefaultDeviceProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleBlueprintLibrary_RestoreDefaultDeviceProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleBlueprintLibrary_RestoreDefaultDeviceProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleBlueprintLibrary);
	UClass* Z_Construct_UClass_UCitySampleBlueprintLibrary_NoRegister()
	{
		return UCitySampleBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_ApplyDefaultLoadingSettings, "ApplyDefaultLoadingSettings" }, // 183880209
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvaIIRInterpolatorRotator, "EvaIIRInterpolatorRotator" }, // 1395621111
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorFloat, "EvalAccelInterpolatorFloat" }, // 659137564
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorRotator, "EvalAccelInterpolatorRotator" }, // 1840196102
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalAccelInterpolatorVector, "EvalAccelInterpolatorVector" }, // 1959382487
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorRotator, "EvalDoubleIIRInterpolatorRotator" }, // 1719275943
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalDoubleIIRInterpolatorVector, "EvalDoubleIIRInterpolatorVector" }, // 2090774246
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorFloat, "EvalIIRInterpolatorFloat" }, // 3992529541
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_EvalIIRInterpolatorVector, "EvalIIRInterpolatorVector" }, // 2804152796
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByName, "FindNearestLaneLocationByName" }, // 4107985211
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByNames, "FindNearestLaneLocationByNames" }, // 799857544
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTag, "FindNearestLaneLocationByTag" }, // 545288272
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_FindNearestLaneLocationByTags, "FindNearestLaneLocationByTags" }, // 3709309898
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetActiveDeviceProfileName, "GetActiveDeviceProfileName" }, // 2499317560
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetBaseDeviceProfileName, "GetBaseDeviceProfileName" }, // 4122394244
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameMode, "GetCitySampleGameMode" }, // 2592610314
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySampleGameState, "GetCitySampleGameState" }, // 3792321942
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerCharacter, "GetCitySamplePlayerCharacter" }, // 885361672
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetCitySamplePlayerController, "GetCitySamplePlayerController" }, // 1174058976
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetVersionString, "GetVersionString" }, // 213584592
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_GetWorldInfo, "GetWorldInfo" }, // 3335766538
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsMassVisualizationEnabled, "IsMassVisualizationEnabled" }, // 33521742
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_IsPlayerOfTraversalType, "IsPlayerOfTraversalType" }, // 798095635
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCitySampleDebugMessage, "LogCitySampleDebugMessage" }, // 3424835669
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_LogCSVEvent, "LogCSVEvent" }, // 4174728079
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_OverrideDeviceProfileForMode, "OverrideDeviceProfileForMode" }, // 643369296
		{ &Z_Construct_UFunction_UCitySampleBlueprintLibrary_RestoreDefaultDeviceProfile, "RestoreDefaultDeviceProfile" }, // 704626116
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Collection of blueprint utility functions for the CitySample.\n */" },
		{ "IncludePath", "Util/CitySampleBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Util/CitySampleBlueprintLibrary.h" },
		{ "ToolTip", "Collection of blueprint utility functions for the CitySample." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleBlueprintLibrary_Statics::ClassParams = {
		&UCitySampleBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCitySampleBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCitySampleBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UCitySampleBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UCitySampleBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleBlueprintLibrary.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleBlueprintLibrary>()
	{
		return UCitySampleBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleBlueprintLibrary);
	UCitySampleBlueprintLibrary::~UCitySampleBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Util_CitySampleBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Util_CitySampleBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleBlueprintLibrary, UCitySampleBlueprintLibrary::StaticClass, TEXT("UCitySampleBlueprintLibrary"), &Z_Registration_Info_UClass_UCitySampleBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleBlueprintLibrary), 2422220936U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Util_CitySampleBlueprintLibrary_h_3571403321(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Util_CitySampleBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Util_CitySampleBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
