// Fill out your copyright notice in the Description page of Project Settings.


#include "MyChildActor.h"

void AMyChildActor::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Cyan, name);
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, "This is a OnConstruction");
	UE_LOG(LogTemp, Warning, TEXT("This is a game"));
}

void AMyChildActor::BeginPlay() {
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "This is a start");
}

 

