// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ClockpunkHUD.generated.h"

UCLASS()
class AClockpunkHUD : public AHUD
{
	GENERATED_BODY()

public:
	AClockpunkHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

