// Copyright Epic Games, Inc. All Rights Reserved.

#include "Third_person_1GameMode.h"
#include "Third_person_1Character.h"
#include "UObject/ConstructorHelpers.h"

AThird_person_1GameMode::AThird_person_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
