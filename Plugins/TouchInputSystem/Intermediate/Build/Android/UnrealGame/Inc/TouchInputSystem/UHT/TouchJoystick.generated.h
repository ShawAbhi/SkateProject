// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widget/Joystick/TouchJoystick.h"

#ifdef TOUCHINPUTSYSTEM_TouchJoystick_generated_h
#error "TouchJoystick.generated.h already included, missing '#pragma once' in TouchJoystick.h"
#endif
#define TOUCHINPUTSYSTEM_TouchJoystick_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTouchJoystick ***********************************************************
#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_Joystick_TouchJoystick_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void JoystickOutput_Implementation(FVector const& Direction, const float Scale); \
	DECLARE_FUNCTION(execJoystickOutput); \
	DECLARE_FUNCTION(execGetCenterPosition);


#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_Joystick_TouchJoystick_h_17_CALLBACK_WRAPPERS
TOUCHINPUTSYSTEM_API UClass* Z_Construct_UClass_UTouchJoystick_NoRegister();

#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_Joystick_TouchJoystick_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTouchJoystick(); \
	friend struct Z_Construct_UClass_UTouchJoystick_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOUCHINPUTSYSTEM_API UClass* Z_Construct_UClass_UTouchJoystick_NoRegister(); \
public: \
	DECLARE_CLASS2(UTouchJoystick, UBaseTouchButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TouchInputSystem"), Z_Construct_UClass_UTouchJoystick_NoRegister) \
	DECLARE_SERIALIZER(UTouchJoystick)


#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_Joystick_TouchJoystick_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTouchJoystick(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTouchJoystick(UTouchJoystick&&) = delete; \
	UTouchJoystick(const UTouchJoystick&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchJoystick); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchJoystick); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTouchJoystick) \
	NO_API virtual ~UTouchJoystick();


#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_Joystick_TouchJoystick_h_14_PROLOG
#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_Joystick_TouchJoystick_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_Joystick_TouchJoystick_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_Joystick_TouchJoystick_h_17_CALLBACK_WRAPPERS \
	FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_Joystick_TouchJoystick_h_17_INCLASS_NO_PURE_DECLS \
	FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_Joystick_TouchJoystick_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTouchJoystick;

// ********** End Class UTouchJoystick *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_Joystick_TouchJoystick_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
