// Copyright Epic Games, Inc. All Rights Reserved.

#include "BehaviourGameJamGameMode.h"
#include "BehaviourGameJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABehaviourGameJamGameMode::ABehaviourGameJamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
