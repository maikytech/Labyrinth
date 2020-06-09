// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Labyrinth/LabyrinthGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLabyrinthGameModeBase() {}
// Cross Module References
	LABYRINTH_API UClass* Z_Construct_UClass_ALabyrinthGameModeBase_NoRegister();
	LABYRINTH_API UClass* Z_Construct_UClass_ALabyrinthGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Labyrinth();
// End Cross Module References
	void ALabyrinthGameModeBase::StaticRegisterNativesALabyrinthGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ALabyrinthGameModeBase_NoRegister()
	{
		return ALabyrinthGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ALabyrinthGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALabyrinthGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Labyrinth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALabyrinthGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LabyrinthGameModeBase.h" },
		{ "ModuleRelativePath", "LabyrinthGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALabyrinthGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALabyrinthGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALabyrinthGameModeBase_Statics::ClassParams = {
		&ALabyrinthGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALabyrinthGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALabyrinthGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALabyrinthGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALabyrinthGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALabyrinthGameModeBase, 1322030226);
	template<> LABYRINTH_API UClass* StaticClass<ALabyrinthGameModeBase>()
	{
		return ALabyrinthGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALabyrinthGameModeBase(Z_Construct_UClass_ALabyrinthGameModeBase, &ALabyrinthGameModeBase::StaticClass, TEXT("/Script/Labyrinth"), TEXT("ALabyrinthGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALabyrinthGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
