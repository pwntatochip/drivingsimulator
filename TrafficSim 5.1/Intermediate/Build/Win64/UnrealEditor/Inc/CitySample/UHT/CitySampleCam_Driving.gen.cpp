// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Camera/CitySampleCam_Driving.h"
#include "CitySample/Util/CitySampleInterpolators.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleCam_Driving() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCam_Driving();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCam_Driving_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCam_ThirdPerson();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FIIRInterpolatorFloat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	void UCitySampleCam_Driving::StaticRegisterNativesUCitySampleCam_Driving()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleCam_Driving);
	UClass* Z_Construct_UClass_UCitySampleCam_Driving_NoRegister()
	{
		return UCitySampleCam_Driving::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleCam_Driving_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrivingLazyFollowLaziness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DrivingLazyFollowLaziness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverseCamLazyFollowLaziness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverseCamLazyFollowLaziness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FowardVelocityThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FowardVelocityThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverseVelocityThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverseVelocityThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LazyFollowSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LazyFollowSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandbrakeFullFollowPostReleaseTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HandbrakeFullFollowPostReleaseTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLookAtPointDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLookAtPointDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrivingLookatWorldSpaceInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrivingLookatWorldSpaceInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrivingLookatWorldSpaceInterpMaxSpeedScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DrivingLookatWorldSpaceInterpMaxSpeedScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrivingLookatWorldSpaceInterpScaleRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrivingLookatWorldSpaceInterpScaleRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtReverseOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAtReverseOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtForwardTransitionOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAtForwardTransitionOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookatVectorMultiplierInterpolator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookatVectorMultiplierInterpolator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtManualFollowInterpSpeedTransitionTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAtManualFollowInterpSpeedTransitionTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtLazyFollowInterpSpeedTransitionTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAtLazyFollowInterpSpeedTransitionTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtManualInterpSpeedTransitionScalar_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAtManualInterpSpeedTransitionScalar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteeringToLookAtLateralOffset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SteeringToLookAtLateralOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteeringToLookAtLateralOffsetScales_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteeringToLookAtLateralOffsetScales;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtLateralOffsetSteeringThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAtLateralOffsetSteeringThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LateralLookAtOffsetRiseAndFallSpeeds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LateralLookAtOffsetRiseAndFallSpeeds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrivingPivotRotInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrivingPivotRotInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrivingFullFollowPivotRotInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrivingFullFollowPivotRotInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualToAutoCameraPivotRotInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ManualToAutoCameraPivotRotInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualToAutoCameraTransitionalYawThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ManualToAutoCameraTransitionalYawThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardToReversePivotRotInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardToReversePivotRotInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverseToForwardPivotRotInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverseToForwardPivotRotInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotRotForwardReverseTransitionalYawThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotRotForwardReverseTransitionalYawThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotRotSpeedChangeTimeToTransition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotRotSpeedChangeTimeToTransition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFOVSpeedAdjustmentCurve_MetaData[];
#endif
		static void NewProp_bUseFOVSpeedAdjustmentCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFOVSpeedAdjustmentCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOV_SpeedAdjustmentCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FOV_SpeedAdjustmentCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOV_SpeedAdjustment_SpeedRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FOV_SpeedAdjustment_SpeedRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSteeringYawModifiers_MetaData[];
#endif
		static void NewProp_bUseSteeringYawModifiers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSteeringYawModifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedToYawMultiplierCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeedToYawMultiplierCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteeringYawModifierInterpolator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteeringYawModifierInterpolator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedToYawMultiplierCurve_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedToYawMultiplierCurve_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedToYawMultiplierCurve_SpeedRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpeedToYawMultiplierCurve_SpeedRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandbrakeYawModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HandbrakeYawModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSteeringRollModifiers_MetaData[];
#endif
		static void NewProp_bUseSteeringRollModifiers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSteeringRollModifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedToRollMultiplierCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeedToRollMultiplierCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteeringRollModifierRiseAndFallSpeeds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteeringRollModifierRiseAndFallSpeeds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedToRollMultiplierCurve_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedToRollMultiplierCurve_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedToRollMultiplierCurve_SpeedRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpeedToRollMultiplierCurve_SpeedRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandbrakeRollModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HandbrakeRollModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AerialCameraToPivotOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AerialCameraToPivotOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AerialCameraToPivotOffsetAirTransitionSpeeds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AerialCameraToPivotOffsetAirTransitionSpeeds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AerialCameraToPivotOffsetGroundTransitionSpeeds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AerialCameraToPivotOffsetGroundTransitionSpeeds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleCam_Driving_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCitySampleCam_ThirdPerson,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An extension of the CitySampleCam_ThirdPerson class with extra features meant for driving cameras\n */" },
		{ "IncludePath", "Camera/CitySampleCam_Driving.h" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "An extension of the CitySampleCam_ThirdPerson class with extra features meant for driving cameras" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLazyFollowLaziness_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Auto Follow" },
		{ "Comment", "/**Lazy follow laziness to use when driving normally. Higher values mean a lazier auto follow camera. Camera's follow mode must be set to \"LazyFollow\" for this to work. */" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Lazy follow laziness to use when driving normally. Higher values mean a lazier auto follow camera. Camera's follow mode must be set to \"LazyFollow\" for this to work." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLazyFollowLaziness = { "DrivingLazyFollowLaziness", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, DrivingLazyFollowLaziness), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLazyFollowLaziness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLazyFollowLaziness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ReverseCamLazyFollowLaziness_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Auto Follow" },
		{ "Comment", "/**Lazy follow laziness to use when reversing. Higher values mean a lazier auto follow camera. Camera's follow mode must be set to \"LazyFollow\" for this to work. */" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Lazy follow laziness to use when reversing. Higher values mean a lazier auto follow camera. Camera's follow mode must be set to \"LazyFollow\" for this to work." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ReverseCamLazyFollowLaziness = { "ReverseCamLazyFollowLaziness", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, ReverseCamLazyFollowLaziness), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ReverseCamLazyFollowLaziness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ReverseCamLazyFollowLaziness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_FowardVelocityThreshold_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Auto Follow" },
		{ "Comment", "/**Velocity threshold used to determine whether the car is properly moving forward or not. We adjust the camera's follow behavior based on this. You want to keep this value positive.*/" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Velocity threshold used to determine whether the car is properly moving forward or not. We adjust the camera's follow behavior based on this. You want to keep this value positive." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_FowardVelocityThreshold = { "FowardVelocityThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, FowardVelocityThreshold), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_FowardVelocityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_FowardVelocityThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ReverseVelocityThreshold_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Auto Follow" },
		{ "Comment", "/**Velocity threshold used in conjunction with the car's current reverse input state to determine whether the vehicle is currently reversing or not. We adjust the camera's follow behavior based on this. You want to keep this value negative.*/" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Velocity threshold used in conjunction with the car's current reverse input state to determine whether the vehicle is currently reversing or not. We adjust the camera's follow behavior based on this. You want to keep this value negative." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ReverseVelocityThreshold = { "ReverseVelocityThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, ReverseVelocityThreshold), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ReverseVelocityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ReverseVelocityThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LazyFollowSpeedThreshold_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Auto Follow" },
		{ "Comment", "/** Speed Threshold that must be surpassed before lazy follow camera behavior kicks in*/" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Speed Threshold that must be surpassed before lazy follow camera behavior kicks in" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LazyFollowSpeedThreshold = { "LazyFollowSpeedThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, LazyFollowSpeedThreshold), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LazyFollowSpeedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LazyFollowSpeedThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_HandbrakeFullFollowPostReleaseTime_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Auto Follow" },
		{ "Comment", "/**Minimum amount of time that the \"Full Follow\" behavior may be considered active after releasing the handbrake. Used to enhance the feel of sharp handbrake turns. Too low of a number can result in hard to follow handbrake turns, while too high of a number may result in overzealous full follow behavior.*/" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Minimum amount of time that the \"Full Follow\" behavior may be considered active after releasing the handbrake. Used to enhance the feel of sharp handbrake turns. Too low of a number can result in hard to follow handbrake turns, while too high of a number may result in overzealous full follow behavior." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_HandbrakeFullFollowPostReleaseTime = { "HandbrakeFullFollowPostReleaseTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, HandbrakeFullFollowPostReleaseTime), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_HandbrakeFullFollowPostReleaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_HandbrakeFullFollowPostReleaseTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_MinLookAtPointDistance_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At" },
		{ "Comment", "/**Minimum Look At Point Distance from vehicle. A larger distance will make the camera look farther ahead of the vehicle */" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Minimum Look At Point Distance from vehicle. A larger distance will make the camera look farther ahead of the vehicle" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_MinLookAtPointDistance = { "MinLookAtPointDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, MinLookAtPointDistance), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_MinLookAtPointDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_MinLookAtPointDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLookatWorldSpaceInterpSpeed_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At" },
		{ "Comment", "/**Speeds that the LookatWorldSpaceDoubleInterpolator will use */" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Speeds that the LookatWorldSpaceDoubleInterpolator will use" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLookatWorldSpaceInterpSpeed = { "DrivingLookatWorldSpaceInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, DrivingLookatWorldSpaceInterpSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLookatWorldSpaceInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLookatWorldSpaceInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLookatWorldSpaceInterpMaxSpeedScale_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At|DrivingLookAtWorldSpaceInterpolator Speeds Scales" },
		{ "Comment", "/**Max scalar to multiply DrivingLookatWorldInterpSpeeds depending on vehicle speeds. This is helpful if at high speeds the default interp speeds are struggling to catch up. Leave at 1.0f if you'd like interp speeds to be unaffected. */" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Max scalar to multiply DrivingLookatWorldInterpSpeeds depending on vehicle speeds. This is helpful if at high speeds the default interp speeds are struggling to catch up. Leave at 1.0f if you'd like interp speeds to be unaffected." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLookatWorldSpaceInterpMaxSpeedScale = { "DrivingLookatWorldSpaceInterpMaxSpeedScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, DrivingLookatWorldSpaceInterpMaxSpeedScale), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLookatWorldSpaceInterpMaxSpeedScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLookatWorldSpaceInterpMaxSpeedScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLookatWorldSpaceInterpScaleRange_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At|DrivingLookAtWorldSpaceInterpolator Speeds Scales" },
		{ "Comment", "/**The speeds in MPH at which the speed scale will start to apply. If you have a range of 80-120 mph and DrivingLookatWorldSpaceInterpMaxSpeedScale is at 2.0, then interp speeds will be scaled like so: 80mph - x1 | 100 mph - x1.5 | 120 mph - x2 */" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "The speeds in MPH at which the speed scale will start to apply. If you have a range of 80-120 mph and DrivingLookatWorldSpaceInterpMaxSpeedScale is at 2.0, then interp speeds will be scaled like so: 80mph - x1 | 100 mph - x1.5 | 120 mph - x2" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLookatWorldSpaceInterpScaleRange = { "DrivingLookatWorldSpaceInterpScaleRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, DrivingLookatWorldSpaceInterpScaleRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLookatWorldSpaceInterpScaleRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLookatWorldSpaceInterpScaleRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtReverseOffset_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At" },
		{ "Comment", "/**How far back to push the Camera's look at point when the vehicle is reversing. Also used for Forward->Reverse camera transitions */" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "How far back to push the Camera's look at point when the vehicle is reversing. Also used for Forward->Reverse camera transitions" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtReverseOffset = { "LookAtReverseOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, LookAtReverseOffset), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtReverseOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtReverseOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtForwardTransitionOffset_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At" },
		{ "Comment", "/**How far forward to push the Camera's look at point when the vehicle is transitioning from reverse behavior -> forward behavior*/" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "How far forward to push the Camera's look at point when the vehicle is transitioning from reverse behavior -> forward behavior" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtForwardTransitionOffset = { "LookAtForwardTransitionOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, LookAtForwardTransitionOffset), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtForwardTransitionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtForwardTransitionOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookatVectorMultiplierInterpolator_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At" },
		{ "Comment", "/**Interpolator that manages the vector multiplier applied to the vehicle's forward vector that determines the look at point. This helps smooth out sudden LookAt changes.*/" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Interpolator that manages the vector multiplier applied to the vehicle's forward vector that determines the look at point. This helps smooth out sudden LookAt changes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookatVectorMultiplierInterpolator = { "LookatVectorMultiplierInterpolator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, LookatVectorMultiplierInterpolator), Z_Construct_UScriptStruct_FDoubleIIRInterpolatorFloat, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookatVectorMultiplierInterpolator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookatVectorMultiplierInterpolator_MetaData)) }; // 2755721650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtManualFollowInterpSpeedTransitionTime_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At" },
		{ "Comment", "/**Time it takes to transition from normal LookAtInterpSpeeds to instant interp speeds when manual camera control is active. Used with LookAtManualInterpSpeedTransitionScalar to provide a smooth transition to the instant interp speed.*/" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Time it takes to transition from normal LookAtInterpSpeeds to instant interp speeds when manual camera control is active. Used with LookAtManualInterpSpeedTransitionScalar to provide a smooth transition to the instant interp speed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtManualFollowInterpSpeedTransitionTime = { "LookAtManualFollowInterpSpeedTransitionTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, LookAtManualFollowInterpSpeedTransitionTime), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtManualFollowInterpSpeedTransitionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtManualFollowInterpSpeedTransitionTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtLazyFollowInterpSpeedTransitionTime_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At" },
		{ "Comment", "/**Time it takes to transition from instant LookAtInterpSpeeds to normal interp speeds when lazy follow camera control is active. Used with LookAtManualInterpSpeedTransitionScalar to provide a smooth transition back to normal interp speeds.*/" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Time it takes to transition from instant LookAtInterpSpeeds to normal interp speeds when lazy follow camera control is active. Used with LookAtManualInterpSpeedTransitionScalar to provide a smooth transition back to normal interp speeds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtLazyFollowInterpSpeedTransitionTime = { "LookAtLazyFollowInterpSpeedTransitionTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, LookAtLazyFollowInterpSpeedTransitionTime), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtLazyFollowInterpSpeedTransitionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtLazyFollowInterpSpeedTransitionTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtManualInterpSpeedTransitionScalar_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At" },
		{ "Comment", "/** Scalar applied to the vehicle's current LookAt interp speeds to determine the Look At Interp speed goal when transitioning to the \"instant\" interp speed in manual camera mode. Used with LookAtManualFollowInterpSpeedTransitionTime to provide a smooth transition to the instant interp speed. */" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Scalar applied to the vehicle's current LookAt interp speeds to determine the Look At Interp speed goal when transitioning to the \"instant\" interp speed in manual camera mode. Used with LookAtManualFollowInterpSpeedTransitionTime to provide a smooth transition to the instant interp speed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtManualInterpSpeedTransitionScalar = { "LookAtManualInterpSpeedTransitionScalar", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, LookAtManualInterpSpeedTransitionScalar), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtManualInterpSpeedTransitionScalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtManualInterpSpeedTransitionScalar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringToLookAtLateralOffset_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At" },
		{ "Comment", "/** Curve that applies a lateral offset to the Camera's look at point depending on how long the steering threshold has been met. X = Time Steering Threshold Passed, Y = Lateral offset (depends on steering direction) */" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Curve that applies a lateral offset to the Camera's look at point depending on how long the steering threshold has been met. X = Time Steering Threshold Passed, Y = Lateral offset (depends on steering direction)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringToLookAtLateralOffset = { "SteeringToLookAtLateralOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, SteeringToLookAtLateralOffset), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringToLookAtLateralOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringToLookAtLateralOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringToLookAtLateralOffsetScales_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At" },
		{ "Comment", "/** Scales the values in the SteeringToLookAtLateralOffset curve. X = Scales Time Axis, Y = Scales Lateral Offset Axis*/" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Scales the values in the SteeringToLookAtLateralOffset curve. X = Scales Time Axis, Y = Scales Lateral Offset Axis" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringToLookAtLateralOffsetScales = { "SteeringToLookAtLateralOffsetScales", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, SteeringToLookAtLateralOffsetScales), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringToLookAtLateralOffsetScales_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringToLookAtLateralOffsetScales_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtLateralOffsetSteeringThreshold_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At" },
		{ "Comment", "/**Steering threshold to meet so that the SteeringToLookAtLateralOffset curve comes into effect.*/" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Steering threshold to meet so that the SteeringToLookAtLateralOffset curve comes into effect." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtLateralOffsetSteeringThreshold = { "LookAtLateralOffsetSteeringThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, LookAtLateralOffsetSteeringThreshold), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtLateralOffsetSteeringThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtLateralOffsetSteeringThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LateralLookAtOffsetRiseAndFallSpeeds_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Look At" },
		{ "Comment", "/**Rise and Fall Interpolation speeds for the LateralLookAtOffset Target . X = Rise Speed (Steering is triggering lateral offset), Y = Fall Speed. (Weak or zero steering)*/" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Rise and Fall Interpolation speeds for the LateralLookAtOffset Target . X = Rise Speed (Steering is triggering lateral offset), Y = Fall Speed. (Weak or zero steering)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LateralLookAtOffsetRiseAndFallSpeeds = { "LateralLookAtOffsetRiseAndFallSpeeds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, LateralLookAtOffsetRiseAndFallSpeeds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LateralLookAtOffsetRiseAndFallSpeeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LateralLookAtOffsetRiseAndFallSpeeds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingPivotRotInterpSpeed_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Pivot Rotation" },
		{ "Comment", "/**Speeds that the PivotRotDoubleInterpolator will use when driving behavior*/" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Speeds that the PivotRotDoubleInterpolator will use when driving behavior" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingPivotRotInterpSpeed = { "DrivingPivotRotInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, DrivingPivotRotInterpSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingPivotRotInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingPivotRotInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingFullFollowPivotRotInterpSpeed_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Pivot Rotation" },
		{ "Comment", "/**Speeds that the PivotRotDoubleInterpolator will use when the camera enters full follow mode (happens during handbrake turns)*/" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Speeds that the PivotRotDoubleInterpolator will use when the camera enters full follow mode (happens during handbrake turns)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingFullFollowPivotRotInterpSpeed = { "DrivingFullFollowPivotRotInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, DrivingFullFollowPivotRotInterpSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingFullFollowPivotRotInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingFullFollowPivotRotInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ManualToAutoCameraPivotRotInterpSpeed_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Pivot Rotation|Manual To Auto Camera Transition" },
		{ "Comment", "/**Speeds that the PivotRotDoubleInterpolator will use when transitioning from manual cam to auto cam*/" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Speeds that the PivotRotDoubleInterpolator will use when transitioning from manual cam to auto cam" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ManualToAutoCameraPivotRotInterpSpeed = { "ManualToAutoCameraPivotRotInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, ManualToAutoCameraPivotRotInterpSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ManualToAutoCameraPivotRotInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ManualToAutoCameraPivotRotInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ManualToAutoCameraTransitionalYawThreshold_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Pivot Rotation|Manual To Auto Camera Transition" },
		{ "Comment", "/**Yaw threshold that must be met before during a manual to auto camera transition before normal pivot rot interp speeds kick in again*/" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Yaw threshold that must be met before during a manual to auto camera transition before normal pivot rot interp speeds kick in again" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ManualToAutoCameraTransitionalYawThreshold = { "ManualToAutoCameraTransitionalYawThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, ManualToAutoCameraTransitionalYawThreshold), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ManualToAutoCameraTransitionalYawThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ManualToAutoCameraTransitionalYawThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ForwardToReversePivotRotInterpSpeed_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Pivot Rotation|Forward Reverse Transition" },
		{ "Comment", "/**Speeds that the PivotRotDoubleInterpolator will use when the camera is switching from the forward to reverse camera following behavior*/" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Speeds that the PivotRotDoubleInterpolator will use when the camera is switching from the forward to reverse camera following behavior" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ForwardToReversePivotRotInterpSpeed = { "ForwardToReversePivotRotInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, ForwardToReversePivotRotInterpSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ForwardToReversePivotRotInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ForwardToReversePivotRotInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ReverseToForwardPivotRotInterpSpeed_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Pivot Rotation|Forward Reverse Transition" },
		{ "Comment", "/**Speeds that the PivotRotDoubleInterpolator will use when the camera is switching from the reverse to forward camera following behavior*/" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Speeds that the PivotRotDoubleInterpolator will use when the camera is switching from the reverse to forward camera following behavior" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ReverseToForwardPivotRotInterpSpeed = { "ReverseToForwardPivotRotInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, ReverseToForwardPivotRotInterpSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ReverseToForwardPivotRotInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ReverseToForwardPivotRotInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_PivotRotForwardReverseTransitionalYawThreshold_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Pivot Rotation|Forward Reverse Transition" },
		{ "Comment", "/**Yaw threshold that must be met before during a forward-reverse camera transition before normal pivot rot interp speeds kick in again*/" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Yaw threshold that must be met before during a forward-reverse camera transition before normal pivot rot interp speeds kick in again" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_PivotRotForwardReverseTransitionalYawThreshold = { "PivotRotForwardReverseTransitionalYawThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, PivotRotForwardReverseTransitionalYawThreshold), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_PivotRotForwardReverseTransitionalYawThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_PivotRotForwardReverseTransitionalYawThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_PivotRotSpeedChangeTimeToTransition_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Pivot Rotation|Forward Reverse Transition" },
		{ "Comment", "/**Time for pivot rot speed to change back to normal speeds upon completing a transition. This helps reduce camera snappiness when speeds readjust.*/" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Time for pivot rot speed to change back to normal speeds upon completing a transition. This helps reduce camera snappiness when speeds readjust." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_PivotRotSpeedChangeTimeToTransition = { "PivotRotSpeedChangeTimeToTransition", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, PivotRotSpeedChangeTimeToTransition), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_PivotRotSpeedChangeTimeToTransition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_PivotRotSpeedChangeTimeToTransition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseFOVSpeedAdjustmentCurve_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|FOV" },
		{ "Comment", "/** False: Use normal FOV at all times, True: Use FOV_SpeedAdjustmentCurve to determine FOV at runtime. */" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "False: Use normal FOV at all times, True: Use FOV_SpeedAdjustmentCurve to determine FOV at runtime." },
	};
#endif
	void Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseFOVSpeedAdjustmentCurve_SetBit(void* Obj)
	{
		((UCitySampleCam_Driving*)Obj)->bUseFOVSpeedAdjustmentCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseFOVSpeedAdjustmentCurve = { "bUseFOVSpeedAdjustmentCurve", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCitySampleCam_Driving), &Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseFOVSpeedAdjustmentCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseFOVSpeedAdjustmentCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseFOVSpeedAdjustmentCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_FOV_SpeedAdjustmentCurve_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|FOV" },
		{ "Comment", "/** Curve that applies a dynamic FOV depending on the player's current velocity. */" },
		{ "EditCondition", "bUseFOVSpeedAdjustmentCurve" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Curve that applies a dynamic FOV depending on the player's current velocity." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_FOV_SpeedAdjustmentCurve = { "FOV_SpeedAdjustmentCurve", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, FOV_SpeedAdjustmentCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_FOV_SpeedAdjustmentCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_FOV_SpeedAdjustmentCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_FOV_SpeedAdjustment_SpeedRange_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|FOV" },
		{ "Comment", "/** Speeds (in MPH) between which the FOV will adjust to at runtime when using the FOV_SpeedAdjustmentCurve*/" },
		{ "EditCondition", "bUseFOVSpeedAdjustmentCurve" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Speeds (in MPH) between which the FOV will adjust to at runtime when using the FOV_SpeedAdjustmentCurve" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_FOV_SpeedAdjustment_SpeedRange = { "FOV_SpeedAdjustment_SpeedRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, FOV_SpeedAdjustment_SpeedRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_FOV_SpeedAdjustment_SpeedRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_FOV_SpeedAdjustment_SpeedRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseSteeringYawModifiers_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Yaw" },
		{ "Comment", "/** False: Don't apply any Yaw modification based on steering state, True: Use SpeedToYawMultiplierCurve to apply extra Yaw to the camera when turning. This is applied on top of any 'Look At' Camera settings. */" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "False: Don't apply any Yaw modification based on steering state, True: Use SpeedToYawMultiplierCurve to apply extra Yaw to the camera when turning. This is applied on top of any 'Look At' Camera settings." },
	};
#endif
	void Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseSteeringYawModifiers_SetBit(void* Obj)
	{
		((UCitySampleCam_Driving*)Obj)->bUseSteeringYawModifiers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseSteeringYawModifiers = { "bUseSteeringYawModifiers", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCitySampleCam_Driving), &Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseSteeringYawModifiers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseSteeringYawModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseSteeringYawModifiers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToYawMultiplierCurve_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Yaw" },
		{ "Comment", "/** Curve that applies a Yaw multiplier based on the vehicles current speed. X = Speed, Y = Yaw Multiplier. The multiplier is applied to the current steering rate which has a range from -1 (leftmost), to 1 (rightmost) */" },
		{ "EditCondition", "bUseSteeringYawModifiers" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Curve that applies a Yaw multiplier based on the vehicles current speed. X = Speed, Y = Yaw Multiplier. The multiplier is applied to the current steering rate which has a range from -1 (leftmost), to 1 (rightmost)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToYawMultiplierCurve = { "SpeedToYawMultiplierCurve", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, SpeedToYawMultiplierCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToYawMultiplierCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToYawMultiplierCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringYawModifierInterpolator_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Yaw" },
		{ "Comment", "/** Interpolator for smoothing yaw modifications. Too high of a speed may result in very sudden yaw changes */" },
		{ "EditCondition", "bUseSteeringYawModifiers" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Interpolator for smoothing yaw modifications. Too high of a speed may result in very sudden yaw changes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringYawModifierInterpolator = { "SteeringYawModifierInterpolator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, SteeringYawModifierInterpolator), Z_Construct_UScriptStruct_FIIRInterpolatorFloat, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringYawModifierInterpolator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringYawModifierInterpolator_MetaData)) }; // 3579112660
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToYawMultiplierCurve_Scale_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Yaw" },
		{ "Comment", "/** Scales Final Multiplier value of SpeedToYawMultiplierCurve*/" },
		{ "EditCondition", "bUseSteeringYawModifiers" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Scales Final Multiplier value of SpeedToYawMultiplierCurve" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToYawMultiplierCurve_Scale = { "SpeedToYawMultiplierCurve_Scale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, SpeedToYawMultiplierCurve_Scale), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToYawMultiplierCurve_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToYawMultiplierCurve_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToYawMultiplierCurve_SpeedRange_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Yaw" },
		{ "Comment", "/** Speeds (in MPH) between which the Yaw multiplier will adjust to at runtime when using the SpeedToYawMultiplierCurve*/" },
		{ "EditCondition", "bUseSteeringYawModifiers" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Speeds (in MPH) between which the Yaw multiplier will adjust to at runtime when using the SpeedToYawMultiplierCurve" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToYawMultiplierCurve_SpeedRange = { "SpeedToYawMultiplierCurve_SpeedRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, SpeedToYawMultiplierCurve_SpeedRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToYawMultiplierCurve_SpeedRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToYawMultiplierCurve_SpeedRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_HandbrakeYawModifier_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Yaw" },
		{ "Comment", "/** Yaw Modifier that is added on top of all current Yaw modifiers when using the handbrake. Scales with current steering value and is only applicable when the Vehicle is actually moving. Can be used to apply more extreme camera rotations when drifting.*/" },
		{ "EditCondition", "bUseSteeringYawModifiers" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Yaw Modifier that is added on top of all current Yaw modifiers when using the handbrake. Scales with current steering value and is only applicable when the Vehicle is actually moving. Can be used to apply more extreme camera rotations when drifting." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_HandbrakeYawModifier = { "HandbrakeYawModifier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, HandbrakeYawModifier), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_HandbrakeYawModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_HandbrakeYawModifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseSteeringRollModifiers_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Roll" },
		{ "Comment", "/** False: Don't apply any Roll modification based on steering state, True: Use SpeedToRollMultiplierCurve to apply extra Roll to the camera when turning. This is applied on top of any 'Look At' Camera settings. */" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "False: Don't apply any Roll modification based on steering state, True: Use SpeedToRollMultiplierCurve to apply extra Roll to the camera when turning. This is applied on top of any 'Look At' Camera settings." },
	};
#endif
	void Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseSteeringRollModifiers_SetBit(void* Obj)
	{
		((UCitySampleCam_Driving*)Obj)->bUseSteeringRollModifiers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseSteeringRollModifiers = { "bUseSteeringRollModifiers", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCitySampleCam_Driving), &Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseSteeringRollModifiers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseSteeringRollModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseSteeringRollModifiers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToRollMultiplierCurve_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Roll" },
		{ "Comment", "/** Curve that applies a Roll multiplier based on the vehicles current speed. X = Speed, Y = Roll Multiplier. The multiplier is applied to the current steering rate which has a range from -1 (leftmost), to 1 (rightmost) */" },
		{ "EditCondition", "bUseSteeringRollModifiers" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Curve that applies a Roll multiplier based on the vehicles current speed. X = Speed, Y = Roll Multiplier. The multiplier is applied to the current steering rate which has a range from -1 (leftmost), to 1 (rightmost)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToRollMultiplierCurve = { "SpeedToRollMultiplierCurve", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, SpeedToRollMultiplierCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToRollMultiplierCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToRollMultiplierCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringRollModifierRiseAndFallSpeeds_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Roll" },
		{ "Comment", "/** Rise and fall speeds for the SteeringRollModifier interpolator. Rise = Steering Magnitude > Last frame Magnitude, Fall = Steering Magnitude < Last Frame Magnitude */" },
		{ "EditCondition", "bUseSteeringRollModifiers" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Rise and fall speeds for the SteeringRollModifier interpolator. Rise = Steering Magnitude > Last frame Magnitude, Fall = Steering Magnitude < Last Frame Magnitude" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringRollModifierRiseAndFallSpeeds = { "SteeringRollModifierRiseAndFallSpeeds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, SteeringRollModifierRiseAndFallSpeeds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringRollModifierRiseAndFallSpeeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringRollModifierRiseAndFallSpeeds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToRollMultiplierCurve_Scale_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Roll" },
		{ "Comment", "/** Scales Final Multiplier value of SpeedToRollMultiplierCurve*/" },
		{ "EditCondition", "bUseSteeringRollModifiers" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Scales Final Multiplier value of SpeedToRollMultiplierCurve" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToRollMultiplierCurve_Scale = { "SpeedToRollMultiplierCurve_Scale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, SpeedToRollMultiplierCurve_Scale), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToRollMultiplierCurve_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToRollMultiplierCurve_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToRollMultiplierCurve_SpeedRange_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Roll" },
		{ "Comment", "/** Speeds (in MPH) between which the Roll multiplier will adjust to at runtime when using the SpeedToRollMultiplierCurve*/" },
		{ "EditCondition", "bUseSteeringRollModifiers" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Speeds (in MPH) between which the Roll multiplier will adjust to at runtime when using the SpeedToRollMultiplierCurve" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToRollMultiplierCurve_SpeedRange = { "SpeedToRollMultiplierCurve_SpeedRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, SpeedToRollMultiplierCurve_SpeedRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToRollMultiplierCurve_SpeedRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToRollMultiplierCurve_SpeedRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_HandbrakeRollModifier_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Roll" },
		{ "Comment", "/** Roll Modifier that is added on top of all current Roll modifiers when using the handbrake. Scales with current steering value and is only applicable when the Vehicle is actually moving. Can be used to apply more extreme camera rotations when drifting.*/" },
		{ "EditCondition", "bUseSteeringRollModifiers" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Roll Modifier that is added on top of all current Roll modifiers when using the handbrake. Scales with current steering value and is only applicable when the Vehicle is actually moving. Can be used to apply more extreme camera rotations when drifting." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_HandbrakeRollModifier = { "HandbrakeRollModifier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, HandbrakeRollModifier), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_HandbrakeRollModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_HandbrakeRollModifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_AerialCameraToPivotOffset_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Air Time" },
		{ "Comment", "/** Additive offset to apply to the Camera To Pivot Offset when the vehicle is in the air */" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Additive offset to apply to the Camera To Pivot Offset when the vehicle is in the air" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_AerialCameraToPivotOffset = { "AerialCameraToPivotOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, AerialCameraToPivotOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_AerialCameraToPivotOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_AerialCameraToPivotOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_AerialCameraToPivotOffsetAirTransitionSpeeds_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Air Time" },
		{ "Comment", "/** Double Interp Speeds to use when transitioning TO the air.*/" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Double Interp Speeds to use when transitioning TO the air." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_AerialCameraToPivotOffsetAirTransitionSpeeds = { "AerialCameraToPivotOffsetAirTransitionSpeeds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, AerialCameraToPivotOffsetAirTransitionSpeeds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_AerialCameraToPivotOffsetAirTransitionSpeeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_AerialCameraToPivotOffsetAirTransitionSpeeds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_AerialCameraToPivotOffsetGroundTransitionSpeeds_MetaData[] = {
		{ "Category", "Driving Camera Adjustments|Air Time" },
		{ "Comment", "/** Double Interp Speeds to use when transitioning TO the ground.*/" },
		{ "ModuleRelativePath", "Camera/CitySampleCam_Driving.h" },
		{ "ToolTip", "Double Interp Speeds to use when transitioning TO the ground." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_AerialCameraToPivotOffsetGroundTransitionSpeeds = { "AerialCameraToPivotOffsetGroundTransitionSpeeds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCam_Driving, AerialCameraToPivotOffsetGroundTransitionSpeeds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_AerialCameraToPivotOffsetGroundTransitionSpeeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_AerialCameraToPivotOffsetGroundTransitionSpeeds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleCam_Driving_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLazyFollowLaziness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ReverseCamLazyFollowLaziness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_FowardVelocityThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ReverseVelocityThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LazyFollowSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_HandbrakeFullFollowPostReleaseTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_MinLookAtPointDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLookatWorldSpaceInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLookatWorldSpaceInterpMaxSpeedScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingLookatWorldSpaceInterpScaleRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtReverseOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtForwardTransitionOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookatVectorMultiplierInterpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtManualFollowInterpSpeedTransitionTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtLazyFollowInterpSpeedTransitionTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtManualInterpSpeedTransitionScalar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringToLookAtLateralOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringToLookAtLateralOffsetScales,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LookAtLateralOffsetSteeringThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_LateralLookAtOffsetRiseAndFallSpeeds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingPivotRotInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_DrivingFullFollowPivotRotInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ManualToAutoCameraPivotRotInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ManualToAutoCameraTransitionalYawThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ForwardToReversePivotRotInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_ReverseToForwardPivotRotInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_PivotRotForwardReverseTransitionalYawThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_PivotRotSpeedChangeTimeToTransition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseFOVSpeedAdjustmentCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_FOV_SpeedAdjustmentCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_FOV_SpeedAdjustment_SpeedRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseSteeringYawModifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToYawMultiplierCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringYawModifierInterpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToYawMultiplierCurve_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToYawMultiplierCurve_SpeedRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_HandbrakeYawModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_bUseSteeringRollModifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToRollMultiplierCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SteeringRollModifierRiseAndFallSpeeds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToRollMultiplierCurve_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_SpeedToRollMultiplierCurve_SpeedRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_HandbrakeRollModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_AerialCameraToPivotOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_AerialCameraToPivotOffsetAirTransitionSpeeds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCam_Driving_Statics::NewProp_AerialCameraToPivotOffsetGroundTransitionSpeeds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleCam_Driving_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleCam_Driving>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleCam_Driving_Statics::ClassParams = {
		&UCitySampleCam_Driving::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCitySampleCam_Driving_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCitySampleCam_Driving_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCam_Driving_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCitySampleCam_Driving()
	{
		if (!Z_Registration_Info_UClass_UCitySampleCam_Driving.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleCam_Driving.OuterSingleton, Z_Construct_UClass_UCitySampleCam_Driving_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleCam_Driving.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleCam_Driving>()
	{
		return UCitySampleCam_Driving::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleCam_Driving);
	UCitySampleCam_Driving::~UCitySampleCam_Driving() {}
	struct Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Camera_CitySampleCam_Driving_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Camera_CitySampleCam_Driving_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleCam_Driving, UCitySampleCam_Driving::StaticClass, TEXT("UCitySampleCam_Driving"), &Z_Registration_Info_UClass_UCitySampleCam_Driving, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleCam_Driving), 3671951335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Camera_CitySampleCam_Driving_h_1402438653(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Camera_CitySampleCam_Driving_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Camera_CitySampleCam_Driving_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
