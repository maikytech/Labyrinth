// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VerticalTrap.generated.h"

UCLASS()
class LABYRINTH_API AVerticalTrap : public AActor
{
	GENERATED_BODY()
	
protected:
    
    FTimerHandle timerHandle;
    
    virtual void BeginPlay() override;
    void ChangeDirection();
    
public:
    
    UPROPERTY(EditAnywhere)
    float speed;
    
    UPROPERTY(EditAnywhere)
    float changeTime;
    
    AVerticalTrap();
    virtual void Tick(float DeltaTime) override;
    

};
