// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterBase.h"

// Sets default values
ACharacterBase::ACharacterBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*Construindo a malha na mem�ria 
	- CreateDefaultSubobject - Cria um componente ou subobjeto, permitindo criar uma classe filho e retornando a classe pai.
	Os objetos rec�m-iniciados podem ter alguns de seus valores padr�o inicializados, mas o Mesh come�ar� vazio. 
	Voc� ter� que carregar o malha mais tarde.
		*/
	MeshMain = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Main"));

	/*
	* ConstructorHelpers - No construtor, inicializamos os componentes e, em seguida, definimos seus valores usando FObjectFinder. 
	Tamb�m configuramos a classe para gerar usando a fun��o StaticClass para recuperar uma inst�ncia UStatic* de um tipo de classe.
	*/
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereVisualAsset(TEXT("/Game/ExampleContent/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));

	if (SphereVisualAsset.Succeeded()) {
		MeshMain->SetStaticMesh(SphereVisualAsset.Object);
		MeshMain->SetRelativeLocation(FVector(0.0f, 0.0f, -100.0f));
		MeshMain->SetWorldScale3D(FVector(0.8f));

	}


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

