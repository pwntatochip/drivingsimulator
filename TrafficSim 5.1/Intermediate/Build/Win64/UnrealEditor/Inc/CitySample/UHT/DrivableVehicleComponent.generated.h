// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Vehicles/DrivableVehicleComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACitySampleCharacter;
class ACitySampleVehicleBase;
class APawn;
class UDrivableVehicleComponent;
#ifdef CITYSAMPLE_DrivableVehicleComponent_generated_h
#error "DrivableVehicleComponent.generated.h already included, missing '#pragma once' in DrivableVehicleComponent.h"
#endif
#define CITYSAMPLE_DrivableVehicleComponent_generated_h

#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Vehicles_DrivableVehicleComponent_h_12_DELEGATE \
struct _Script_CitySample_eventCitySampleVehicleOnDriverEnter_Parms \
{ \
	const UDrivableVehicleComponent* DrivableComponent; \
	const ACitySampleVehicleBase* Vehicle; \
	const APawn* Driver; \
}; \
static inline void FCitySampleVehicleOnDriverEnter_DelegateWrapper(const FMulticastScriptDelegate& CitySampleVehicleOnDriverEnter, const UDrivableVehicleComponent* DrivableComponent, const ACitySampleVehicleBase* Vehicle, const APawn* Driver) \
{ \
	_Script_CitySample_eventCitySampleVehicleOnDriverEnter_Parms Parms; \
	Parms.DrivableComponent=DrivableComponent; \
	Parms.Vehicle=Vehicle; \
	Parms.Driver=Driver; \
	CitySampleVehicleOnDriverEnter.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Vehicles_DrivableVehicleComponent_h_13_DELEGATE \
struct _Script_CitySample_eventCitySampleVehicleOnDriverExit_Parms \
{ \
	const UDrivableVehicleComponent* DrivableComponent; \
	const ACitySampleVehicleBase* Vehicle; \
	const APawn* Driver; \
}; \
static inline void FCitySampleVehicleOnDriverExit_DelegateWrapper(const FMulticastScriptDelegate& CitySampleVehicleOnDriverExit, const UDrivableVehicleComponent* DrivableComponent, const ACitySampleVehicleBase* Vehicle, const APawn* Driver) \
{ \
	_Script_CitySample_eventCitySampleVehicleOnDriverExit_Parms Parms; \
	Parms.DrivableComponent=DrivableComponent; \
	Parms.Vehicle=Vehicle; \
	Parms.Driver=Driver; \
	CitySampleVehicleOnDriverExit.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Vehicles_DrivableVehicleComponent_h_18_SPARSE_DATA
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Vehicles_DrivableVehicleComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDriverGetOut); \
	DECLARE_FUNCTION(execDriverGetIn);


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Vehicles_DrivableVehicleComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDriverGetOut); \
	DECLARE_FUNCTION(execDriverGetIn);


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Vehicles_DrivableVehicleComponent_h_18_ACCESSORS
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Vehicles_DrivableVehicleComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDrivableVehicleComponent(); \
	friend struct Z_Construct_UClass_UDrivableVehicleComponent_Statics; \
public: \
	DECLARE_CLASS(UDrivableVehicleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UDrivableVehicleComponent)


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Vehicles_DrivableVehicleComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUDrivableVehicleComponent(); \
	friend struct Z_Construct_UClass_UDrivableVehicleComponent_Statics; \
public: \
	DECLARE_CLASS(UDrivableVehicleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UDrivableVehicleComponent)


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Vehicles_DrivableVehicleComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDrivableVehicleComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDrivableVehicleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDrivableVehicleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDrivableVehicleComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDrivableVehicleComponent(UDrivableVehicleComponent&&); \
	NO_API UDrivableVehicleComponent(const UDrivableVehicleComponent&); \
public: \
	NO_API virtual ~UDrivableVehicleComponent();


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Vehicles_DrivableVehicleComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDrivableVehicleComponent(UDrivableVehicleComponent&&); \
	NO_API UDrivableVehicleComponent(const UDrivableVehicleComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDrivableVehicleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDrivableVehicleComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDrivableVehicleComponent) \
	NO_API virtual ~UDrivableVehicleComponent();


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Vehicles_DrivableVehicleComponent_h_15_PROLOG
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Vehicles_DrivableVehicleComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Vehicles_DrivableVehicleComponent_h_18_SPARSE_DATA \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Vehicles_DrivableVehicleComponent_h_18_RPC_WRAPPERS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Vehicles_DrivableVehicleComponent_h_18_ACCESSORS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Vehicles_DrivableVehicleComponent_h_18_INCLASS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Vehicles_DrivableVehicleComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Vehicles_DrivableVehicleComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Vehicles_DrivableVehicleComponent_h_18_SPARSE_DATA \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Vehicles_DrivableVehicleComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Vehicles_DrivableVehicleComponent_h_18_ACCESSORS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Vehicles_DrivableVehicleComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Vehicles_DrivableVehicleComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UDrivableVehicleComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Vehicles_DrivableVehicleComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
