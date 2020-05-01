// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorKey.h"
#include "PlayerBase.h"

void ADoorKey::BeginPlay()
{
    Super::BeginPlay();
    
    OnActorBeginOverlap.AddDynamic(this, &ADoorKey::OnOverlap);
}

void ADoorKey::OnOverlap(AActor* me, AActor* other)
{
    APlayerBase* pb = Cast<APlayerBase>(other);
    
    if(pb != nullptr)
    {
        pb->keys++;
        
        Destroy();
        
    }
}
