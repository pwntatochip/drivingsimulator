// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/CitySamplePlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACitySamplePlayerCameraManager;
class APawn;
class UCitySampleUIComponent;
class UPhotoModeComponent;
#ifdef CITYSAMPLE_CitySamplePlayerController_generated_h
#error "CitySamplePlayerController.generated.h already included, missing '#pragma once' in CitySamplePlayerController.h"
#endif
#define CITYSAMPLE_CitySamplePlayerController_generated_h

#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h_33_SPARSE_DATA
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckIfSafeToEndCameraTransition); \
	DECLARE_FUNCTION(execUpdateSpawnTransformForLeavingDrone); \
	DECLARE_FUNCTION(execUpdateSpawnTransformForEnteringDrone); \
	DECLARE_FUNCTION(execTryToInteractWithRelevantInteraction); \
	DECLARE_FUNCTION(execHandleLongDistanceCameraTransition); \
	DECLARE_FUNCTION(execToggleOptionsMenu); \
	DECLARE_FUNCTION(execRemovePawnInputContext); \
	DECLARE_FUNCTION(execAddPawnInputContext); \
	DECLARE_FUNCTION(execRemoveInputContext); \
	DECLARE_FUNCTION(execAddInputContext); \
	DECLARE_FUNCTION(execCanPerformInteractions); \
	DECLARE_FUNCTION(execSetCanPerformInteractions); \
	DECLARE_FUNCTION(execGetCameraTransitionLevelStreamDistance2D); \
	DECLARE_FUNCTION(execSetCurrentPlayerVehicle); \
	DECLARE_FUNCTION(execGetCitySampleCameraManager); \
	DECLARE_FUNCTION(execGetCurrentPlayerVehicle); \
	DECLARE_FUNCTION(execGetPhotoModeComponent); \
	DECLARE_FUNCTION(execGetCitySampleUIComponent);


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckIfSafeToEndCameraTransition); \
	DECLARE_FUNCTION(execUpdateSpawnTransformForLeavingDrone); \
	DECLARE_FUNCTION(execUpdateSpawnTransformForEnteringDrone); \
	DECLARE_FUNCTION(execTryToInteractWithRelevantInteraction); \
	DECLARE_FUNCTION(execHandleLongDistanceCameraTransition); \
	DECLARE_FUNCTION(execToggleOptionsMenu); \
	DECLARE_FUNCTION(execRemovePawnInputContext); \
	DECLARE_FUNCTION(execAddPawnInputContext); \
	DECLARE_FUNCTION(execRemoveInputContext); \
	DECLARE_FUNCTION(execAddInputContext); \
	DECLARE_FUNCTION(execCanPerformInteractions); \
	DECLARE_FUNCTION(execSetCanPerformInteractions); \
	DECLARE_FUNCTION(execGetCameraTransitionLevelStreamDistance2D); \
	DECLARE_FUNCTION(execSetCurrentPlayerVehicle); \
	DECLARE_FUNCTION(execGetCitySampleCameraManager); \
	DECLARE_FUNCTION(execGetCurrentPlayerVehicle); \
	DECLARE_FUNCTION(execGetPhotoModeComponent); \
	DECLARE_FUNCTION(execGetCitySampleUIComponent);


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h_33_ACCESSORS
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h_33_CALLBACK_WRAPPERS
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACitySamplePlayerController(); \
	friend struct Z_Construct_UClass_ACitySamplePlayerController_Statics; \
public: \
	DECLARE_CLASS(ACitySamplePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(ACitySamplePlayerController) \
	virtual UObject* _getUObject() const override { return const_cast<ACitySamplePlayerController*>(this); }


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h_33_INCLASS \
private: \
	static void StaticRegisterNativesACitySamplePlayerController(); \
	friend struct Z_Construct_UClass_ACitySamplePlayerController_Statics; \
public: \
	DECLARE_CLASS(ACitySamplePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(ACitySamplePlayerController) \
	virtual UObject* _getUObject() const override { return const_cast<ACitySamplePlayerController*>(this); }


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACitySamplePlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACitySamplePlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACitySamplePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACitySamplePlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACitySamplePlayerController(ACitySamplePlayerController&&); \
	NO_API ACitySamplePlayerController(const ACitySamplePlayerController&); \
public: \
	NO_API virtual ~ACitySamplePlayerController();


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACitySamplePlayerController(ACitySamplePlayerController&&); \
	NO_API ACitySamplePlayerController(const ACitySamplePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACitySamplePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACitySamplePlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACitySamplePlayerController) \
	NO_API virtual ~ACitySamplePlayerController();


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h_28_PROLOG
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h_33_SPARSE_DATA \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h_33_RPC_WRAPPERS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h_33_ACCESSORS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h_33_CALLBACK_WRAPPERS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h_33_INCLASS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h_33_SPARSE_DATA \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h_33_ACCESSORS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h_33_CALLBACK_WRAPPERS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h_33_INCLASS_NO_PURE_DECLS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class ACitySamplePlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Game_CitySamplePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
