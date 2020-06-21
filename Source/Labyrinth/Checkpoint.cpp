// Fill out your copyright notice in the Description page of Project Settings.


#include "Checkpoint.h"
#include "PlayerBase.h"

void ACheckpoint::BeginPlay()
{
    Super::BeginPlay();
    
    OnActorBeginOverlap.AddDynamic(this, &ACheckpoint::OnOverlap);
    
}

void ACheckpoint::OnOverlap(AActor* me, AActor* other)
{
    APlayerBase* player = Cast<APlayerBase>(other);
    
    if (player != nullptr && player->currentCheckpoint != this)
    {
        player->initialPosition = GetActorLocation();
        player->initialRotation = GetActorRotation();
        
        UE_LOG(LogTemp, Warning, TEXT("Checkpoint"));
        
        if (player->currentCheckpoint != nullptr)
        {
            GetWorld()->ServerTravel("Win");
        }
        
        player->currentCheckpoint = this;
    }
}

