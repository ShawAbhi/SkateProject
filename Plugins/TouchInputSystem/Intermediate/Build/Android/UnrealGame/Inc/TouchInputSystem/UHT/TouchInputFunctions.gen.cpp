// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TouchInputSystem/Common/Library/TouchInputFunctions.h"
#include "TouchInputSystem/Common/Data/EnumsStruct/FTouchInputInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTouchInputFunctions() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
TOUCHINPUTSYSTEM_API UClass* Z_Construct_UClass_UTouchInputFunctions();
TOUCHINPUTSYSTEM_API UClass* Z_Construct_UClass_UTouchInputFunctions_NoRegister();
TOUCHINPUTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTouchInputInfo();
UPackage* Z_Construct_UPackage__Script_TouchInputSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTouchInputFunctions Function BroadcastTouchInputs ***********************
struct Z_Construct_UFunction_UTouchInputFunctions_BroadcastTouchInputs_Statics
{
	struct TouchInputFunctions_eventBroadcastTouchInputs_Parms
	{
		FTouchInputInfo TouchInputs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TouchInput" },
		{ "ModuleRelativePath", "Common/Library/TouchInputFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchInputs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TouchInputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTouchInputFunctions_BroadcastTouchInputs_Statics::NewProp_TouchInputs = { "TouchInputs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TouchInputFunctions_eventBroadcastTouchInputs_Parms, TouchInputs), Z_Construct_UScriptStruct_FTouchInputInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchInputs_MetaData), NewProp_TouchInputs_MetaData) }; // 2955306383
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTouchInputFunctions_BroadcastTouchInputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTouchInputFunctions_BroadcastTouchInputs_Statics::NewProp_TouchInputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchInputFunctions_BroadcastTouchInputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTouchInputFunctions_BroadcastTouchInputs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTouchInputFunctions, nullptr, "BroadcastTouchInputs", Z_Construct_UFunction_UTouchInputFunctions_BroadcastTouchInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchInputFunctions_BroadcastTouchInputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTouchInputFunctions_BroadcastTouchInputs_Statics::TouchInputFunctions_eventBroadcastTouchInputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTouchInputFunctions_BroadcastTouchInputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTouchInputFunctions_BroadcastTouchInputs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTouchInputFunctions_BroadcastTouchInputs_Statics::TouchInputFunctions_eventBroadcastTouchInputs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTouchInputFunctions_BroadcastTouchInputs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTouchInputFunctions_BroadcastTouchInputs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTouchInputFunctions::execBroadcastTouchInputs)
{
	P_GET_STRUCT_REF(FTouchInputInfo,Z_Param_Out_TouchInputs);
	P_FINISH;
	P_NATIVE_BEGIN;
	UTouchInputFunctions::BroadcastTouchInputs(Z_Param_Out_TouchInputs);
	P_NATIVE_END;
}
// ********** End Class UTouchInputFunctions Function BroadcastTouchInputs *************************

// ********** Begin Class UTouchInputFunctions *****************************************************
void UTouchInputFunctions::StaticRegisterNativesUTouchInputFunctions()
{
	UClass* Class = UTouchInputFunctions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BroadcastTouchInputs", &UTouchInputFunctions::execBroadcastTouchInputs },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTouchInputFunctions;
UClass* UTouchInputFunctions::GetPrivateStaticClass()
{
	using TClass = UTouchInputFunctions;
	if (!Z_Registration_Info_UClass_UTouchInputFunctions.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TouchInputFunctions"),
			Z_Registration_Info_UClass_UTouchInputFunctions.InnerSingleton,
			StaticRegisterNativesUTouchInputFunctions,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UTouchInputFunctions.InnerSingleton;
}
UClass* Z_Construct_UClass_UTouchInputFunctions_NoRegister()
{
	return UTouchInputFunctions::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTouchInputFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Common/Library/TouchInputFunctions.h" },
		{ "ModuleRelativePath", "Common/Library/TouchInputFunctions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTouchInputFunctions_BroadcastTouchInputs, "BroadcastTouchInputs" }, // 2827701904
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchInputFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTouchInputFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_TouchInputSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchInputFunctions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchInputFunctions_Statics::ClassParams = {
	&UTouchInputFunctions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchInputFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UTouchInputFunctions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTouchInputFunctions()
{
	if (!Z_Registration_Info_UClass_UTouchInputFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchInputFunctions.OuterSingleton, Z_Construct_UClass_UTouchInputFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTouchInputFunctions.OuterSingleton;
}
UTouchInputFunctions::UTouchInputFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchInputFunctions);
UTouchInputFunctions::~UTouchInputFunctions() {}
// ********** End Class UTouchInputFunctions *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Library_TouchInputFunctions_h__Script_TouchInputSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTouchInputFunctions, UTouchInputFunctions::StaticClass, TEXT("UTouchInputFunctions"), &Z_Registration_Info_UClass_UTouchInputFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchInputFunctions), 769884953U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Library_TouchInputFunctions_h__Script_TouchInputSystem_267247299(TEXT("/Script/TouchInputSystem"),
	Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Library_TouchInputFunctions_h__Script_TouchInputSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SkateProject_Plugins_TouchInputSystem_Source_TouchInputSystem_Common_Library_TouchInputFunctions_h__Script_TouchInputSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
