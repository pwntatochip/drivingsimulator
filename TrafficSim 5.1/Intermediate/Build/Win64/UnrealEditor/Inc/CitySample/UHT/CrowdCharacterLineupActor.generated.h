// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Crowd/CrowdCharacterLineupActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FCrowdCharacterDefinition;
struct FCrowdCharacterOptions;
#ifdef CITYSAMPLE_CrowdCharacterLineupActor_generated_h
#error "CrowdCharacterLineupActor.generated.h already included, missing '#pragma once' in CrowdCharacterLineupActor.h"
#endif
#define CITYSAMPLE_CrowdCharacterLineupActor_generated_h

#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics; \
	CITYSAMPLE_API static class UScriptStruct* StaticStruct();


template<> CITYSAMPLE_API UScriptStruct* StaticStruct<struct FCrowdLineupInstance>();

#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics; \
	CITYSAMPLE_API static class UScriptStruct* StaticStruct();


template<> CITYSAMPLE_API UScriptStruct* StaticStruct<struct FCrowdLineupVariationOptions>();

#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics; \
	CITYSAMPLE_API static class UScriptStruct* StaticStruct();


template<> CITYSAMPLE_API UScriptStruct* StaticStruct<struct FCrowdLineupRandomOptions>();

#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_99_SPARSE_DATA
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_99_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateLineup); \
	DECLARE_FUNCTION(execClearLineup); \
	DECLARE_FUNCTION(execBuildLineup);


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateLineup); \
	DECLARE_FUNCTION(execClearLineup); \
	DECLARE_FUNCTION(execBuildLineup);


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_99_ACCESSORS
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_99_CALLBACK_WRAPPERS
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACrowdCharacterLineup(); \
	friend struct Z_Construct_UClass_ACrowdCharacterLineup_Statics; \
public: \
	DECLARE_CLASS(ACrowdCharacterLineup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(ACrowdCharacterLineup)


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_99_INCLASS \
private: \
	static void StaticRegisterNativesACrowdCharacterLineup(); \
	friend struct Z_Construct_UClass_ACrowdCharacterLineup_Statics; \
public: \
	DECLARE_CLASS(ACrowdCharacterLineup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(ACrowdCharacterLineup)


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_99_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACrowdCharacterLineup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACrowdCharacterLineup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrowdCharacterLineup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrowdCharacterLineup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACrowdCharacterLineup(ACrowdCharacterLineup&&); \
	NO_API ACrowdCharacterLineup(const ACrowdCharacterLineup&); \
public: \
	NO_API virtual ~ACrowdCharacterLineup();


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_99_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACrowdCharacterLineup(ACrowdCharacterLineup&&); \
	NO_API ACrowdCharacterLineup(const ACrowdCharacterLineup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrowdCharacterLineup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrowdCharacterLineup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACrowdCharacterLineup) \
	NO_API virtual ~ACrowdCharacterLineup();


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_96_PROLOG
#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_99_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_99_SPARSE_DATA \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_99_RPC_WRAPPERS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_99_ACCESSORS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_99_CALLBACK_WRAPPERS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_99_INCLASS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_99_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_99_SPARSE_DATA \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_99_ACCESSORS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_99_CALLBACK_WRAPPERS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_99_INCLASS_NO_PURE_DECLS \
	FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class ACrowdCharacterLineup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Crowd_CrowdCharacterLineupActor_h


#define FOREACH_ENUM_ECROWDLINEUPTYPE(op) \
	op(ECrowdLineupType::Variation) \
	op(ECrowdLineupType::Random) 

enum class ECrowdLineupType : uint8;
template<> struct TIsUEnumClass<ECrowdLineupType> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<ECrowdLineupType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
