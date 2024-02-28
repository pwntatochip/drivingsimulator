// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Camera/CitySampleCameraMode.h"
#include "CinematicCamera/Public/CineCameraSettings.h"
#include "CitySample/Util/CitySampleInterpolators.h"
#include "Engine/Classes/Camera/PlayerCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleCameraMode() {}
// Cross Module References
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings();
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySamplePlayerCameraManager_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCameraMode();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCameraMode_NoRegister();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorFloat();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FViewTargetTransitionParams();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	DEFINE_FUNCTION(UCitySampleCameraMode::execResetToDefaultSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetToDefaultSettings_Implementation();
		P_NATIVE_END;
	}
	struct CitySampleCameraMode_eventGetCustomFocusDistance_Parms
	{
		AActor* ViewTarget;
		FTransform ViewToWorld;
		float ReturnValue;

		/** Constructor, initializes return property only **/
		CitySampleCameraMode_eventGetCustomFocusDistance_Parms()
			: ReturnValue(0)
		{
		}
	};
	static FName NAME_UCitySampleCameraMode_GetCustomFocusDistance = FName(TEXT("GetCustomFocusDistance"));
	float UCitySampleCameraMode::GetCustomFocusDistance(AActor* ViewTarget, FTransform const& ViewToWorld) const
	{
		CitySampleCameraMode_eventGetCustomFocusDistance_Parms Parms;
		Parms.ViewTarget=ViewTarget;
		Parms.ViewToWorld=ViewToWorld;
		const_cast<UCitySampleCameraMode*>(this)->ProcessEvent(FindFunctionChecked(NAME_UCitySampleCameraMode_GetCustomFocusDistance),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UCitySampleCameraMode_ResetToDefaultSettings = FName(TEXT("ResetToDefaultSettings"));
	void UCitySampleCameraMode::ResetToDefaultSettings()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCitySampleCameraMode_ResetToDefaultSettings),NULL);
	}
	void UCitySampleCameraMode::StaticRegisterNativesUCitySampleCameraMode()
	{
		UClass* Class = UCitySampleCameraMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetToDefaultSettings", &UCitySampleCameraMode::execResetToDefaultSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewToWorld_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewToWorld;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::NewProp_ViewTarget = { "ViewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleCameraMode_eventGetCustomFocusDistance_Parms, ViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::NewProp_ViewToWorld_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::NewProp_ViewToWorld = { "ViewToWorld", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleCameraMode_eventGetCustomFocusDistance_Parms, ViewToWorld), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::NewProp_ViewToWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::NewProp_ViewToWorld_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleCameraMode_eventGetCustomFocusDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::NewProp_ViewTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::NewProp_ViewToWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** When UseCustomFocusDistance is true, this event should be implemented to determine a focus distance appropriate for the camera mode */" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "When UseCustomFocusDistance is true, this event should be implemented to determine a focus distance appropriate for the camera mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCameraMode, nullptr, "GetCustomFocusDistance", nullptr, nullptr, sizeof(CitySampleCameraMode_eventGetCustomFocusDistance_Parms), Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C80800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleCameraMode_ResetToDefaultSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCameraMode_ResetToDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Blueprint native event for camera modes to reset to default settings as needed */" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "Blueprint native event for camera modes to reset to default settings as needed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCameraMode_ResetToDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCameraMode, nullptr, "ResetToDefaultSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleCameraMode_ResetToDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCameraMode_ResetToDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleCameraMode_ResetToDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCameraMode_ResetToDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleCameraMode);
	UClass* Z_Construct_UClass_UCitySampleCameraMode_NoRegister()
	{
		return UCitySampleCameraMode::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleCameraMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCineCam_MetaData[];
#endif
		static void NewProp_bUseCineCam_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCineCam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCineCamSettings_MetaData[];
#endif
		static void NewProp_bUseCineCamSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCineCamSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideFilmback_MetaData[];
#endif
		static void NewProp_bOverrideFilmback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideFilmback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CineCam_FilmbackOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CineCam_FilmbackOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CineCam_CurrentFocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CineCam_CurrentFocalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CineCam_CurrentAperture_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CineCam_CurrentAperture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CineCam_FocusDistanceAdjustment_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CineCam_FocusDistanceAdjustment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CineCam_DisplayOnly_FOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CineCam_DisplayOnly_FOV;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockingActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockingActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlockingActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraShakeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakeInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraShakeInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleShakeWithViewTargetVelocity_MetaData[];
#endif
		static void NewProp_bScaleShakeWithViewTargetVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleShakeWithViewTargetVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShakeScaling_SpeedRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShakeScaling_SpeedRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShakeScaling_ScaleRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShakeScaling_ScaleRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShakeScaleInterpolator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShakeScaleInterpolator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugShake_MetaData[];
#endif
		static void NewProp_bDrawDebugShake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugShake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomFocusDistance_MetaData[];
#endif
		static void NewProp_bUseCustomFocusDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomFocusDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideViewPitchMinAndMax_MetaData[];
#endif
		static void NewProp_bOverrideViewPitchMinAndMax_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideViewPitchMinAndMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewPitchMinOverride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewPitchMinOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewPitchMaxOverride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewPitchMaxOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleCameraMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleCameraMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleCameraMode_GetCustomFocusDistance, "GetCustomFocusDistance" }, // 611665315
		{ &Z_Construct_UFunction_UCitySampleCameraMode_ResetToDefaultSettings, "ResetToDefaultSettings" }, // 71061254
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for Camera Mode implementations. Has functions and settings for camera activation, updating, and whether or not to use cine cam properties\n */" },
		{ "IncludePath", "Camera/CitySampleCameraMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "Base class for Camera Mode implementations. Has functions and settings for camera activation, updating, and whether or not to use cine cam properties" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_PlayerCamera_MetaData[] = {
		{ "Comment", "/** Camera actor this mode is bound to */" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "Camera actor this mode is bound to" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCameraMode, PlayerCamera), Z_Construct_UClass_ACitySamplePlayerCameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_PlayerCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_PlayerCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_TransitionInTime_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Amount of time camera transition should take when entering this camera mode */" },
		{ "DisplayName", "Transition In Time" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "Amount of time camera transition should take when entering this camera mode" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_TransitionInTime = { "TransitionInTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCameraMode, TransitionInTime), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_TransitionInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_TransitionInTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_TransitionParams_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** Transition parameters for this camera mode type */" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "Transition parameters for this camera mode type" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_TransitionParams = { "TransitionParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCameraMode, TransitionParams), Z_Construct_UScriptStruct_FViewTargetTransitionParams, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_TransitionParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_TransitionParams_MetaData)) }; // 3457093656
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_FOV_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "Comment", "/** Desired FOV.  Full angle, in degrees (e.g. 90.f) */" },
		{ "EditCondition", "!bUseCineCamSettings" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "Desired FOV.  Full angle, in degrees (e.g. 90.f)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCameraMode, FOV), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_FOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_FOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCineCam_MetaData[] = {
		{ "Category", "CineCam" },
		{ "Comment", "/** If true, this camera mode will use a cine cam component, allowing access to cinematic camera settings */" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "If true, this camera mode will use a cine cam component, allowing access to cinematic camera settings" },
	};
#endif
	void Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCineCam_SetBit(void* Obj)
	{
		((UCitySampleCameraMode*)Obj)->bUseCineCam = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCineCam = { "bUseCineCam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCitySampleCameraMode), &Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCineCam_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCineCam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCineCam_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCineCamSettings_MetaData[] = {
		{ "Category", "CineCam" },
		{ "Comment", "/** When true, custom cine cam settings will be applied when UseCinecam is enabled */" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "When true, custom cine cam settings will be applied when UseCinecam is enabled" },
	};
#endif
	void Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCineCamSettings_SetBit(void* Obj)
	{
		((UCitySampleCameraMode*)Obj)->bUseCineCamSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCineCamSettings = { "bUseCineCamSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCitySampleCameraMode), &Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCineCamSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCineCamSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCineCamSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bOverrideFilmback_MetaData[] = {
		{ "Category", "CineCam" },
		{ "Comment", "/** When true, default cinecam filmback settings will be overriden by what is set in CineCam_FilmbackOverride */" },
		{ "EditCondition", "bUseCineCamSettings" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "When true, default cinecam filmback settings will be overriden by what is set in CineCam_FilmbackOverride" },
	};
#endif
	void Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bOverrideFilmback_SetBit(void* Obj)
	{
		((UCitySampleCameraMode*)Obj)->bOverrideFilmback = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bOverrideFilmback = { "bOverrideFilmback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCitySampleCameraMode), &Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bOverrideFilmback_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bOverrideFilmback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bOverrideFilmback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_FilmbackOverride_MetaData[] = {
		{ "Category", "CineCam" },
		{ "Comment", "/** Custom filmback settings to use when OverrideFilmback is enabled */" },
		{ "EditCondition", "bOverrideFilmback" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "Custom filmback settings to use when OverrideFilmback is enabled" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_FilmbackOverride = { "CineCam_FilmbackOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCameraMode, CineCam_FilmbackOverride), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_FilmbackOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_FilmbackOverride_MetaData)) }; // 833749679
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_CurrentFocalLength_MetaData[] = {
		{ "Category", "CineCam" },
		{ "Comment", "/** Camera focal length to use when UseCinecamSettings is enabled */" },
		{ "EditCondition", "bUseCineCamSettings" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "Camera focal length to use when UseCinecamSettings is enabled" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_CurrentFocalLength = { "CineCam_CurrentFocalLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCameraMode, CineCam_CurrentFocalLength), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_CurrentFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_CurrentFocalLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_CurrentAperture_MetaData[] = {
		{ "Category", "CineCam" },
		{ "Comment", "/** Camera aperture to use when UseCinecamSettings is enabled */" },
		{ "EditCondition", "bUseCineCamSettings" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "Camera aperture to use when UseCinecamSettings is enabled" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_CurrentAperture = { "CineCam_CurrentAperture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCameraMode, CineCam_CurrentAperture), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_CurrentAperture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_CurrentAperture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_FocusDistanceAdjustment_MetaData[] = {
		{ "Category", "CineCam" },
		{ "Comment", "/** Custom focus distance adjustment to use when UseCinecamSettings is enabled */" },
		{ "EditCondition", "bUseCineCamSettings" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "Custom focus distance adjustment to use when UseCinecamSettings is enabled" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_FocusDistanceAdjustment = { "CineCam_FocusDistanceAdjustment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCameraMode, CineCam_FocusDistanceAdjustment), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_FocusDistanceAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_FocusDistanceAdjustment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_DisplayOnly_FOV_MetaData[] = {
		{ "Category", "CineCam" },
		{ "Comment", "/** FOV to use when UseCineCam is enabled */" },
		{ "EditCondition", "bUseCineCamSettings" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "FOV to use when UseCineCam is enabled" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_DisplayOnly_FOV = { "CineCam_DisplayOnly_FOV", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCameraMode, CineCam_DisplayOnly_FOV), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_DisplayOnly_FOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_DisplayOnly_FOV_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_BlockingActors_Inner = { "BlockingActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_BlockingActors_MetaData[] = {
		{ "Comment", "/** List for tracking actors that block the camera */" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "List for tracking actors that block the camera" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_BlockingActors = { "BlockingActors", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCameraMode, BlockingActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_BlockingActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_BlockingActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CameraShakeClass_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Camera shake class to create when this camera mode becomes active */" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "Camera shake class to create when this camera mode becomes active" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CameraShakeClass = { "CameraShakeClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCameraMode, CameraShakeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CameraShakeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CameraShakeClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CameraShakeInstance_MetaData[] = {
		{ "Comment", "/** Camera Shake object instance created when this camera mode is activated and a valid CameraShakeClass is set */" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "Camera Shake object instance created when this camera mode is activated and a valid CameraShakeClass is set" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CameraShakeInstance = { "CameraShakeInstance", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCameraMode, CameraShakeInstance), Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CameraShakeInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CameraShakeInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bScaleShakeWithViewTargetVelocity_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** When true, camera shake will be scaled using the ShakeScaling_SpeedRange and the ShakeScaling_ScaleRange */" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "When true, camera shake will be scaled using the ShakeScaling_SpeedRange and the ShakeScaling_ScaleRange" },
	};
#endif
	void Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bScaleShakeWithViewTargetVelocity_SetBit(void* Obj)
	{
		((UCitySampleCameraMode*)Obj)->bScaleShakeWithViewTargetVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bScaleShakeWithViewTargetVelocity = { "bScaleShakeWithViewTargetVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCitySampleCameraMode), &Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bScaleShakeWithViewTargetVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bScaleShakeWithViewTargetVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bScaleShakeWithViewTargetVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ShakeScaling_SpeedRange_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Ranges of view target velocity that will be mapped to a camera shake scale */" },
		{ "EditCondition", "bScaleShakeWithViewTargetVelocity" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "Ranges of view target velocity that will be mapped to a camera shake scale" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ShakeScaling_SpeedRange = { "ShakeScaling_SpeedRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCameraMode, ShakeScaling_SpeedRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ShakeScaling_SpeedRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ShakeScaling_SpeedRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ShakeScaling_ScaleRange_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Maps to ShakeScaling_SpeedRange, such that at SpeedRange.X, shake will scale to ScaleRange.X */" },
		{ "EditCondition", "bScaleShakeWithViewTargetVelocity" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "Maps to ShakeScaling_SpeedRange, such that at SpeedRange.X, shake will scale to ScaleRange.X" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ShakeScaling_ScaleRange = { "ShakeScaling_ScaleRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCameraMode, ShakeScaling_ScaleRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ShakeScaling_ScaleRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ShakeScaling_ScaleRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ShakeScaleInterpolator_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Interpolator for smooth changes in camera shake intensities */" },
		{ "EditCondition", "bScaleShakeWithViewTargetVelocity" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "Interpolator for smooth changes in camera shake intensities" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ShakeScaleInterpolator = { "ShakeScaleInterpolator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCameraMode, ShakeScaleInterpolator), Z_Construct_UScriptStruct_FIIRInterpolatorFloat, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ShakeScaleInterpolator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ShakeScaleInterpolator_MetaData)) }; // 3579112660
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bDrawDebugShake_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** When true, the camera mode will attempt to display debug information related to camera shake*/" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "When true, the camera mode will attempt to display debug information related to camera shake" },
	};
#endif
	void Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bDrawDebugShake_SetBit(void* Obj)
	{
		((UCitySampleCameraMode*)Obj)->bDrawDebugShake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bDrawDebugShake = { "bDrawDebugShake", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCitySampleCameraMode), &Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bDrawDebugShake_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bDrawDebugShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bDrawDebugShake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCustomFocusDistance_MetaData[] = {
		{ "Category", "CineCam" },
		{ "Comment", "/** When true, a custom focus distance will be provided to the cine cam via an implementation of the GetCustomFocusDistance Blueprint Implementable Event */" },
		{ "EditCondition", "bUseCineCamSettings" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "When true, a custom focus distance will be provided to the cine cam via an implementation of the GetCustomFocusDistance Blueprint Implementable Event" },
	};
#endif
	void Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCustomFocusDistance_SetBit(void* Obj)
	{
		((UCitySampleCameraMode*)Obj)->bUseCustomFocusDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCustomFocusDistance = { "bUseCustomFocusDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCitySampleCameraMode), &Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCustomFocusDistance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCustomFocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCustomFocusDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bOverrideViewPitchMinAndMax_MetaData[] = {
		{ "Category", "Camera Manager Overrides" },
		{ "Comment", "/** When true, custom view pitch limits will be used for this camera mode */" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "When true, custom view pitch limits will be used for this camera mode" },
	};
#endif
	void Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bOverrideViewPitchMinAndMax_SetBit(void* Obj)
	{
		((UCitySampleCameraMode*)Obj)->bOverrideViewPitchMinAndMax = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bOverrideViewPitchMinAndMax = { "bOverrideViewPitchMinAndMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCitySampleCameraMode), &Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bOverrideViewPitchMinAndMax_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bOverrideViewPitchMinAndMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bOverrideViewPitchMinAndMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ViewPitchMinOverride_MetaData[] = {
		{ "Category", "Camera Manager Overrides" },
		{ "Comment", "/** Pitch minimum limit to use when OverrideViewPitchMinAndMax is true */" },
		{ "EditCondition", "bOverrideViewPitchMinAndMax" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "Pitch minimum limit to use when OverrideViewPitchMinAndMax is true" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ViewPitchMinOverride = { "ViewPitchMinOverride", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCameraMode, ViewPitchMinOverride), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ViewPitchMinOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ViewPitchMinOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ViewPitchMaxOverride_MetaData[] = {
		{ "Category", "Camera Manager Overrides" },
		{ "Comment", "/** Pitch maximum limit to use when OverrideViewPitchMinAndMax is true */" },
		{ "EditCondition", "bOverrideViewPitchMinAndMax" },
		{ "ModuleRelativePath", "Camera/CitySampleCameraMode.h" },
		{ "ToolTip", "Pitch maximum limit to use when OverrideViewPitchMinAndMax is true" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ViewPitchMaxOverride = { "ViewPitchMaxOverride", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCameraMode, ViewPitchMaxOverride), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ViewPitchMaxOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ViewPitchMaxOverride_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleCameraMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_PlayerCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_TransitionInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_TransitionParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_FOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCineCam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCineCamSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bOverrideFilmback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_FilmbackOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_CurrentFocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_CurrentAperture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_FocusDistanceAdjustment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CineCam_DisplayOnly_FOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_BlockingActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_BlockingActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CameraShakeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_CameraShakeInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bScaleShakeWithViewTargetVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ShakeScaling_SpeedRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ShakeScaling_ScaleRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ShakeScaleInterpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bDrawDebugShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bUseCustomFocusDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_bOverrideViewPitchMinAndMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ViewPitchMinOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCameraMode_Statics::NewProp_ViewPitchMaxOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleCameraMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleCameraMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleCameraMode_Statics::ClassParams = {
		&UCitySampleCameraMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCitySampleCameraMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCitySampleCameraMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCameraMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCitySampleCameraMode()
	{
		if (!Z_Registration_Info_UClass_UCitySampleCameraMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleCameraMode.OuterSingleton, Z_Construct_UClass_UCitySampleCameraMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleCameraMode.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleCameraMode>()
	{
		return UCitySampleCameraMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleCameraMode);
	UCitySampleCameraMode::~UCitySampleCameraMode() {}
	struct Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Camera_CitySampleCameraMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Camera_CitySampleCameraMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleCameraMode, UCitySampleCameraMode::StaticClass, TEXT("UCitySampleCameraMode"), &Z_Registration_Info_UClass_UCitySampleCameraMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleCameraMode), 1917293913U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Camera_CitySampleCameraMode_h_3632719263(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Camera_CitySampleCameraMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Camera_CitySampleCameraMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
