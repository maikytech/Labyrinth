// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerBase.generated.h"

UCLASS()
class LABYRINTH_API APlayerBase : public APawn
{
	GENERATED_BODY()
    
protected:
    
    virtual void BeginPlay() override;

public:

    
    FVector initialPosition;
    FRotator initialRotation;
    
    UPROPERTY(EditAnywhere)
    int respawns;

    UPROPERTY(EditAnywhere)
    float initialLife;
    
    UPROPERTY(EditAnywhere)
    float life;
    
    UPROPERTY(EditAnywhere)
    float speed;
    
    UPROPERTY(EditAnywhere)
    float speedRotation;
    
    APlayerBase();
    
    virtual void SetupPlayerInputComponent(class UInputComponent* inputComponent) override;
    virtual void Tick (float DeltaTime) override;
    
    void ForwardAxis(float axis);
    void SideAxis(float axis);


};
