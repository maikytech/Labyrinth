// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Coin.generated.h"

UCLASS()
class LABYRINTH_API ACoin : public AActor
{
	GENERATED_BODY()
	

protected:
	
	virtual void BeginPlay() override;

public:
    
    UFUNCTION()
    void OnOverlap(AActor* me, AActor* other);
	

};
