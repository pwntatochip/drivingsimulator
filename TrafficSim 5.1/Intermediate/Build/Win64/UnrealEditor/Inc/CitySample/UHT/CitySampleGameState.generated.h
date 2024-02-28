// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/CitySampleGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CITYSAMPLE_CitySampleGameState_generated_h
#error "CitySampleGameState.generated.h already included, missing '#pragma once' in CitySampleGameState.h"
#endif
#define CITYSAMPLE_CitySampleGameState_generated_h

#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_9_DELEGATE \
static inline void FOnSandboxIntroStarted_DelegateWrapper(const FMulticastScriptDelegate& OnSandboxIntroStarted) \
{ \
	OnSandboxIntroStarted.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_10_DELEGATE \
static inline void FOnSandboxIntroFinished_DelegateWrapper(const FMulticastScriptDelegate& OnSandboxIntroFinished) \
{ \
	OnSandboxIntroFinished.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_11_DELEGATE \
static inline void FOnTestSequenceStarted_DelegateWrapper(const FMulticastScriptDelegate& OnTestSequenceStarted) \
{ \
	OnTestSequenceStarted.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_12_DELEGATE \
static inline void FOnTestSequenceFinished_DelegateWrapper(const FMulticastScriptDelegate& OnTestSequenceFinished) \
{ \
	OnTestSequenceFinished.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_14_DELEGATE \
static inline void FOnTriggerDaytime_DelegateWrapper(const FMulticastScriptDelegate& OnTriggerDaytime) \
{ \
	OnTriggerDaytime.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_15_DELEGATE \
static inline void FOnTriggerNighttime_DelegateWrapper(const FMulticastScriptDelegate& OnTriggerNighttime) \
{ \
	OnTriggerNighttime.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_17_DELEGATE \
static inline void FOnEnterPhotomode_DelegateWrapper(const FMulticastScriptDelegate& OnEnterPhotomode) \
{ \
	OnEnterPhotomode.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_18_DELEGATE \
static inline void FOnExitPhotomode_DelegateWrapper(const FMulticastScriptDelegate& OnExitPhotomode) \
{ \
	OnExitPhotomode.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_24_SPARSE_DATA
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsTestSequencePlaying); \
	DECLARE_FUNCTION(execStopTestSequence); \
	DECLARE_FUNCTION(execStartTestSequence); \
	DECLARE_FUNCTION(execIsSandboxIntroPlaying); \
	DECLARE_FUNCTION(execStopSandboxIntro); \
	DECLARE_FUNCTION(execStartSandboxIntro);


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsTestSequencePlaying); \
	DECLARE_FUNCTION(execStopTestSequence); \
	DECLARE_FUNCTION(execStartTestSequence); \
	DECLARE_FUNCTION(execIsSandboxIntroPlaying); \
	DECLARE_FUNCTION(execStopSandboxIntro); \
	DECLARE_FUNCTION(execStartSandboxIntro);


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_24_ACCESSORS
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_24_CALLBACK_WRAPPERS
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACitySampleGameState(); \
	friend struct Z_Construct_UClass_ACitySampleGameState_Statics; \
public: \
	DECLARE_CLASS(ACitySampleGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(ACitySampleGameState)


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_24_INCLASS \
private: \
	static void StaticRegisterNativesACitySampleGameState(); \
	friend struct Z_Construct_UClass_ACitySampleGameState_Statics; \
public: \
	DECLARE_CLASS(ACitySampleGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(ACitySampleGameState)


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACitySampleGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACitySampleGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACitySampleGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACitySampleGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACitySampleGameState(ACitySampleGameState&&); \
	NO_API ACitySampleGameState(const ACitySampleGameState&); \
public: \
	NO_API virtual ~ACitySampleGameState();


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACitySampleGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACitySampleGameState(ACitySampleGameState&&); \
	NO_API ACitySampleGameState(const ACitySampleGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACitySampleGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACitySampleGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACitySampleGameState) \
	NO_API virtual ~ACitySampleGameState();


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_21_PROLOG
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_24_SPARSE_DATA \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_24_RPC_WRAPPERS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_24_ACCESSORS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_24_CALLBACK_WRAPPERS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_24_INCLASS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_24_SPARSE_DATA \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_24_ACCESSORS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_24_CALLBACK_WRAPPERS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class ACitySampleGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
