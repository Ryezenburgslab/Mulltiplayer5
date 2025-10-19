// Copyright Epic Games, Inc. All Rights Reserved.

#include "Mulltiplayer5GameMode.h"
#include "Mulltiplayer5Character.h"
#include "UObject/ConstructorHelpers.h"

AMulltiplayer5GameMode::AMulltiplayer5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
