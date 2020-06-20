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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_coinsToWin_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_coinsToWin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_collectedCoins_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_collectedCoins;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALabyrinthGameModeBase_Statics::NewProp_coinsToWin_MetaData[] = {
		{ "Category", "LabyrinthGameModeBase" },
		{ "ModuleRelativePath", "LabyrinthGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ALabyrinthGameModeBase_Statics::NewProp_coinsToWin = { "coinsToWin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALabyrinthGameModeBase, coinsToWin), METADATA_PARAMS(Z_Construct_UClass_ALabyrinthGameModeBase_Statics::NewProp_coinsToWin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALabyrinthGameModeBase_Statics::NewProp_coinsToWin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALabyrinthGameModeBase_Statics::NewProp_collectedCoins_MetaData[] = {
		{ "Category", "LabyrinthGameModeBase" },
		{ "ModuleRelativePath", "LabyrinthGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ALabyrinthGameModeBase_Statics::NewProp_collectedCoins = { "collectedCoins", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALabyrinthGameModeBase, collectedCoins), METADATA_PARAMS(Z_Construct_UClass_ALabyrinthGameModeBase_Statics::NewProp_collectedCoins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALabyrinthGameModeBase_Statics::NewProp_collectedCoins_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALabyrinthGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALabyrinthGameModeBase_Statics::NewProp_coinsToWin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALabyrinthGameModeBase_Statics::NewProp_collectedCoins,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALabyrinthGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALabyrinthGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALabyrinthGameModeBase_Statics::ClassParams = {
		&ALabyrinthGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALabyrinthGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALabyrinthGameModeBase_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ALabyrinthGameModeBase, 1022608271);
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
