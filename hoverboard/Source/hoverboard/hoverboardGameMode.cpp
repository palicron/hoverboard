// Copyright Epic Games, Inc. All Rights Reserved.

#include "hoverboardGameMode.h"
#include "hoverboardPawn.h"
#include "hoverboardHud.h"

AhoverboardGameMode::AhoverboardGameMode()
{
	DefaultPawnClass = AhoverboardPawn::StaticClass();
	HUDClass = AhoverboardHud::StaticClass();
}
