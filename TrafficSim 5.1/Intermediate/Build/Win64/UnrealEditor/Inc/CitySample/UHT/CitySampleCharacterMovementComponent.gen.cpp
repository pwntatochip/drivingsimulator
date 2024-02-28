// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Character/CitySampleCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleCharacterMovementComponent() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCharacterMovementComponent();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	DEFINE_FUNCTION(UCitySampleCharacterMovementComponent::execWasSlideAlongSurfaceBlockedRecently)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasSlideAlongSurfaceBlockedRecently(Z_Param_Tolerance);
		P_NATIVE_END;
	}
	void UCitySampleCharacterMovementComponent::StaticRegisterNativesUCitySampleCharacterMovementComponent()
	{
		UClass* Class = UCitySampleCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WasSlideAlongSurfaceBlockedRecently", &UCitySampleCharacterMovementComponent::execWasSlideAlongSurfaceBlockedRecently },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics
	{
		struct CitySampleCharacterMovementComponent_eventWasSlideAlongSurfaceBlockedRecently_Parms
		{
			float Tolerance;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleCharacterMovementComponent_eventWasSlideAlongSurfaceBlockedRecently_Parms, Tolerance), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleCharacterMovementComponent_eventWasSlideAlongSurfaceBlockedRecently_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CitySampleCharacterMovementComponent_eventWasSlideAlongSurfaceBlockedRecently_Parms), &Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_Tolerance", "0.010000" },
		{ "ModuleRelativePath", "Character/CitySampleCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleCharacterMovementComponent, nullptr, "WasSlideAlongSurfaceBlockedRecently", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::CitySampleCharacterMovementComponent_eventWasSlideAlongSurfaceBlockedRecently_Parms), Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleCharacterMovementComponent);
	UClass* Z_Construct_UClass_UCitySampleCharacterMovementComponent_NoRegister()
	{
		return UCitySampleCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinInputAccelerationSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinInputAccelerationSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinHorizontalSurfaceSlideAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHorizontalSurfaceSlideAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinHorizontalSurfaceSlideAngleCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHorizontalSurfaceSlideAngleCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLastSurfaceWasCharacter_MetaData[];
#endif
		static void NewProp_bLastSurfaceWasCharacter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLastSurfaceWasCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAnimAuthoritativeRotation_MetaData[];
#endif
		static void NewProp_bUseAnimAuthoritativeRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAnimAuthoritativeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMassEntityRotation_MetaData[];
#endif
		static void NewProp_bUseMassEntityRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMassEntityRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleCharacterMovementComponent_WasSlideAlongSurfaceBlockedRecently, "WasSlideAlongSurfaceBlockedRecently" }, // 710517510
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Character/CitySampleCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Character/CitySampleCharacterMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_MinInputAccelerationSize_MetaData[] = {
		{ "Category", "CitySampleCharacterMovementComponent" },
		{ "Comment", "// ConstraintInputAcceleration will interpolate the input size to go from this value to 1.\n" },
		{ "ModuleRelativePath", "Character/CitySampleCharacterMovementComponent.h" },
		{ "ToolTip", "ConstraintInputAcceleration will interpolate the input size to go from this value to 1." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_MinInputAccelerationSize = { "MinInputAccelerationSize", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCharacterMovementComponent, MinInputAccelerationSize), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_MinInputAccelerationSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_MinInputAccelerationSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_MinHorizontalSurfaceSlideAngle_MetaData[] = {
		{ "Category", "CitySampleCharacterMovementComponent" },
		{ "Comment", "// Minimum angle for movement to slide against. This prevents sliding against very sharp angles that will result in very small movements. Only active if greater than 0.\n" },
		{ "ModuleRelativePath", "Character/CitySampleCharacterMovementComponent.h" },
		{ "ToolTip", "Minimum angle for movement to slide against. This prevents sliding against very sharp angles that will result in very small movements. Only active if greater than 0." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_MinHorizontalSurfaceSlideAngle = { "MinHorizontalSurfaceSlideAngle", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCharacterMovementComponent, MinHorizontalSurfaceSlideAngle), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_MinHorizontalSurfaceSlideAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_MinHorizontalSurfaceSlideAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_MinHorizontalSurfaceSlideAngleCharacter_MetaData[] = {
		{ "Category", "CitySampleCharacterMovementComponent" },
		{ "Comment", "// Minimum angle for movement to slide against when colliding against a character\n" },
		{ "ModuleRelativePath", "Character/CitySampleCharacterMovementComponent.h" },
		{ "ToolTip", "Minimum angle for movement to slide against when colliding against a character" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_MinHorizontalSurfaceSlideAngleCharacter = { "MinHorizontalSurfaceSlideAngleCharacter", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCitySampleCharacterMovementComponent, MinHorizontalSurfaceSlideAngleCharacter), METADATA_PARAMS(Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_MinHorizontalSurfaceSlideAngleCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_MinHorizontalSurfaceSlideAngleCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bLastSurfaceWasCharacter_MetaData[] = {
		{ "Category", "CitySampleCharacterMovementComponent" },
		{ "ModuleRelativePath", "Character/CitySampleCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bLastSurfaceWasCharacter_SetBit(void* Obj)
	{
		((UCitySampleCharacterMovementComponent*)Obj)->bLastSurfaceWasCharacter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bLastSurfaceWasCharacter = { "bLastSurfaceWasCharacter", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCitySampleCharacterMovementComponent), &Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bLastSurfaceWasCharacter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bLastSurfaceWasCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bLastSurfaceWasCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bUseAnimAuthoritativeRotation_MetaData[] = {
		{ "Category", "CitySampleCharacterMovementComponent" },
		{ "ModuleRelativePath", "Character/CitySampleCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bUseAnimAuthoritativeRotation_SetBit(void* Obj)
	{
		((UCitySampleCharacterMovementComponent*)Obj)->bUseAnimAuthoritativeRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bUseAnimAuthoritativeRotation = { "bUseAnimAuthoritativeRotation", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCitySampleCharacterMovementComponent), &Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bUseAnimAuthoritativeRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bUseAnimAuthoritativeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bUseAnimAuthoritativeRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bUseMassEntityRotation_MetaData[] = {
		{ "Category", "CitySampleCharacterMovementComponent" },
		{ "ModuleRelativePath", "Character/CitySampleCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bUseMassEntityRotation_SetBit(void* Obj)
	{
		((UCitySampleCharacterMovementComponent*)Obj)->bUseMassEntityRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bUseMassEntityRotation = { "bUseMassEntityRotation", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCitySampleCharacterMovementComponent), &Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bUseMassEntityRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bUseMassEntityRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bUseMassEntityRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_MinInputAccelerationSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_MinHorizontalSurfaceSlideAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_MinHorizontalSurfaceSlideAngleCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bLastSurfaceWasCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bUseAnimAuthoritativeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::NewProp_bUseMassEntityRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleCharacterMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::ClassParams = {
		&UCitySampleCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCitySampleCharacterMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UCitySampleCharacterMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UCitySampleCharacterMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleCharacterMovementComponent.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleCharacterMovementComponent>()
	{
		return UCitySampleCharacterMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleCharacterMovementComponent);
	UCitySampleCharacterMovementComponent::~UCitySampleCharacterMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Character_CitySampleCharacterMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Character_CitySampleCharacterMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleCharacterMovementComponent, UCitySampleCharacterMovementComponent::StaticClass, TEXT("UCitySampleCharacterMovementComponent"), &Z_Registration_Info_UClass_UCitySampleCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleCharacterMovementComponent), 572389089U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Character_CitySampleCharacterMovementComponent_h_3484910197(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Character_CitySampleCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Character_CitySampleCharacterMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
