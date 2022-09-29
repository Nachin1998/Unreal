// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALFPS_CollectableActions_generated_h
#error "CollectableActions.generated.h already included, missing '#pragma once' in CollectableActions.h"
#endif
#define UNREALFPS_CollectableActions_generated_h

#define FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_SPARSE_DATA
#define FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_RPC_WRAPPERS \
	virtual void OnCollectableCollected_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnCollectableCollected);


#define FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnCollectableCollected_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnCollectableCollected);


#define FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_EVENT_PARMS
#define FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_CALLBACK_WRAPPERS
#define FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALFPS_API UCollectableActions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollectableActions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALFPS_API, UCollectableActions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollectableActions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALFPS_API UCollectableActions(UCollectableActions&&); \
	UNREALFPS_API UCollectableActions(const UCollectableActions&); \
public:


#define FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALFPS_API UCollectableActions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALFPS_API UCollectableActions(UCollectableActions&&); \
	UNREALFPS_API UCollectableActions(const UCollectableActions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALFPS_API, UCollectableActions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollectableActions); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollectableActions)


#define FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCollectableActions(); \
	friend struct Z_Construct_UClass_UCollectableActions_Statics; \
public: \
	DECLARE_CLASS(UCollectableActions, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UnrealFPS"), UNREALFPS_API) \
	DECLARE_SERIALIZER(UCollectableActions)


#define FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_GENERATED_UINTERFACE_BODY() \
	FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_GENERATED_UINTERFACE_BODY() \
	FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICollectableActions() {} \
public: \
	typedef UCollectableActions UClassType; \
	typedef ICollectableActions ThisClass; \
	static void Execute_OnCollectableCollected(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ICollectableActions() {} \
public: \
	typedef UCollectableActions UClassType; \
	typedef ICollectableActions ThisClass; \
	static void Execute_OnCollectableCollected(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_10_PROLOG \
	FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_EVENT_PARMS


#define FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_SPARSE_DATA \
	FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_RPC_WRAPPERS \
	FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_CALLBACK_WRAPPERS \
	FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_SPARSE_DATA \
	FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_CALLBACK_WRAPPERS \
	FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALFPS_API UClass* StaticClass<class UCollectableActions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealFPS_Source_UnrealFPS_CollectableActions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
