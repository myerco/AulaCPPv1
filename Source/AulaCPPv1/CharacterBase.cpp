// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterBase.h"

// Sets default values
ACharacterBase::ACharacterBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshMain = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Main"));

	MeshMain->SetupAttachment(RootComponent);


}

// Called when the game starts or when spawned
void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Teste 123..."));
	
}

// Called every frame
void ACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

