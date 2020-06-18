// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LabyrinthGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class LABYRINTH_API ALabyrinthGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
    
public:
    
    ALabyrinthGameModeBase();
    
public:
    
    UPROPERTY(VisibleAnywhere)
    int collectedCoins;
    
    UPROPERTY(EditAnywhere)
    int coinsToWin;
    
    virtual void Tick(float deltaSeconds) override;
	
};
