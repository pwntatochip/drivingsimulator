// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/CitySampleMapWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneCaptureComponent2D;
class UTexture2D;
class UTextureRenderTarget2D;
#ifdef CITYSAMPLE_CitySampleMapWidget_generated_h
#error "CitySampleMapWidget.generated.h already included, missing '#pragma once' in CitySampleMapWidget.h"
#endif
#define CITYSAMPLE_CitySampleMapWidget_generated_h

#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h_21_SPARSE_DATA
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsMapPositionWithinBounds); \
	DECLARE_FUNCTION(execSetPlayerMapPositionFromWorld); \
	DECLARE_FUNCTION(execSetPlayerMapRotation); \
	DECLARE_FUNCTION(execSetPlayerMapPosition); \
	DECLARE_FUNCTION(execIsPlayerHidden); \
	DECLARE_FUNCTION(execHidePlayer); \
	DECLARE_FUNCTION(execIsMapHidden); \
	DECLARE_FUNCTION(execHideMap); \
	DECLARE_FUNCTION(execUpdateMap); \
	DECLARE_FUNCTION(execSetMapTextureRenderTarget); \
	DECLARE_FUNCTION(execSetMapTextureFromSceneCapture); \
	DECLARE_FUNCTION(execSetMapTexture); \
	DECLARE_FUNCTION(execCaptureWorldMapToTexture);


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsMapPositionWithinBounds); \
	DECLARE_FUNCTION(execSetPlayerMapPositionFromWorld); \
	DECLARE_FUNCTION(execSetPlayerMapRotation); \
	DECLARE_FUNCTION(execSetPlayerMapPosition); \
	DECLARE_FUNCTION(execIsPlayerHidden); \
	DECLARE_FUNCTION(execHidePlayer); \
	DECLARE_FUNCTION(execIsMapHidden); \
	DECLARE_FUNCTION(execHideMap); \
	DECLARE_FUNCTION(execUpdateMap); \
	DECLARE_FUNCTION(execSetMapTextureRenderTarget); \
	DECLARE_FUNCTION(execSetMapTextureFromSceneCapture); \
	DECLARE_FUNCTION(execSetMapTexture); \
	DECLARE_FUNCTION(execCaptureWorldMapToTexture);


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h_21_ACCESSORS
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h_21_CALLBACK_WRAPPERS
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCitySampleMapWidget(); \
	friend struct Z_Construct_UClass_UCitySampleMapWidget_Statics; \
public: \
	DECLARE_CLASS(UCitySampleMapWidget, UCitySamplePanel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleMapWidget)


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCitySampleMapWidget(); \
	friend struct Z_Construct_UClass_UCitySampleMapWidget_Statics; \
public: \
	DECLARE_CLASS(UCitySampleMapWidget, UCitySamplePanel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleMapWidget)


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCitySampleMapWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCitySampleMapWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleMapWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleMapWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleMapWidget(UCitySampleMapWidget&&); \
	NO_API UCitySampleMapWidget(const UCitySampleMapWidget&); \
public: \
	NO_API virtual ~UCitySampleMapWidget();


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleMapWidget(UCitySampleMapWidget&&); \
	NO_API UCitySampleMapWidget(const UCitySampleMapWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleMapWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleMapWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCitySampleMapWidget) \
	NO_API virtual ~UCitySampleMapWidget();


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h_18_PROLOG
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h_21_SPARSE_DATA \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h_21_RPC_WRAPPERS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h_21_ACCESSORS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h_21_CALLBACK_WRAPPERS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h_21_INCLASS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h_21_SPARSE_DATA \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h_21_ACCESSORS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h_21_CALLBACK_WRAPPERS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UCitySampleMapWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleMapWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
