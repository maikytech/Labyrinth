// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DoorKey.generated.h"

UCLASS()
class LABYRINTH_API ADoorKey : public AActor
{
	GENERATED_BODY()
    
private:
    
    UFUNCTION()
    void OnOverlap(AActor* me, AActor* other);
    
    
protected:
    
    virtual void BeginPlay() override;
	

};
