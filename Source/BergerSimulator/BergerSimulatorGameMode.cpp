// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "BergerSimulatorGameMode.h"
#include "BergerSimulatorHUD.h"
#include "BergerSimulatorCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABergerSimulatorGameMode::ABergerSimulatorGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABergerSimulatorHUD::StaticClass();
}
