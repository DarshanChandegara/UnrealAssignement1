// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyActor.h"
#include "MyChildActor.generated.h"

/**
 * 
 */
UCLASS()
class UNREALTRAINING_API AMyChildActor : public AMyActor
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override; 
	virtual void Tick(float DeltaTime) override;

	
};
