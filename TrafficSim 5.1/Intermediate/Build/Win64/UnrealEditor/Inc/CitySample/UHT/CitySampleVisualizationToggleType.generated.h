// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Util/CitySampleVisualizationToggleType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CITYSAMPLE_CitySampleVisualizationToggleType_generated_h
#error "CitySampleVisualizationToggleType.generated.h already included, missing '#pragma once' in CitySampleVisualizationToggleType.h"
#endif
#define CITYSAMPLE_CitySampleVisualizationToggleType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ddamiano_Documents_TrafficSim_5_1_Source_CitySample_Util_CitySampleVisualizationToggleType_h


#define FOREACH_ENUM_ECITYSAMPLEVISUALIZATIONTOGGLETYPE(op) \
	op(ECitySampleVisualizationToggleType::None) \
	op(ECitySampleVisualizationToggleType::Nanite) \
	op(ECitySampleVisualizationToggleType::Mass) \
	op(ECitySampleVisualizationToggleType::DayNight) \
	op(ECitySampleVisualizationToggleType::TSR) 

enum class ECitySampleVisualizationToggleType : uint8;
template<> struct TIsUEnumClass<ECitySampleVisualizationToggleType> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySampleVisualizationToggleType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
