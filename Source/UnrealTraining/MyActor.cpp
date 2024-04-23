// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{

	PrimaryActorTick.bCanEverTick = true;

	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh"));
	RootComponent = MyMesh;    
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube")); 
	if (MeshAsset.Succeeded()) 
	{
		MyMesh->SetStaticMesh(MeshAsset.Object); 
	}
}


void AMyActor::BeginPlay()
{
	Super::BeginPlay();

}


void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, "This is a OnConstruction"); 
	//UE_LOG(LogTemp, Warning, TEXT("This is a game"));
}

void AMyActor::OnConstruction(const FTransform& trans) {
	Super::OnConstruction(trans);
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "This is a OnConstruction");
	UE_LOG(LogTemp, Warning, TEXT("his is a OnConstruction"));
}

void AMyActor::PreEditChange(FProperty* props)
{
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "This is a PreEditChange");
	UE_LOG(LogTemp, Warning, TEXT("his is a PreEditChange"));


}


void AMyActor::PostEditChangeProperty(FPropertyChangedEvent& chaneEvent) {
	UE_LOG(LogTemp, Warning, TEXT("This is a PostEditChang"));
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "This is a PostEditChange");
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, name);
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, chaneEvent.GetMemberPropertyName().ToString());
	FVector location;
	location.Set(offset, offset, offset);

	if (pointerThis) {

		pointerThis->SetActorLocation(location);
	}
}

