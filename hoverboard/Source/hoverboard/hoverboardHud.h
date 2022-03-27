// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "hoverboardHud.generated.h"

UCLASS(config = Game)
class AhoverboardHud : public AHUD
{
	GENERATED_BODY()

public:
	AhoverboardHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface

};
