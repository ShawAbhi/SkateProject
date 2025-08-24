// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Common/Data/EnumsStruct/ETouchMode.h"

#ifdef TOUCHINPUTSYSTEM_ETouchMode_generated_h
#error "ETouchMode.generated.h already included, missing '#pragma once' in ETouchMode.h"
#endif
#define TOUCHINPUTSYSTEM_ETouchMode_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Data_EnumsStruct_ETouchMode_h

// ********** Begin Enum EEnum_TouchMode ***********************************************************
#define FOREACH_ENUM_EENUM_TOUCHMODE(op) \
	op(EEnum_TouchMode::None) \
	op(EEnum_TouchMode::Pressed) \
	op(EEnum_TouchMode::Released) \
	op(EEnum_TouchMode::Moved) \
	op(EEnum_TouchMode::Tap) \
	op(EEnum_TouchMode::Hold) \
	op(EEnum_TouchMode::HoldReleased) 

enum class EEnum_TouchMode : uint8;
template<> struct TIsUEnumClass<EEnum_TouchMode> { enum { Value = true }; };
template<> TOUCHINPUTSYSTEM_API UEnum* StaticEnum<EEnum_TouchMode>();
// ********** End Enum EEnum_TouchMode *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
