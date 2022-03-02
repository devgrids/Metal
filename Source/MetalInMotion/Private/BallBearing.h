// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BallBearing.generated.h"

UCLASS()
class ABallBearing : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABallBearing();

	// The static mesh that represents the ball bearing.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = BallBearing)
	UStaticMeshComponent* BallMesh = nullptr;

	// Is the ball bearing attractive to magnets?
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BallBearing)
	bool Magnetized = true;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
