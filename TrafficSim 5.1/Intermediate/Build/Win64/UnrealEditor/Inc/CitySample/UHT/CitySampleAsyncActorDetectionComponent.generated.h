// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/CitySampleAsyncActorDetectionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FHitResult;
#ifdef CITYSAMPLE_CitySampleAsyncActorDetectionComponent_generated_h
#error "CitySampleAsyncActorDetectionComponent.generated.h already included, missing '#pragma once' in CitySampleAsyncActorDetectionComponent.h"
#endif
#define CITYSAMPLE_CitySampleAsyncActorDetectionComponent_generated_h

#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleAsyncActorDetectionComponent_h_12_DELEGATE \
struct _Script_CitySample_eventOnDetectActor_Parms \
{ \
	AActor* DetectedActor; \
	FHitResult HitResult; \
}; \
static inline void FOnDetectActor_DelegateWrapper(const FMulticastScriptDelegate& OnDetectActor, AActor* DetectedActor, FHitResult const& HitResult) \
{ \
	_Script_CitySample_eventOnDetectActor_Parms Parms; \
	Parms.DetectedActor=DetectedActor; \
	Parms.HitResult=HitResult; \
	OnDetectActor.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleAsyncActorDetectionComponent_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCitySampleAsyncTraceDef_Statics; \
	CITYSAMPLE_API static class UScriptStruct* StaticStruct();


template<> CITYSAMPLE_API UScriptStruct* StaticStruct<struct FCitySampleAsyncTraceDef>();

#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleAsyncActorDetectionComponent_h_43_SPARSE_DATA
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleAsyncActorDetectionComponent_h_43_RPC_WRAPPERS
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleAsyncActorDetectionComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleAsyncActorDetectionComponent_h_43_ACCESSORS
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleAsyncActorDetectionComponent_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCitySampleAsyncActorDetectionComponent(); \
	friend struct Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_Statics; \
public: \
	DECLARE_CLASS(UCitySampleAsyncActorDetectionComponent, UGameFrameworkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleAsyncActorDetectionComponent)


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleAsyncActorDetectionComponent_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUCitySampleAsyncActorDetectionComponent(); \
	friend struct Z_Construct_UClass_UCitySampleAsyncActorDetectionComponent_Statics; \
public: \
	DECLARE_CLASS(UCitySampleAsyncActorDetectionComponent, UGameFrameworkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleAsyncActorDetectionComponent)


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleAsyncActorDetectionComponent_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCitySampleAsyncActorDetectionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCitySampleAsyncActorDetectionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleAsyncActorDetectionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleAsyncActorDetectionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleAsyncActorDetectionComponent(UCitySampleAsyncActorDetectionComponent&&); \
	NO_API UCitySampleAsyncActorDetectionComponent(const UCitySampleAsyncActorDetectionComponent&); \
public: \
	NO_API virtual ~UCitySampleAsyncActorDetectionComponent();


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleAsyncActorDetectionComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleAsyncActorDetectionComponent(UCitySampleAsyncActorDetectionComponent&&); \
	NO_API UCitySampleAsyncActorDetectionComponent(const UCitySampleAsyncActorDetectionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleAsyncActorDetectionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleAsyncActorDetectionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCitySampleAsyncActorDetectionComponent) \
	NO_API virtual ~UCitySampleAsyncActorDetectionComponent();


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleAsyncActorDetectionComponent_h_40_PROLOG
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleAsyncActorDetectionComponent_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleAsyncActorDetectionComponent_h_43_SPARSE_DATA \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleAsyncActorDetectionComponent_h_43_RPC_WRAPPERS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleAsyncActorDetectionComponent_h_43_ACCESSORS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleAsyncActorDetectionComponent_h_43_INCLASS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleAsyncActorDetectionComponent_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleAsyncActorDetectionComponent_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleAsyncActorDetectionComponent_h_43_SPARSE_DATA \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleAsyncActorDetectionComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleAsyncActorDetectionComponent_h_43_ACCESSORS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleAsyncActorDetectionComponent_h_43_INCLASS_NO_PURE_DECLS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleAsyncActorDetectionComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UCitySampleAsyncActorDetectionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySampleAsyncActorDetectionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
