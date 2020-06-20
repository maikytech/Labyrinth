// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.


#include "LabyrinthGameModeBase.h"
#include "Engine/World.h"

ALabyrinthGameModeBase::ALabyrinthGameModeBase()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ALabyrinthGameModeBase::Tick(float deltaSeconds)
{
    if(collectedCoins >= coinsToWin)
    {
        GetWorld()->ServerTravel("Win");
    }
}
