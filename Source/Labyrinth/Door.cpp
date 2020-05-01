// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"
#include "PlayerBase.h"

void ADoor::BeginPlay()
{
    Super::BeginPlay();
    
    OnActorBeginOverlap.AddDynamic(this, &ADoor::OnOverlap);
    
}

void ADoor::OnOverlap(AActor* me, AActor* other)
{
    APlayerBase* pb = Cast<APlayerBase>(other);
    
    if(pb != nullptr && pb->keys > 0)
    {
        pb->keys--;
        
        Destroy();
        
        UE_LOG(LogTemp, Warning, TEXT("Door Colision"));
    }
}
