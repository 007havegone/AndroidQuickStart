// Copyright Epic Games, Inc. All Rights Reserved.

#include "AndroidQuickStartGameMode.h"
#include "AndroidQuickStartPlayerController.h"
#include "AndroidQuickStartCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAndroidQuickStartGameMode::AAndroidQuickStartGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AAndroidQuickStartPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}