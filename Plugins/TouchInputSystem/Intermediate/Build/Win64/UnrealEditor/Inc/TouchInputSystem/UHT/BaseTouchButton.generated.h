// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widget/BaseTouchButton.h"

#ifdef TOUCHINPUTSYSTEM_BaseTouchButton_generated_h
#error "BaseTouchButton.generated.h already included, missing '#pragma once' in BaseTouchButton.h"
#endif
#define TOUCHINPUTSYSTEM_BaseTouchButton_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UInputAction;
enum class EEnum_TouchMode : uint8;
struct FInputActionValue;
struct FTouchInputInfo;

// ********** Begin Class UBaseTouchButton *********************************************************
#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_BaseTouchButton_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EventOnEventReceived_Implementation(FVector const& FingerLocation, EEnum_TouchMode TouchMode); \
	virtual void EventOnMoved_Implementation(FVector const& FingerLocation); \
	virtual void EventOnReleased_Implementation(FVector const& FingerLocation); \
	virtual void EventOnPressed_Implementation(FVector const& FingerLocation); \
	virtual void InjectValueToInputEvent_Implementation(UInputAction* InputActionToCall, FInputActionValue ActionValue); \
	virtual void InjectValueToInput_Implementation(FInputActionValue ActionValue); \
	virtual void SetIsActive_Implementation(bool bNewIsActive); \
	DECLARE_FUNCTION(execEventOnEventReceived); \
	DECLARE_FUNCTION(execEventOnMoved); \
	DECLARE_FUNCTION(execEventOnReleased); \
	DECLARE_FUNCTION(execEventOnPressed); \
	DECLARE_FUNCTION(execGetPayload); \
	DECLARE_FUNCTION(execInjectInputToTouchEvent); \
	DECLARE_FUNCTION(execInjectValueToInputEvent); \
	DECLARE_FUNCTION(execInjectValueToInput); \
	DECLARE_FUNCTION(execGetIsActive); \
	DECLARE_FUNCTION(execSetIsActive); \
	DECLARE_FUNCTION(execHandleTouchIndexMessages); \
	DECLARE_FUNCTION(execSetButtonInactive); \
	DECLARE_FUNCTION(execSetButtonActive);


#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_BaseTouchButton_h_31_CALLBACK_WRAPPERS
TOUCHINPUTSYSTEM_API UClass* Z_Construct_UClass_UBaseTouchButton_NoRegister();

#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_BaseTouchButton_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseTouchButton(); \
	friend struct Z_Construct_UClass_UBaseTouchButton_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOUCHINPUTSYSTEM_API UClass* Z_Construct_UClass_UBaseTouchButton_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseTouchButton, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TouchInputSystem"), Z_Construct_UClass_UBaseTouchButton_NoRegister) \
	DECLARE_SERIALIZER(UBaseTouchButton)


#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_BaseTouchButton_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseTouchButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseTouchButton(UBaseTouchButton&&) = delete; \
	UBaseTouchButton(const UBaseTouchButton&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseTouchButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseTouchButton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseTouchButton) \
	NO_API virtual ~UBaseTouchButton();


#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_BaseTouchButton_h_28_PROLOG
#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_BaseTouchButton_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_BaseTouchButton_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_BaseTouchButton_h_31_CALLBACK_WRAPPERS \
	FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_BaseTouchButton_h_31_INCLASS_NO_PURE_DECLS \
	FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_BaseTouchButton_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseTouchButton;

// ********** End Class UBaseTouchButton ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Widget_BaseTouchButton_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
