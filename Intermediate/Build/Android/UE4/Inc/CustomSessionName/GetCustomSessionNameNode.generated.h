// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBlueprintSessionResult;
#ifdef CUSTOMSESSIONNAME_GetCustomSessionNameNode_generated_h
#error "GetCustomSessionNameNode.generated.h already included, missing '#pragma once' in GetCustomSessionNameNode.h"
#endif
#define CUSTOMSESSIONNAME_GetCustomSessionNameNode_generated_h

#define SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_GetCustomSessionNameNode_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCustomSessionName) \
	{ \
		P_GET_STRUCT(FBlueprintSessionResult,Z_Param_SearchRes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UGetCustomSessionNameNode::GetCustomSessionName(Z_Param_SearchRes); \
		P_NATIVE_END; \
	}


#define SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_GetCustomSessionNameNode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCustomSessionName) \
	{ \
		P_GET_STRUCT(FBlueprintSessionResult,Z_Param_SearchRes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UGetCustomSessionNameNode::GetCustomSessionName(Z_Param_SearchRes); \
		P_NATIVE_END; \
	}


#define SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_GetCustomSessionNameNode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGetCustomSessionNameNode(); \
	friend struct Z_Construct_UClass_UGetCustomSessionNameNode_Statics; \
public: \
	DECLARE_CLASS(UGetCustomSessionNameNode, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomSessionName"), NO_API) \
	DECLARE_SERIALIZER(UGetCustomSessionNameNode)


#define SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_GetCustomSessionNameNode_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUGetCustomSessionNameNode(); \
	friend struct Z_Construct_UClass_UGetCustomSessionNameNode_Statics; \
public: \
	DECLARE_CLASS(UGetCustomSessionNameNode, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomSessionName"), NO_API) \
	DECLARE_SERIALIZER(UGetCustomSessionNameNode)


#define SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_GetCustomSessionNameNode_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetCustomSessionNameNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetCustomSessionNameNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetCustomSessionNameNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetCustomSessionNameNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGetCustomSessionNameNode(UGetCustomSessionNameNode&&); \
	NO_API UGetCustomSessionNameNode(const UGetCustomSessionNameNode&); \
public:


#define SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_GetCustomSessionNameNode_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetCustomSessionNameNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGetCustomSessionNameNode(UGetCustomSessionNameNode&&); \
	NO_API UGetCustomSessionNameNode(const UGetCustomSessionNameNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetCustomSessionNameNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetCustomSessionNameNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetCustomSessionNameNode)


#define SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_GetCustomSessionNameNode_h_13_PRIVATE_PROPERTY_OFFSET
#define SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_GetCustomSessionNameNode_h_10_PROLOG
#define SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_GetCustomSessionNameNode_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_GetCustomSessionNameNode_h_13_PRIVATE_PROPERTY_OFFSET \
	SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_GetCustomSessionNameNode_h_13_RPC_WRAPPERS \
	SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_GetCustomSessionNameNode_h_13_INCLASS \
	SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_GetCustomSessionNameNode_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_GetCustomSessionNameNode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_GetCustomSessionNameNode_h_13_PRIVATE_PROPERTY_OFFSET \
	SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_GetCustomSessionNameNode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_GetCustomSessionNameNode_h_13_INCLASS_NO_PURE_DECLS \
	SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_GetCustomSessionNameNode_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GetCustomSessionNameNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnakeRoyal_Plugins_CustomSessionName_Source_CustomSessionName_Public_GetCustomSessionNameNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
