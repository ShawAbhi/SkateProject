// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widget/TouchPad/TouchPad.h"

#ifdef TOUCHINPUTSYSTEM_TouchPad_generated_h
#error "TouchPad.generated.h already included, missing '#pragma once' in TouchPad.h"
#endif
#define TOUCHINPUTSYSTEM_TouchPad_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTouchPad ****************************************************************
#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_TouchPad_TouchPad_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBroadcastControlRotation);


TOUCHINPUTSYSTEM_API UClass* Z_Construct_UClass_UTouchPad_NoRegister();

#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_TouchPad_TouchPad_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTouchPad(); \
	friend struct Z_Construct_UClass_UTouchPad_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOUCHINPUTSYSTEM_API UClass* Z_Construct_UClass_UTouchPad_NoRegister(); \
public: \
	DECLARE_CLASS2(UTouchPad, UBaseTouchButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TouchInputSystem"), Z_Construct_UClass_UTouchPad_NoRegister) \
	DECLARE_SERIALIZER(UTouchPad)


#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_TouchPad_TouchPad_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTouchPad(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTouchPad(UTouchPad&&) = delete; \
	UTouchPad(const UTouchPad&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchPad); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchPad); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTouchPad) \
	NO_API virtual ~UTouchPad();


#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_TouchPad_TouchPad_h_12_PROLOG
#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_TouchPad_TouchPad_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_TouchPad_TouchPad_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_TouchPad_TouchPad_h_15_INCLASS_NO_PURE_DECLS \
	FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_TouchPad_TouchPad_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTouchPad;

// ********** End Class UTouchPad ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_TouchPad_TouchPad_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
