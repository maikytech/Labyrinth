// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Checkpoint.generated.h"

UCLASS()
class LABYRINTH_API ACheckpoint : public AActor
{
	GENERATED_BODY()
	
protected:
    
    virtual void BeginPlay() override;
    
public:
    
    UFUNCTION()
    void OnOverlap(AActor* me, AActor* other);


};
