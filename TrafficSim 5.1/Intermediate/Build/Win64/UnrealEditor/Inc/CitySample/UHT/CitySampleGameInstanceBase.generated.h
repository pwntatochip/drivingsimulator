// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/CitySampleGameInstanceBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCitySampleSaveGame;
#ifdef CITYSAMPLE_CitySampleGameInstanceBase_generated_h
#error "CitySampleGameInstanceBase.generated.h already included, missing '#pragma once' in CitySampleGameInstanceBase.h"
#endif
#define CITYSAMPLE_CitySampleGameInstanceBase_generated_h

#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameInstanceBase_h_11_DELEGATE \
struct _Script_CitySample_eventCitySampleOnSaveGameLoaded_Parms \
{ \
	const UCitySampleSaveGame* LoadedSaveGame; \
}; \
static inline void FCitySampleOnSaveGameLoaded_DelegateWrapper(const FMulticastScriptDelegate& CitySampleOnSaveGameLoaded, const UCitySampleSaveGame* LoadedSaveGame) \
{ \
	_Script_CitySample_eventCitySampleOnSaveGameLoaded_Parms Parms; \
	Parms.LoadedSaveGame=LoadedSaveGame; \
	CitySampleOnSaveGameLoaded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameInstanceBase_h_16_SPARSE_DATA
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameInstanceBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetNaniteVisualization); \
	DECLARE_FUNCTION(execSetNaniteVisualization); \
	DECLARE_FUNCTION(execGetCurrentNaniteVisualization); \
	DECLARE_FUNCTION(execSetRumbleEnabled); \
	DECLARE_FUNCTION(execGetRumbleEnabled); \
	DECLARE_FUNCTION(execSetLookSensitivity); \
	DECLARE_FUNCTION(execGetLookSensitivity); \
	DECLARE_FUNCTION(execSetInvertedAxes); \
	DECLARE_FUNCTION(execGetInvertedAxes); \
	DECLARE_FUNCTION(execClearCitySampleSaveData); \
	DECLARE_FUNCTION(execIsSaveGameLoaded); \
	DECLARE_FUNCTION(execSaveCitySampleGameData); \
	DECLARE_FUNCTION(execK2Node_LoadCitySampleSaveGame); \
	DECLARE_FUNCTION(execGetSaveGame);


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameInstanceBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetNaniteVisualization); \
	DECLARE_FUNCTION(execSetNaniteVisualization); \
	DECLARE_FUNCTION(execGetCurrentNaniteVisualization); \
	DECLARE_FUNCTION(execSetRumbleEnabled); \
	DECLARE_FUNCTION(execGetRumbleEnabled); \
	DECLARE_FUNCTION(execSetLookSensitivity); \
	DECLARE_FUNCTION(execGetLookSensitivity); \
	DECLARE_FUNCTION(execSetInvertedAxes); \
	DECLARE_FUNCTION(execGetInvertedAxes); \
	DECLARE_FUNCTION(execClearCitySampleSaveData); \
	DECLARE_FUNCTION(execIsSaveGameLoaded); \
	DECLARE_FUNCTION(execSaveCitySampleGameData); \
	DECLARE_FUNCTION(execK2Node_LoadCitySampleSaveGame); \
	DECLARE_FUNCTION(execGetSaveGame);


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameInstanceBase_h_16_ACCESSORS
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameInstanceBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCitySampleGameInstanceBase(); \
	friend struct Z_Construct_UClass_UCitySampleGameInstanceBase_Statics; \
public: \
	DECLARE_CLASS(UCitySampleGameInstanceBase, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleGameInstanceBase)


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameInstanceBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCitySampleGameInstanceBase(); \
	friend struct Z_Construct_UClass_UCitySampleGameInstanceBase_Statics; \
public: \
	DECLARE_CLASS(UCitySampleGameInstanceBase, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleGameInstanceBase)


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameInstanceBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCitySampleGameInstanceBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCitySampleGameInstanceBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleGameInstanceBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleGameInstanceBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleGameInstanceBase(UCitySampleGameInstanceBase&&); \
	NO_API UCitySampleGameInstanceBase(const UCitySampleGameInstanceBase&); \
public: \
	NO_API virtual ~UCitySampleGameInstanceBase();


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameInstanceBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleGameInstanceBase(UCitySampleGameInstanceBase&&); \
	NO_API UCitySampleGameInstanceBase(const UCitySampleGameInstanceBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleGameInstanceBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleGameInstanceBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCitySampleGameInstanceBase) \
	NO_API virtual ~UCitySampleGameInstanceBase();


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameInstanceBase_h_13_PROLOG
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameInstanceBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameInstanceBase_h_16_SPARSE_DATA \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameInstanceBase_h_16_RPC_WRAPPERS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameInstanceBase_h_16_ACCESSORS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameInstanceBase_h_16_INCLASS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameInstanceBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameInstanceBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameInstanceBase_h_16_SPARSE_DATA \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameInstanceBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameInstanceBase_h_16_ACCESSORS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameInstanceBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameInstanceBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UCitySampleGameInstanceBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameInstanceBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
