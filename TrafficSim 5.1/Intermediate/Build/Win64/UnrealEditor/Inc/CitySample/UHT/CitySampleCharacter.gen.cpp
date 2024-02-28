// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Character/CitySampleCharacter.h"
#include "InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleCharacter() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleCharacter();
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleCharacter_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleControlsOverlayInterface_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleInputInterface_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleTraversalInterface_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleUIComponentInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	DEFINE_FUNCTION(ACitySampleCharacter::execIsDriving)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDriving();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleCharacter::execGetDesiredSprintMinInputSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDesiredSprintMinInputSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleCharacter::execGetDesiredWalkMinInputSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDesiredWalkMinInputSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleCharacter::execGetDesiredSprintSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDesiredSprintSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleCharacter::execGetDesiredWalkSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDesiredWalkSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleCharacter::execSetIsSprinting)
	{
		P_GET_UBOOL(Z_Param_bNewIsSprinting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsSprinting(Z_Param_bNewIsSprinting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleCharacter::execGetIsSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsSprinting();
		P_NATIVE_END;
	}
	struct CitySampleCharacter_eventOnIsSprintingChanged_Parms
	{
		bool bNewIsSprinting;
	};
	static FName NAME_ACitySampleCharacter_OnIsSprintingChanged = FName(TEXT("OnIsSprintingChanged"));
	void ACitySampleCharacter::OnIsSprintingChanged(bool bNewIsSprinting)
	{
		CitySampleCharacter_eventOnIsSprintingChanged_Parms Parms;
		Parms.bNewIsSprinting=bNewIsSprinting ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ACitySampleCharacter_OnIsSprintingChanged),&Parms);
	}
	void ACitySampleCharacter::StaticRegisterNativesACitySampleCharacter()
	{
		UClass* Class = ACitySampleCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDesiredSprintMinInputSize", &ACitySampleCharacter::execGetDesiredSprintMinInputSize },
			{ "GetDesiredSprintSpeed", &ACitySampleCharacter::execGetDesiredSprintSpeed },
			{ "GetDesiredWalkMinInputSize", &ACitySampleCharacter::execGetDesiredWalkMinInputSize },
			{ "GetDesiredWalkSpeed", &ACitySampleCharacter::execGetDesiredWalkSpeed },
			{ "GetIsSprinting", &ACitySampleCharacter::execGetIsSprinting },
			{ "IsDriving", &ACitySampleCharacter::execIsDriving },
			{ "SetIsSprinting", &ACitySampleCharacter::execSetIsSprinting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintMinInputSize_Statics
	{
		struct CitySampleCharacter_eventGetDesiredSprintMinInputSize_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintMinInputSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleCharacter_eventGetDesiredSprintMinInputSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintMinInputSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintMinInputSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintMinInputSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintMinInputSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleCharacter, nullptr, "GetDesiredSprintMinInputSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintMinInputSize_Statics::CitySampleCharacter_eventGetDesiredSprintMinInputSize_Parms), Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintMinInputSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintMinInputSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintMinInputSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintMinInputSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintMinInputSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintMinInputSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintSpeed_Statics
	{
		struct CitySampleCharacter_eventGetDesiredSprintSpeed_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleCharacter_eventGetDesiredSprintSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleCharacter, nullptr, "GetDesiredSprintSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintSpeed_Statics::CitySampleCharacter_eventGetDesiredSprintSpeed_Parms), Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkMinInputSize_Statics
	{
		struct CitySampleCharacter_eventGetDesiredWalkMinInputSize_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkMinInputSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleCharacter_eventGetDesiredWalkMinInputSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkMinInputSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkMinInputSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkMinInputSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkMinInputSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleCharacter, nullptr, "GetDesiredWalkMinInputSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkMinInputSize_Statics::CitySampleCharacter_eventGetDesiredWalkMinInputSize_Parms), Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkMinInputSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkMinInputSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkMinInputSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkMinInputSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkMinInputSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkMinInputSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkSpeed_Statics
	{
		struct CitySampleCharacter_eventGetDesiredWalkSpeed_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CitySampleCharacter_eventGetDesiredWalkSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleCharacter, nullptr, "GetDesiredWalkSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkSpeed_Statics::CitySampleCharacter_eventGetDesiredWalkSpeed_Parms), Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleCharacter_GetIsSprinting_Statics
	{
		struct CitySampleCharacter_eventGetIsSprinting_Parms
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
	void Z_Construct_UFunction_ACitySampleCharacter_GetIsSprinting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleCharacter_eventGetIsSprinting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySampleCharacter_GetIsSprinting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CitySampleCharacter_eventGetIsSprinting_Parms), &Z_Construct_UFunction_ACitySampleCharacter_GetIsSprinting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleCharacter_GetIsSprinting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleCharacter_GetIsSprinting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCharacter_GetIsSprinting_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//~ End ICitySampleInputInterface Interface\n" },
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleCharacter_GetIsSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleCharacter, nullptr, "GetIsSprinting", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACitySampleCharacter_GetIsSprinting_Statics::CitySampleCharacter_eventGetIsSprinting_Parms), Z_Construct_UFunction_ACitySampleCharacter_GetIsSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCharacter_GetIsSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACitySampleCharacter_GetIsSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCharacter_GetIsSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACitySampleCharacter_GetIsSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleCharacter_GetIsSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleCharacter_IsDriving_Statics
	{
		struct CitySampleCharacter_eventIsDriving_Parms
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
	void Z_Construct_UFunction_ACitySampleCharacter_IsDriving_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleCharacter_eventIsDriving_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySampleCharacter_IsDriving_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CitySampleCharacter_eventIsDriving_Parms), &Z_Construct_UFunction_ACitySampleCharacter_IsDriving_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleCharacter_IsDriving_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleCharacter_IsDriving_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCharacter_IsDriving_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns true if this character is driving a vehicle */" },
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
		{ "ToolTip", "Returns true if this character is driving a vehicle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleCharacter_IsDriving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleCharacter, nullptr, "IsDriving", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACitySampleCharacter_IsDriving_Statics::CitySampleCharacter_eventIsDriving_Parms), Z_Construct_UFunction_ACitySampleCharacter_IsDriving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCharacter_IsDriving_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACitySampleCharacter_IsDriving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCharacter_IsDriving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACitySampleCharacter_IsDriving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleCharacter_IsDriving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleCharacter_OnIsSprintingChanged_Statics
	{
		static void NewProp_bNewIsSprinting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewIsSprinting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACitySampleCharacter_OnIsSprintingChanged_Statics::NewProp_bNewIsSprinting_SetBit(void* Obj)
	{
		((CitySampleCharacter_eventOnIsSprintingChanged_Parms*)Obj)->bNewIsSprinting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySampleCharacter_OnIsSprintingChanged_Statics::NewProp_bNewIsSprinting = { "bNewIsSprinting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CitySampleCharacter_eventOnIsSprintingChanged_Parms), &Z_Construct_UFunction_ACitySampleCharacter_OnIsSprintingChanged_Statics::NewProp_bNewIsSprinting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleCharacter_OnIsSprintingChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleCharacter_OnIsSprintingChanged_Statics::NewProp_bNewIsSprinting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCharacter_OnIsSprintingChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** BP hook for when the character's sprinting state changes */" },
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
		{ "ToolTip", "BP hook for when the character's sprinting state changes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleCharacter_OnIsSprintingChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleCharacter, nullptr, "OnIsSprintingChanged", nullptr, nullptr, sizeof(CitySampleCharacter_eventOnIsSprintingChanged_Parms), Z_Construct_UFunction_ACitySampleCharacter_OnIsSprintingChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCharacter_OnIsSprintingChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACitySampleCharacter_OnIsSprintingChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCharacter_OnIsSprintingChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACitySampleCharacter_OnIsSprintingChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleCharacter_OnIsSprintingChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleCharacter_SetIsSprinting_Statics
	{
		struct CitySampleCharacter_eventSetIsSprinting_Parms
		{
			bool bNewIsSprinting;
		};
		static void NewProp_bNewIsSprinting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewIsSprinting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACitySampleCharacter_SetIsSprinting_Statics::NewProp_bNewIsSprinting_SetBit(void* Obj)
	{
		((CitySampleCharacter_eventSetIsSprinting_Parms*)Obj)->bNewIsSprinting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySampleCharacter_SetIsSprinting_Statics::NewProp_bNewIsSprinting = { "bNewIsSprinting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CitySampleCharacter_eventSetIsSprinting_Parms), &Z_Construct_UFunction_ACitySampleCharacter_SetIsSprinting_Statics::NewProp_bNewIsSprinting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleCharacter_SetIsSprinting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleCharacter_SetIsSprinting_Statics::NewProp_bNewIsSprinting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleCharacter_SetIsSprinting_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Sets sprinting flag and calls OnIsSprintingChanged BIE if valid */" },
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
		{ "ToolTip", "Sets sprinting flag and calls OnIsSprintingChanged BIE if valid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleCharacter_SetIsSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleCharacter, nullptr, "SetIsSprinting", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACitySampleCharacter_SetIsSprinting_Statics::CitySampleCharacter_eventSetIsSprinting_Parms), Z_Construct_UFunction_ACitySampleCharacter_SetIsSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCharacter_SetIsSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACitySampleCharacter_SetIsSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleCharacter_SetIsSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACitySampleCharacter_SetIsSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleCharacter_SetIsSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACitySampleCharacter);
	UClass* Z_Construct_UClass_ACitySampleCharacter_NoRegister()
	{
		return ACitySampleCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACitySampleCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComponent;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSprinting_MetaData[];
#endif
		static void NewProp_bIsSprinting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSprinting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSprintSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultSprintSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultWalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWalkMinInputSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultWalkMinInputSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSprintMinInputSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultSprintMinInputSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookControlsInputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookControlsInputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookDeltaAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookDeltaAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputMappingPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACitySampleCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACitySampleCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintMinInputSize, "GetDesiredSprintMinInputSize" }, // 4151134
		{ &Z_Construct_UFunction_ACitySampleCharacter_GetDesiredSprintSpeed, "GetDesiredSprintSpeed" }, // 1245819105
		{ &Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkMinInputSize, "GetDesiredWalkMinInputSize" }, // 2770903073
		{ &Z_Construct_UFunction_ACitySampleCharacter_GetDesiredWalkSpeed, "GetDesiredWalkSpeed" }, // 2289840116
		{ &Z_Construct_UFunction_ACitySampleCharacter_GetIsSprinting, "GetIsSprinting" }, // 1158528328
		{ &Z_Construct_UFunction_ACitySampleCharacter_IsDriving, "IsDriving" }, // 2830758577
		{ &Z_Construct_UFunction_ACitySampleCharacter_OnIsSprintingChanged, "OnIsSprintingChanged" }, // 4152939256
		{ &Z_Construct_UFunction_ACitySampleCharacter_SetIsSprinting, "SetIsSprinting" }, // 1702987839
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/CitySampleCharacter.h" },
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_MotionWarpingComponent_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Reference to owned motion warping component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
		{ "ToolTip", "Reference to owned motion warping component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_MotionWarpingComponent = { "MotionWarpingComponent", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACitySampleCharacter, MotionWarpingComponent), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_MotionWarpingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_MotionWarpingComponent_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputActionDescriptions_ValueProp = { "InputActionDescriptions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputActionDescriptions_Key_KeyProp = { "InputActionDescriptions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputActionDescriptions_MetaData[] = {
		{ "Category", "Controls Overlay" },
		{ "Comment", "/** Mapping of pawn relevant InputActions to their string description for the controls overlay UI. */" },
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
		{ "ToolTip", "Mapping of pawn relevant InputActions to their string description for the controls overlay UI." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputActionDescriptions = { "InputActionDescriptions", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACitySampleCharacter, InputActionDescriptions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputActionDescriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputActionDescriptions_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputKeyDescriptionOverrides_ValueProp = { "InputKeyDescriptionOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputKeyDescriptionOverrides_Key_KeyProp = { "InputKeyDescriptionOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputKeyDescriptionOverrides_MetaData[] = {
		{ "Category", "Controls Overlay" },
		{ "Comment", "/** Mapping of pawn relevant input keys to their string description for the controls overlay UI. */" },
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
		{ "ToolTip", "Mapping of pawn relevant input keys to their string description for the controls overlay UI." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputKeyDescriptionOverrides = { "InputKeyDescriptionOverrides", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACitySampleCharacter, InputKeyDescriptionOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputKeyDescriptionOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputKeyDescriptionOverrides_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACitySampleCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACitySampleCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_bIsSprinting_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintSetter", "SetIsSprinting" },
		{ "Category", "CitySampleCharacter" },
		{ "Comment", "/** Flag that indicates whether the character is currently sprinting */" },
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
		{ "ToolTip", "Flag that indicates whether the character is currently sprinting" },
	};
#endif
	void Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_bIsSprinting_SetBit(void* Obj)
	{
		((ACitySampleCharacter*)Obj)->bIsSprinting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_bIsSprinting = { "bIsSprinting", nullptr, (EPropertyFlags)0x0040000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACitySampleCharacter), &Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_bIsSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_bIsSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_bIsSprinting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_DefaultSprintSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CitySampleCharacter" },
		{ "Comment", "/** Speed Character attempts to reach when sprinting */" },
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
		{ "ToolTip", "Speed Character attempts to reach when sprinting" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_DefaultSprintSpeed = { "DefaultSprintSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACitySampleCharacter, DefaultSprintSpeed), METADATA_PARAMS(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_DefaultSprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_DefaultSprintSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_DefaultWalkSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CitySampleCharacter" },
		{ "Comment", "/** Speed Character attempts to reach when walking */" },
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
		{ "ToolTip", "Speed Character attempts to reach when walking" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_DefaultWalkSpeed = { "DefaultWalkSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACitySampleCharacter, DefaultWalkSpeed), METADATA_PARAMS(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_DefaultWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_DefaultWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_DefaultWalkMinInputSize_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CitySampleCharacter" },
		{ "Comment", "/** Starting input acceleration size passed to the movement component when walking */" },
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
		{ "ToolTip", "Starting input acceleration size passed to the movement component when walking" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_DefaultWalkMinInputSize = { "DefaultWalkMinInputSize", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACitySampleCharacter, DefaultWalkMinInputSize), METADATA_PARAMS(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_DefaultWalkMinInputSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_DefaultWalkMinInputSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_DefaultSprintMinInputSize_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CitySampleCharacter" },
		{ "Comment", "/** Starting input acceleration size passed to the movement component when sprinting */" },
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
		{ "ToolTip", "Starting input acceleration size passed to the movement component when sprinting" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_DefaultSprintMinInputSize = { "DefaultSprintMinInputSize", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACitySampleCharacter, DefaultSprintMinInputSize), METADATA_PARAMS(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_DefaultSprintMinInputSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_DefaultSprintMinInputSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Input Mapping and Input Actions that Characters depend on */" },
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
		{ "ToolTip", "Input Mapping and Input Actions that Characters depend on" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACitySampleCharacter, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACitySampleCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_LookControlsInputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_LookControlsInputMappingContext = { "LookControlsInputMappingContext", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACitySampleCharacter, LookControlsInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_LookControlsInputMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_LookControlsInputMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACitySampleCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_LookAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_LookDeltaAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_LookDeltaAction = { "LookDeltaAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACitySampleCharacter, LookDeltaAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_LookDeltaAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_LookDeltaAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputMappingPriority_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/CitySampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputMappingPriority = { "InputMappingPriority", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACitySampleCharacter, InputMappingPriority), METADATA_PARAMS(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputMappingPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputMappingPriority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACitySampleCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_MotionWarpingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputActionDescriptions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputActionDescriptions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputActionDescriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputKeyDescriptionOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputKeyDescriptionOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputKeyDescriptionOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_BaseTurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_BaseLookUpRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_bIsSprinting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_DefaultSprintSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_DefaultWalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_DefaultWalkMinInputSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_DefaultSprintMinInputSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_LookControlsInputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_LookDeltaAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleCharacter_Statics::NewProp_InputMappingPriority,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACitySampleCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCitySampleTraversalInterface_NoRegister, (int32)VTABLE_OFFSET(ACitySampleCharacter, ICitySampleTraversalInterface), false },  // 1092184915
			{ Z_Construct_UClass_UCitySampleUIComponentInterface_NoRegister, (int32)VTABLE_OFFSET(ACitySampleCharacter, ICitySampleUIComponentInterface), false },  // 3268548965
			{ Z_Construct_UClass_UCitySampleControlsOverlayInterface_NoRegister, (int32)VTABLE_OFFSET(ACitySampleCharacter, ICitySampleControlsOverlayInterface), false },  // 906653447
			{ Z_Construct_UClass_UCitySampleInputInterface_NoRegister, (int32)VTABLE_OFFSET(ACitySampleCharacter, ICitySampleInputInterface), false },  // 718015800
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACitySampleCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACitySampleCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACitySampleCharacter_Statics::ClassParams = {
		&ACitySampleCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACitySampleCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACitySampleCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACitySampleCharacter()
	{
		if (!Z_Registration_Info_UClass_ACitySampleCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACitySampleCharacter.OuterSingleton, Z_Construct_UClass_ACitySampleCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACitySampleCharacter.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<ACitySampleCharacter>()
	{
		return ACitySampleCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACitySampleCharacter);
	ACitySampleCharacter::~ACitySampleCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Character_CitySampleCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Character_CitySampleCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACitySampleCharacter, ACitySampleCharacter::StaticClass, TEXT("ACitySampleCharacter"), &Z_Registration_Info_UClass_ACitySampleCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACitySampleCharacter), 981373611U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Character_CitySampleCharacter_h_3983264463(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Character_CitySampleCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Character_CitySampleCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
