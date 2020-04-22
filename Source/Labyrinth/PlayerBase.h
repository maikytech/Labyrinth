// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerBase.generated.h"

UCLASS()
class LABYRINTH_API APlayerBase : public APawn
{
	GENERATED_BODY()

public:
    
    UPROPERTY(EditAnywhere)
    float speed;
    
    UPROPERTY(EditAnywhere)
    float life;
    
    UPROPERTY(EditAnywhere)
    float speedRotation;
    
    APlayerBase();
    
    virtual void SetupPlayerInputComponent(class UInputComponent* inputComponent) override;
    virtual void Tick (float DeltaTime) override;
    
    void ForwardAxis(float axis);
    void SideAxis(float axis);


};
