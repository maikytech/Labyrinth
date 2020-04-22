// Fill out your copyright notice in the Description page of Project Settings.


#include "VerticalTrap.h"
#include "TimerManager.h"
#include "PlayerBase.h"

AVerticalTrap::AVerticalTrap()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AVerticalTrap::BeginPlay()
{
    Super::BeginPlay();
    
    GetWorldTimerManager().SetTimer(timerHandle, this, &AVerticalTrap::ChangeDirection, changeTime, true);
    OnActorBeginOverlap.AddDynamic(this, &AVerticalTrap::OnOverlap);
    
}

void AVerticalTrap::ChangeDirection()
{
    speed *= -1;
}

void AVerticalTrap::OnOverlap(AActor* me, AActor* other)
{
    APlayerBase* pb = Cast<APlayerBase>(other);
    
    if(pb != nullptr)
    {
        pb->life -= damage;
    }
}

void AVerticalTrap::Tick(float DeltaTime)
{
    FVector movement(0, 0, 0);
    movement.Z = speed * DeltaTime;
    AddActorLocalOffset(movement, true);
}
