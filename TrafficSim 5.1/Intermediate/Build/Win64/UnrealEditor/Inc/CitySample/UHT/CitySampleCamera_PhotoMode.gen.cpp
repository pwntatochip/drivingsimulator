// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Camera/CitySampleCamera_PhotoMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleCamera_PhotoMode() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCamera_PhotoMode();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCamera_PhotoMode_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCameraMode();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	DEFINE_FUNCTION(UCitySampleCamera_PhotoMode::execGetPhotoModeCustomFocusDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPhotoModeCustomFocusDistance();
		P_NATIVE_END;
	}
	void UCitySampleCamera_PhotoMode::StaticRegisterNativesUCitySampleCamera_PhotoMode()
	{
		UClass* Class = UCitySampleCamera_PhotoMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPhotoModeCustomFocusDistance", &UCitySampleCamera_PhotoMode::execGetPhotoModeCustomFocusDistance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics
	{
		struct CitySampleCamera_PhotoMode_eventGetPhotoModeCustomFocusDistance_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleCamera_PhotoMode_eventGetPhotoModeCustomFocusDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//~ End UCitySampleCameraMode Interface\n" },
		{ "ModuleRelativePath", "Camera/CitySampleCamera_PhotoMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCamera_PhotoMode, nullptr, "GetPhotoModeCustomFocusDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics::CitySampleCamera_PhotoMode_eventGetPhotoModeCustomFocusDistance_Parms), Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleCamera_PhotoMode);
	UClass* Z_Construct_UClass_UCitySampleCamera_PhotoMode_NoRegister()
	{
		return UCitySampleCamera_PhotoMode::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhotoModeAutoFocusTraceDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PhotoModeAutoFocusTraceDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereTraceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereTraceRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCitySampleCameraMode,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleCamera_PhotoMode_GetPhotoModeCustomFocusDistance, "GetPhotoModeCustomFocusDistance" }, // 2937880618
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Camera mode that works in tandem with the PhotoModeComponent to apply user controlled adjustments to the cine cam component used for Photo Mode\n */" },
		{ "IncludePath", "Camera/CitySampleCamera_PhotoMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Camera/CitySampleCamera_PhotoMode.h" },
		{ "ToolTip", "Camera mode that works in tandem with the PhotoModeComponent to apply user controlled adjustments to the cine cam component used for Photo Mode" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::NewProp_PhotoModeAutoFocusTraceDistance_MetaData[] = {
		{ "Category", "CitySampleCamera_PhotoMode" },
		{ "Comment", "/** Distance used for auto focus traces and also a default max value for the focus distance*/" },
		{ "ModuleRelativePath", "Camera/CitySampleCamera_PhotoMode.h" },
		{ "ToolTip", "Distance used for auto focus traces and also a default max value for the focus distance" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::NewProp_PhotoModeAutoFocusTraceDistance = { "PhotoModeAutoFocusTraceDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCamera_PhotoMode, PhotoModeAutoFocusTraceDistance), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::NewProp_PhotoModeAutoFocusTraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::NewProp_PhotoModeAutoFocusTraceDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::NewProp_SphereTraceRadius_MetaData[] = {
		{ "Category", "CitySampleCamera_PhotoMode" },
		{ "Comment", "/** Radius for sphere used in auto focus trace. This gives a bit of leeway when trying to focus on an object in the world*/" },
		{ "ModuleRelativePath", "Camera/CitySampleCamera_PhotoMode.h" },
		{ "ToolTip", "Radius for sphere used in auto focus trace. This gives a bit of leeway when trying to focus on an object in the world" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::NewProp_SphereTraceRadius = { "SphereTraceRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCamera_PhotoMode, SphereTraceRadius), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::NewProp_SphereTraceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::NewProp_SphereTraceRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::NewProp_PhotoModeAutoFocusTraceDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::NewProp_SphereTraceRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleCamera_PhotoMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::ClassParams = {
		&UCitySampleCamera_PhotoMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCitySampleCamera_PhotoMode()
	{
		if (!Z_Registration_Info_UClass_UCitySampleCamera_PhotoMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleCamera_PhotoMode.OuterSingleton, Z_Construct_UClass_UCitySampleCamera_PhotoMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleCamera_PhotoMode.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleCamera_PhotoMode>()
	{
		return UCitySampleCamera_PhotoMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleCamera_PhotoMode);
	UCitySampleCamera_PhotoMode::~UCitySampleCamera_PhotoMode() {}
	struct Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Camera_CitySampleCamera_PhotoMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Camera_CitySampleCamera_PhotoMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleCamera_PhotoMode, UCitySampleCamera_PhotoMode::StaticClass, TEXT("UCitySampleCamera_PhotoMode"), &Z_Registration_Info_UClass_UCitySampleCamera_PhotoMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleCamera_PhotoMode), 1463987926U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Camera_CitySampleCamera_PhotoMode_h_3190619342(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Camera_CitySampleCamera_PhotoMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Camera_CitySampleCamera_PhotoMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS