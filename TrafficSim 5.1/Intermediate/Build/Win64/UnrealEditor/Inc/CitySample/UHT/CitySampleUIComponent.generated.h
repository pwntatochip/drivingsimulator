// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/CitySampleUIComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACitySamplePlayerController;
class APawn;
class UCitySampleControlsOverlay;
class UCitySampleInteractionComponent;
class UCitySampleMenu;
class UCitySamplePanel;
class UCitySampleUIComponent;
class UUserWidget;
enum class ECitySampleControlsFlavor : uint8;
enum class ECitySamplePanelInput : uint8;
#ifdef CITYSAMPLE_CitySampleUIComponent_generated_h
#error "CitySampleUIComponent.generated.h already included, missing '#pragma once' in CitySampleUIComponent.h"
#endif
#define CITYSAMPLE_CitySampleUIComponent_generated_h

#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_21_DELEGATE \
struct _Script_CitySample_eventCitySampleOnOptionsMenuOpen_Parms \
{ \
	const UCitySampleUIComponent* CitySampleUI; \
	const UCitySampleMenu* OptionsMenu; \
}; \
static inline void FCitySampleOnOptionsMenuOpen_DelegateWrapper(const FMulticastScriptDelegate& CitySampleOnOptionsMenuOpen, const UCitySampleUIComponent* CitySampleUI, const UCitySampleMenu* OptionsMenu) \
{ \
	_Script_CitySample_eventCitySampleOnOptionsMenuOpen_Parms Parms; \
	Parms.CitySampleUI=CitySampleUI; \
	Parms.OptionsMenu=OptionsMenu; \
	CitySampleOnOptionsMenuOpen.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_22_DELEGATE \
struct _Script_CitySample_eventCitySampleOnOptionsMenuClose_Parms \
{ \
	const UCitySampleUIComponent* CitySampleUI; \
	const UCitySampleMenu* OptionsMenu; \
}; \
static inline void FCitySampleOnOptionsMenuClose_DelegateWrapper(const FMulticastScriptDelegate& CitySampleOnOptionsMenuClose, const UCitySampleUIComponent* CitySampleUI, const UCitySampleMenu* OptionsMenu) \
{ \
	_Script_CitySample_eventCitySampleOnOptionsMenuClose_Parms Parms; \
	Parms.CitySampleUI=CitySampleUI; \
	Parms.OptionsMenu=OptionsMenu; \
	CitySampleOnOptionsMenuClose.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_23_DELEGATE \
struct _Script_CitySample_eventCitySampleOnHideUI_Parms \
{ \
	bool IsHiding; \
}; \
static inline void FCitySampleOnHideUI_DelegateWrapper(const FMulticastScriptDelegate& CitySampleOnHideUI, bool IsHiding) \
{ \
	_Script_CitySample_eventCitySampleOnHideUI_Parms Parms; \
	Parms.IsHiding=IsHiding ? true : false; \
	CitySampleOnHideUI.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_32_SPARSE_DATA
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetControlsFlavor); \
	DECLARE_FUNCTION(execGetControlsFlavor); \
	DECLARE_FUNCTION(execRemoveInteractionPrompt); \
	DECLARE_FUNCTION(execAddInteractionPrompt); \
	DECLARE_FUNCTION(execIsInteractPromptActive); \
	DECLARE_FUNCTION(execRequestControlsOverlayUpdate); \
	DECLARE_FUNCTION(execRemoveControlsOverlay); \
	DECLARE_FUNCTION(execAddControlsOverlay); \
	DECLARE_FUNCTION(execIsControlsOverlayActive); \
	DECLARE_FUNCTION(execSetOptionsMenuActive); \
	DECLARE_FUNCTION(execSetOptionsMenuEnabled); \
	DECLARE_FUNCTION(execIsOptionsMenuActive); \
	DECLARE_FUNCTION(execProcessInputAxis2D); \
	DECLARE_FUNCTION(execProcessInputAxis1D); \
	DECLARE_FUNCTION(execProcessInputBool); \
	DECLARE_FUNCTION(execGetInteractionPrompt); \
	DECLARE_FUNCTION(execGetControlsOverlay); \
	DECLARE_FUNCTION(execGetOptionsMenu); \
	DECLARE_FUNCTION(execGetBasePanel); \
	DECLARE_FUNCTION(execIsHidingUI); \
	DECLARE_FUNCTION(execHideUI); \
	DECLARE_FUNCTION(execUpdateUI);


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetControlsFlavor); \
	DECLARE_FUNCTION(execGetControlsFlavor); \
	DECLARE_FUNCTION(execRemoveInteractionPrompt); \
	DECLARE_FUNCTION(execAddInteractionPrompt); \
	DECLARE_FUNCTION(execIsInteractPromptActive); \
	DECLARE_FUNCTION(execRequestControlsOverlayUpdate); \
	DECLARE_FUNCTION(execRemoveControlsOverlay); \
	DECLARE_FUNCTION(execAddControlsOverlay); \
	DECLARE_FUNCTION(execIsControlsOverlayActive); \
	DECLARE_FUNCTION(execSetOptionsMenuActive); \
	DECLARE_FUNCTION(execSetOptionsMenuEnabled); \
	DECLARE_FUNCTION(execIsOptionsMenuActive); \
	DECLARE_FUNCTION(execProcessInputAxis2D); \
	DECLARE_FUNCTION(execProcessInputAxis1D); \
	DECLARE_FUNCTION(execProcessInputBool); \
	DECLARE_FUNCTION(execGetInteractionPrompt); \
	DECLARE_FUNCTION(execGetControlsOverlay); \
	DECLARE_FUNCTION(execGetOptionsMenu); \
	DECLARE_FUNCTION(execGetBasePanel); \
	DECLARE_FUNCTION(execIsHidingUI); \
	DECLARE_FUNCTION(execHideUI); \
	DECLARE_FUNCTION(execUpdateUI);


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_32_ACCESSORS
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_32_CALLBACK_WRAPPERS
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCitySampleUIComponent(); \
	friend struct Z_Construct_UClass_UCitySampleUIComponent_Statics; \
public: \
	DECLARE_CLASS(UCitySampleUIComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleUIComponent)


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUCitySampleUIComponent(); \
	friend struct Z_Construct_UClass_UCitySampleUIComponent_Statics; \
public: \
	DECLARE_CLASS(UCitySampleUIComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleUIComponent)


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCitySampleUIComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCitySampleUIComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleUIComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleUIComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleUIComponent(UCitySampleUIComponent&&); \
	NO_API UCitySampleUIComponent(const UCitySampleUIComponent&); \
public: \
	NO_API virtual ~UCitySampleUIComponent();


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleUIComponent(UCitySampleUIComponent&&); \
	NO_API UCitySampleUIComponent(const UCitySampleUIComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleUIComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleUIComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCitySampleUIComponent) \
	NO_API virtual ~UCitySampleUIComponent();


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_29_PROLOG
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_32_SPARSE_DATA \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_32_RPC_WRAPPERS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_32_ACCESSORS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_32_CALLBACK_WRAPPERS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_32_INCLASS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_32_SPARSE_DATA \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_32_ACCESSORS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_32_CALLBACK_WRAPPERS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_32_INCLASS_NO_PURE_DECLS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UCitySampleUIComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_UI_CitySampleUIComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
