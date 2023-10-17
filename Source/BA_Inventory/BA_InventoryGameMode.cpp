// Copyright Epic Games, Inc. All Rights Reserved.

#include "BA_InventoryGameMode.h"
#include "BA_InventoryCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABA_InventoryGameMode::ABA_InventoryGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
