// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AdvancedPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
#ifdef ADVANCEDPLUGIN_AdvancedPawn_generated_h
#error "AdvancedPawn.generated.h already included, missing '#pragma once' in AdvancedPawn.h"
#endif
#define ADVANCEDPLUGIN_AdvancedPawn_generated_h

#define FID_UEPlugins_Compiled_AT_HostProject_Plugins_AdvancedPhysicsTick_Source_AdvancedPlugin_Public_AdvancedPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPrimitiveCOM); \
	DECLARE_FUNCTION(execGetLinearVelocityAtPoint); \
	DECLARE_FUNCTION(execGetLinearVelocity); \
	DECLARE_FUNCTION(execGetPrimitiveWorldTransform); \
	DECLARE_FUNCTION(execAddImpulseAtLocation); \
	DECLARE_FUNCTION(execAddImpulse); \
	DECLARE_FUNCTION(execAddTorque); \
	DECLARE_FUNCTION(execAddForceAtLocation); \
	DECLARE_FUNCTION(execAddForce);


#define FID_UEPlugins_Compiled_AT_HostProject_Plugins_AdvancedPhysicsTick_Source_AdvancedPlugin_Public_AdvancedPawn_h_16_CALLBACK_WRAPPERS
#define FID_UEPlugins_Compiled_AT_HostProject_Plugins_AdvancedPhysicsTick_Source_AdvancedPlugin_Public_AdvancedPawn_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvancedPawn(); \
	friend struct Z_Construct_UClass_AAdvancedPawn_Statics; \
public: \
	DECLARE_CLASS(AAdvancedPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedPlugin"), NO_API) \
	DECLARE_SERIALIZER(AAdvancedPawn)


#define FID_UEPlugins_Compiled_AT_HostProject_Plugins_AdvancedPhysicsTick_Source_AdvancedPlugin_Public_AdvancedPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAdvancedPawn(AAdvancedPawn&&); \
	AAdvancedPawn(const AAdvancedPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvancedPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvancedPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvancedPawn) \
	NO_API virtual ~AAdvancedPawn();


#define FID_UEPlugins_Compiled_AT_HostProject_Plugins_AdvancedPhysicsTick_Source_AdvancedPlugin_Public_AdvancedPawn_h_13_PROLOG
#define FID_UEPlugins_Compiled_AT_HostProject_Plugins_AdvancedPhysicsTick_Source_AdvancedPlugin_Public_AdvancedPawn_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEPlugins_Compiled_AT_HostProject_Plugins_AdvancedPhysicsTick_Source_AdvancedPlugin_Public_AdvancedPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEPlugins_Compiled_AT_HostProject_Plugins_AdvancedPhysicsTick_Source_AdvancedPlugin_Public_AdvancedPawn_h_16_CALLBACK_WRAPPERS \
	FID_UEPlugins_Compiled_AT_HostProject_Plugins_AdvancedPhysicsTick_Source_AdvancedPlugin_Public_AdvancedPawn_h_16_INCLASS_NO_PURE_DECLS \
	FID_UEPlugins_Compiled_AT_HostProject_Plugins_AdvancedPhysicsTick_Source_AdvancedPlugin_Public_AdvancedPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDPLUGIN_API UClass* StaticClass<class AAdvancedPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEPlugins_Compiled_AT_HostProject_Plugins_AdvancedPhysicsTick_Source_AdvancedPlugin_Public_AdvancedPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
