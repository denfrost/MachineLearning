// Copyright Epic Games, Inc. All Rights Reserved.

#include "MachineLearningGameMode.h"
#include "MachineLearningHUD.h"
#include "MachineLearningCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMachineLearningGameMode::AMachineLearningGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMachineLearningHUD::StaticClass();
}
