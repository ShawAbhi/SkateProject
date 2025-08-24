// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Common/Library/TouchInputFunctions.h"

#ifdef TOUCHINPUTSYSTEM_TouchInputFunctions_generated_h
#error "TouchInputFunctions.generated.h already included, missing '#pragma once' in TouchInputFunctions.h"
#endif
#define TOUCHINPUTSYSTEM_TouchInputFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FTouchInputInfo;

// ********** Begin Class UTouchInputFunctions *****************************************************
#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Library_TouchInputFunctions_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBroadcastTouchInputs);


TOUCHINPUTSYSTEM_API UClass* Z_Construct_UClass_UTouchInputFunctions_NoRegister();

#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Library_TouchInputFunctions_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTouchInputFunctions(); \
	friend struct Z_Construct_UClass_UTouchInputFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOUCHINPUTSYSTEM_API UClass* Z_Construct_UClass_UTouchInputFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UTouchInputFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TouchInputSystem"), Z_Construct_UClass_UTouchInputFunctions_NoRegister) \
	DECLARE_SERIALIZER(UTouchInputFunctions)


#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Library_TouchInputFunctions_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTouchInputFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTouchInputFunctions(UTouchInputFunctions&&) = delete; \
	UTouchInputFunctions(const UTouchInputFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchInputFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchInputFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTouchInputFunctions) \
	NO_API virtual ~UTouchInputFunctions();


#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Library_TouchInputFunctions_h_13_PROLOG
#define FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Library_TouchInputFunctions_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Library_TouchInputFunctions_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Library_TouchInputFunctions_h_16_INCLASS_NO_PURE_DECLS \
	FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Library_TouchInputFunctions_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTouchInputFunctions;

// ********** End Class UTouchInputFunctions *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Library_TouchInputFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
