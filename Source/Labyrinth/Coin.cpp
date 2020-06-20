// Fill out your copyright notice in the Description page of Project Settings.


#include "Coin.h"
#include "Engine/World.h"
#include "PlayerBase.h"
#include "LabyrinthGameModeBase.h"

void ACoin::BeginPlay()
{
    Super::BeginPlay();
    
    OnActorBeginOverlap.AddDynamic(this, &ACoin::OnOverlap);
    
}

void ACoin::OnOverlap(AActor* me, AActor* other)
{
    APlayerBase* p = Cast<APlayerBase>(other);
    
    if(p != nullptr)
    {
        UE_LOG(LogTemp, Warning, TEXT("Collision with Player"));
        
        AGameModeBase* gameModeBase = GetWorld()->GetAuthGameMode();
        ALabyrinthGameModeBase* gameMode = Cast<ALabyrinthGameModeBase>(gameModeBase);
        
        if(gameMode != nullptr)
        {
            gameMode->collectedCoins++;
            Destroy();
        }
    }
}
