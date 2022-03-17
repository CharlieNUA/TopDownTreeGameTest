// Copyright Epic Games, Inc. All Rights Reserved.

#include "treegameGameMode.h"
#include "treegameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AtreegameGameMode::AtreegameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
