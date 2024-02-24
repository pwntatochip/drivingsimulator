// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Game/CitySamplePlayFromHere.h"
#include "Engine/Public/WorldPartition/DataLayer/ActorDataLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySamplePlayFromHere() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySamplePlayFromHere();
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySamplePlayFromHere_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorDataLayer();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	static FName NAME_ACitySamplePlayFromHere_PlayFromHereEvent = FName(TEXT("PlayFromHereEvent"));
	void ACitySamplePlayFromHere::PlayFromHereEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACitySamplePlayFromHere_PlayFromHereEvent),NULL);
	}
	void ACitySamplePlayFromHere::StaticRegisterNativesACitySamplePlayFromHere()
	{
	}
	struct Z_Construct_UFunction_ACitySamplePlayFromHere_PlayFromHereEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySamplePlayFromHere_PlayFromHereEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFromHere" },
		{ "Comment", "/** blueprint event: this will get called before BeginPlay if this actor was choosen to play from here. */" },
		{ "ModuleRelativePath", "Game/CitySamplePlayFromHere.h" },
		{ "ToolTip", "blueprint event: this will get called before BeginPlay if this actor was choosen to play from here." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayFromHere_PlayFromHereEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayFromHere, nullptr, "PlayFromHereEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACitySamplePlayFromHere_PlayFromHereEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayFromHere_PlayFromHereEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACitySamplePlayFromHere_PlayFromHereEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayFromHere_PlayFromHereEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACitySamplePlayFromHere);
	UClass* Z_Construct_UClass_ACitySamplePlayFromHere_NoRegister()
	{
		return ACitySamplePlayFromHere::StaticClass();
	}
	struct Z_Construct_UClass_ACitySamplePlayFromHere_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideActiveDataLayers_MetaData[];
#endif
		static void NewProp_bOverrideActiveDataLayers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideActiveDataLayers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveDataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveDataLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideLoadedDataLayers_MetaData[];
#endif
		static void NewProp_bOverrideLoadedDataLayers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLoadedDataLayers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadedDataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedDataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadedDataLayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACitySamplePlayFromHere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACitySamplePlayFromHere_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACitySamplePlayFromHere_PlayFromHereEvent, "PlayFromHereEvent" }, // 998033119
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayFromHere_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "DataLayers Cooking HLOD Input WorldPartition Collision Replication Rendering" },
		{ "IncludePath", "Game/CitySamplePlayFromHere.h" },
		{ "ModuleRelativePath", "Game/CitySamplePlayFromHere.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_bOverrideActiveDataLayers_MetaData[] = {
		{ "Category", "PlayFromHere" },
		{ "ModuleRelativePath", "Game/CitySamplePlayFromHere.h" },
	};
#endif
	void Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_bOverrideActiveDataLayers_SetBit(void* Obj)
	{
		((ACitySamplePlayFromHere*)Obj)->bOverrideActiveDataLayers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_bOverrideActiveDataLayers = { "bOverrideActiveDataLayers", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACitySamplePlayFromHere), &Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_bOverrideActiveDataLayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_bOverrideActiveDataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_bOverrideActiveDataLayers_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_ActiveDataLayers_Inner = { "ActiveDataLayers", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(nullptr, 0) }; // 1259195716
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_ActiveDataLayers_MetaData[] = {
		{ "Category", "PlayFromHere" },
		{ "EditCondition", "bOverrideActiveDataLayers" },
		{ "ModuleRelativePath", "Game/CitySamplePlayFromHere.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_ActiveDataLayers = { "ActiveDataLayers", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACitySamplePlayFromHere, ActiveDataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_ActiveDataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_ActiveDataLayers_MetaData)) }; // 1259195716
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_bOverrideLoadedDataLayers_MetaData[] = {
		{ "Category", "PlayFromHere" },
		{ "ModuleRelativePath", "Game/CitySamplePlayFromHere.h" },
	};
#endif
	void Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_bOverrideLoadedDataLayers_SetBit(void* Obj)
	{
		((ACitySamplePlayFromHere*)Obj)->bOverrideLoadedDataLayers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_bOverrideLoadedDataLayers = { "bOverrideLoadedDataLayers", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACitySamplePlayFromHere), &Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_bOverrideLoadedDataLayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_bOverrideLoadedDataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_bOverrideLoadedDataLayers_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_LoadedDataLayers_Inner = { "LoadedDataLayers", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(nullptr, 0) }; // 1259195716
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_LoadedDataLayers_MetaData[] = {
		{ "Category", "PlayFromHere" },
		{ "EditCondition", "bOverrideLoadedDataLayers" },
		{ "ModuleRelativePath", "Game/CitySamplePlayFromHere.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_LoadedDataLayers = { "LoadedDataLayers", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACitySamplePlayFromHere, LoadedDataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_LoadedDataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_LoadedDataLayers_MetaData)) }; // 1259195716
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACitySamplePlayFromHere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_bOverrideActiveDataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_ActiveDataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_ActiveDataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_bOverrideLoadedDataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_LoadedDataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayFromHere_Statics::NewProp_LoadedDataLayers,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACitySamplePlayFromHere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACitySamplePlayFromHere>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACitySamplePlayFromHere_Statics::ClassParams = {
		&ACitySamplePlayFromHere::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ACitySamplePlayFromHere_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayFromHere_Statics::PropPointers), 0),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACitySamplePlayFromHere_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayFromHere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACitySamplePlayFromHere()
	{
		if (!Z_Registration_Info_UClass_ACitySamplePlayFromHere.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACitySamplePlayFromHere.OuterSingleton, Z_Construct_UClass_ACitySamplePlayFromHere_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACitySamplePlayFromHere.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<ACitySamplePlayFromHere>()
	{
		return ACitySamplePlayFromHere::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACitySamplePlayFromHere);
	ACitySamplePlayFromHere::~ACitySamplePlayFromHere() {}
	struct Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayFromHere_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayFromHere_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACitySamplePlayFromHere, ACitySamplePlayFromHere::StaticClass, TEXT("ACitySamplePlayFromHere"), &Z_Registration_Info_UClass_ACitySamplePlayFromHere, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACitySamplePlayFromHere), 2762625053U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayFromHere_h_1881658210(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayFromHere_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayFromHere_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
