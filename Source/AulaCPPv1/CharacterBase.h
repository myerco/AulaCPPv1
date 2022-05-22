// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CharacterBase.generated.h"

UCLASS(Blueprintable)
class AULACPPV1_API ACharacterBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACharacterBase();

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* MeshMain;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
