// Fill out your copyright notice in the Description page of Project Settings.


#include "Coin.h"

void ACoin::BeginPlay()
{
    Super::BeginPlay();
    
    OnActorBeginOverlap(this, &ACoin::OnOverlap);
}

void ACoin::OnOverlap(AActor* me, AActor* other)
{
    
}
