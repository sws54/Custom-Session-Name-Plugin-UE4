// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class APlayerController;
class UCreateCustomSessionProxy;
#ifdef CUSTOMSESSIONNAME_CreateCustomSessionProxy_generated_h
#error "CreateCustomSessionProxy.generated.h already included, missing '#pragma once' in CreateCustomSessionProxy.h"
#endif
#define CUSTOMSESSIONNAME_CreateCustomSessionProxy_generated_h

#define SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_CreateCustomSessionProxy_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateCustomSession) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PublicConnections); \
		P_GET_UBOOL(Z_Param_bUseLAN); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CustomSessionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCreateCustomSessionProxy**)Z_Param__Result=UCreateCustomSessionProxy::CreateCustomSession(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_PublicConnections,Z_Param_bUseLAN,Z_Param_CustomSessionName); \
		P_NATIVE_END; \
	}


#define SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_CreateCustomSessionProxy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateCustomSession) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PublicConnections); \
		P_GET_UBOOL(Z_Param_bUseLAN); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CustomSessionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCreateCustomSessionProxy**)Z_Param__Result=UCreateCustomSessionProxy::CreateCustomSession(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_PublicConnections,Z_Param_bUseLAN,Z_Param_CustomSessionName); \
		P_NATIVE_END; \
	}


#define SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_CreateCustomSessionProxy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCreateCustomSessionProxy(); \
	friend struct Z_Construct_UClass_UCreateCustomSessionProxy_Statics; \
public: \
	DECLARE_CLASS(UCreateCustomSessionProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomSessionName"), CUSTOMSESSIONNAME_API) \
	DECLARE_SERIALIZER(UCreateCustomSessionProxy)


#define SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_CreateCustomSessionProxy_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCreateCustomSessionProxy(); \
	friend struct Z_Construct_UClass_UCreateCustomSessionProxy_Statics; \
public: \
	DECLARE_CLASS(UCreateCustomSessionProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomSessionName"), CUSTOMSESSIONNAME_API) \
	DECLARE_SERIALIZER(UCreateCustomSessionProxy)


#define SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_CreateCustomSessionProxy_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMSESSIONNAME_API UCreateCustomSessionProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreateCustomSessionProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMSESSIONNAME_API, UCreateCustomSessionProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreateCustomSessionProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CUSTOMSESSIONNAME_API UCreateCustomSessionProxy(UCreateCustomSessionProxy&&); \
	CUSTOMSESSIONNAME_API UCreateCustomSessionProxy(const UCreateCustomSessionProxy&); \
public:


#define SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_CreateCustomSessionProxy_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMSESSIONNAME_API UCreateCustomSessionProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CUSTOMSESSIONNAME_API UCreateCustomSessionProxy(UCreateCustomSessionProxy&&); \
	CUSTOMSESSIONNAME_API UCreateCustomSessionProxy(const UCreateCustomSessionProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMSESSIONNAME_API, UCreateCustomSessionProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreateCustomSessionProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreateCustomSessionProxy)


#define SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_CreateCustomSessionProxy_h_15_PRIVATE_PROPERTY_OFFSET
#define SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_CreateCustomSessionProxy_h_12_PROLOG
#define SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_CreateCustomSessionProxy_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_CreateCustomSessionProxy_h_15_PRIVATE_PROPERTY_OFFSET \
	SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_CreateCustomSessionProxy_h_15_RPC_WRAPPERS \
	SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_CreateCustomSessionProxy_h_15_INCLASS \
	SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_CreateCustomSessionProxy_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_CreateCustomSessionProxy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_CreateCustomSessionProxy_h_15_PRIVATE_PROPERTY_OFFSET \
	SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_CreateCustomSessionProxy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_CreateCustomSessionProxy_h_15_INCLASS_NO_PURE_DECLS \
	SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_CreateCustomSessionProxy_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CreateCustomSessionProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_CreateCustomSessionProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
