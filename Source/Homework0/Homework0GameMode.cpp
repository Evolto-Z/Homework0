// Copyright Epic Games, Inc. All Rights Reserved.

#include "Homework0GameMode.h"
#include "Homework0Character.h"
#include "UObject/ConstructorHelpers.h"

AHomework0GameMode::AHomework0GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
