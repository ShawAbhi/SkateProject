// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Common/Delegates/UTouchSystemDelegates.h"

#ifdef TOUCHINPUTSYSTEM_UTouchSystemDelegates_generated_h
#error "UTouchSystemDelegates.generated.h already included, missing '#pragma once' in UTouchSystemDelegates.h"
#endif
#define TOUCHINPUTSYSTEM_UTouchSystemDelegates_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FTouchInputInfo;

// ********** Begin Delegate FDynamicMulticastDelegateZeroParams ***********************************
#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Delegates_UTouchSystemDelegates_h_34_DELEGATE \
static void FDynamicMulticastDelegateZeroParams_DelegateWrapper(const FMulticastScriptDelegate& DynamicMulticastDelegateZeroParams);


// ********** End Delegate FDynamicMulticastDelegateZeroParams *************************************

// ********** Begin Delegate FDynamicMulticastDelegateOneParamBool *********************************
#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Delegates_UTouchSystemDelegates_h_35_DELEGATE \
static void FDynamicMulticastDelegateOneParamBool_DelegateWrapper(const FMulticastScriptDelegate& DynamicMulticastDelegateOneParamBool, bool bValue);


// ********** End Delegate FDynamicMulticastDelegateOneParamBool ***********************************

// ********** Begin Delegate FDynamicMulticastDelegateOneParamFloat ********************************
#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Delegates_UTouchSystemDelegates_h_36_DELEGATE \
static void FDynamicMulticastDelegateOneParamFloat_DelegateWrapper(const FMulticastScriptDelegate& DynamicMulticastDelegateOneParamFloat, float Value);


// ********** End Delegate FDynamicMulticastDelegateOneParamFloat **********************************

// ********** Begin Delegate FDynamicMulticastDelegateOneParamUint8 ********************************
#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Delegates_UTouchSystemDelegates_h_37_DELEGATE \
static void FDynamicMulticastDelegateOneParamUint8_DelegateWrapper(const FMulticastScriptDelegate& DynamicMulticastDelegateOneParamUint8, uint8 Value);


// ********** End Delegate FDynamicMulticastDelegateOneParamUint8 **********************************

// ********** Begin Delegate FDynamicMulticastDelegateOneParamInputStruct **************************
#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Delegates_UTouchSystemDelegates_h_38_DELEGATE \
static void FDynamicMulticastDelegateOneParamInputStruct_DelegateWrapper(const FMulticastScriptDelegate& DynamicMulticastDelegateOneParamInputStruct, FTouchInputInfo TouchInput);


// ********** End Delegate FDynamicMulticastDelegateOneParamInputStruct ****************************

// ********** Begin Class UTouchSystemDelegates ****************************************************
TOUCHINPUTSYSTEM_API UClass* Z_Construct_UClass_UTouchSystemDelegates_NoRegister();

#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Delegates_UTouchSystemDelegates_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTouchSystemDelegates(); \
	friend struct Z_Construct_UClass_UTouchSystemDelegates_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOUCHINPUTSYSTEM_API UClass* Z_Construct_UClass_UTouchSystemDelegates_NoRegister(); \
public: \
	DECLARE_CLASS2(UTouchSystemDelegates, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TouchInputSystem"), Z_Construct_UClass_UTouchSystemDelegates_NoRegister) \
	DECLARE_SERIALIZER(UTouchSystemDelegates)


#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Delegates_UTouchSystemDelegates_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTouchSystemDelegates(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTouchSystemDelegates(UTouchSystemDelegates&&) = delete; \
	UTouchSystemDelegates(const UTouchSystemDelegates&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchSystemDelegates); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchSystemDelegates); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTouchSystemDelegates) \
	NO_API virtual ~UTouchSystemDelegates();


#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Delegates_UTouchSystemDelegates_h_8_PROLOG
#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Delegates_UTouchSystemDelegates_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Delegates_UTouchSystemDelegates_h_11_INCLASS_NO_PURE_DECLS \
	FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Delegates_UTouchSystemDelegates_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTouchSystemDelegates;

// ********** End Class UTouchSystemDelegates ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Delegates_UTouchSystemDelegates_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
