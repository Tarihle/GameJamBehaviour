// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviourGameJam/BehaviourGameJamGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviourGameJamGameMode() {}

// Begin Cross Module References
BEHAVIOURGAMEJAM_API UClass* Z_Construct_UClass_ABehaviourGameJamGameMode();
BEHAVIOURGAMEJAM_API UClass* Z_Construct_UClass_ABehaviourGameJamGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BehaviourGameJam();
// End Cross Module References

// Begin Class ABehaviourGameJamGameMode
void ABehaviourGameJamGameMode::StaticRegisterNativesABehaviourGameJamGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABehaviourGameJamGameMode);
UClass* Z_Construct_UClass_ABehaviourGameJamGameMode_NoRegister()
{
	return ABehaviourGameJamGameMode::StaticClass();
}
struct Z_Construct_UClass_ABehaviourGameJamGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BehaviourGameJamGameMode.h" },
		{ "ModuleRelativePath", "BehaviourGameJamGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABehaviourGameJamGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABehaviourGameJamGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviourGameJam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABehaviourGameJamGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABehaviourGameJamGameMode_Statics::ClassParams = {
	&ABehaviourGameJamGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABehaviourGameJamGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABehaviourGameJamGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABehaviourGameJamGameMode()
{
	if (!Z_Registration_Info_UClass_ABehaviourGameJamGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABehaviourGameJamGameMode.OuterSingleton, Z_Construct_UClass_ABehaviourGameJamGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABehaviourGameJamGameMode.OuterSingleton;
}
template<> BEHAVIOURGAMEJAM_API UClass* StaticClass<ABehaviourGameJamGameMode>()
{
	return ABehaviourGameJamGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABehaviourGameJamGameMode);
ABehaviourGameJamGameMode::~ABehaviourGameJamGameMode() {}
// End Class ABehaviourGameJamGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_BehaviourGameJam_Source_BehaviourGameJam_BehaviourGameJamGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABehaviourGameJamGameMode, ABehaviourGameJamGameMode::StaticClass, TEXT("ABehaviourGameJamGameMode"), &Z_Registration_Info_UClass_ABehaviourGameJamGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABehaviourGameJamGameMode), 788963858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BehaviourGameJam_Source_BehaviourGameJam_BehaviourGameJamGameMode_h_2505611923(TEXT("/Script/BehaviourGameJam"),
	Z_CompiledInDeferFile_FID_BehaviourGameJam_Source_BehaviourGameJam_BehaviourGameJamGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BehaviourGameJam_Source_BehaviourGameJam_BehaviourGameJamGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
