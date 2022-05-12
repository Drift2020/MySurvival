// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TPCharacter.generated.h"

UCLASS()
class SURVIVAL_API ATPCharacter : public ACharacter
{
	GENERATED_BODY()
	
	UCharacterMovementComponent* CharacterMovement;

public:
	// Sets default values for this character's properties
	ATPCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	class UCameraComponent* FollowCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bisDead;

	

	void MoveForward(float Axis);

	void MoveRight(float Axis);

	void Jump();

	void StopJumping();

	void SetIsDead(bool value);

	bool GetIsDead();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
