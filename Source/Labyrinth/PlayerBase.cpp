// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerBase.h"
#include "Engine/World.h"
#include "Components/InputComponent.h"

void APlayerBase::SetupPlayerInputComponent (UInputComponent* inputComponent)
{
    InputComponent->BindAxis("Forward", this, &APlayerBase::ForwardAxis);
    InputComponent->BindAxis("Side", this, &APlayerBase::SideAxis);
}

void APlayerBase::ForwardAxis(float axis)
{
    FVector velocity (0, 0, 0);
    velocity.X = axis * speed * GetWorld()->GetDeltaSeconds();
    AddActorLocalOffset(velocity, true);    //Sweep en true, better for physics
}

void APlayerBase::SideAxis(float axis)
{
    FRotator rotation (0, 0, 0);
    rotation.Yaw = axis * speedRotation * GetWorld()->GetDeltaSeconds();
    AddActorLocalRotation(rotation);
}
