// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MachineLearningHUD.generated.h"

UCLASS()
class AMachineLearningHUD : public AHUD
{
	GENERATED_BODY()

public:
	AMachineLearningHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

