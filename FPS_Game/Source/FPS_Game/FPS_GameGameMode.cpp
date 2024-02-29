// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_GameGameMode.h"
#include "FPS_GameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_GameGameMode::AFPS_GameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
