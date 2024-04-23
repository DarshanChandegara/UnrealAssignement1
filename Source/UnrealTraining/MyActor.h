// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class UNREALTRAINING_API AMyActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite , EditAnywhere)
	FString name = "Darshan";
	
public:	
	
	AMyActor();

protected:
	
	virtual void BeginPlay() override;

public:	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	AActor* pointerThis;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MySceneComponent") 
	UStaticMeshComponent*  MyMesh; 

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int offset;

	//UPROPERTY(BlueprintAssignable)
	//int myCUstomVariable;

	virtual void Tick(float DeltaTime) override;

	void OnConstruction(const FTransform& trans) override;
	void PreEditChange(FProperty* props);
	void PostEditChangeProperty(FPropertyChangedEvent& chaneEvent);

};
