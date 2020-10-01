// Copyright Epic Games, Inc. All Rights Reserved.

#include "ClockpunkGameMode.h"
#include "ClockpunkHUD.h"
#include "ClockpunkCharacter.h"
#include "UObject/ConstructorHelpers.h"

AClockpunkGameMode::AClockpunkGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AClockpunkHUD::StaticClass();
}
