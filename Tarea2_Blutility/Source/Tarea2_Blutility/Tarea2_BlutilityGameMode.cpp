// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tarea2_BlutilityGameMode.h"
#include "Tarea2_BlutilityCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATarea2_BlutilityGameMode::ATarea2_BlutilityGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
