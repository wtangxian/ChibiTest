// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "ChibiTest.h"
#include "ChibiTestGameMode.h"
#include "ChibiTestCharacter.h"

AChibiTestGameMode::AChibiTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ChibiHeroFemalePack/Blueprints/BP_FHero_DarkKnight"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
