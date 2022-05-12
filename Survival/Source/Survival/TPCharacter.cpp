// Fill out your copyright notice in the Description page of Project Settings.


#include "TPCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ATPCharacter::ATPCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(34.0f, 88.0f);

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	CharacterMovement = GetCharacterMovement();

	CharacterMovement->bOrientRotationToMovement = true;
	CharacterMovement->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	CharacterMovement->JumpZVelocity = 450.0f;
	CharacterMovement->AirControl = 0.2f;
	CharacterMovement->MaxWalkSpeed = 40.0f;
	CharacterMovement->SetWalkableFloorAngle(60);

	bisDead = false;
}


void ATPCharacter::SetIsDead(bool value)
{
	bisDead = value;
}
bool ATPCharacter::GetIsDead()
{
	return bisDead;
}

// Called when the game starts or when spawned
void ATPCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATPCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATPCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ATPCharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ATPCharacter::StopJumping);

	//PlayerInputComponent->BindAxis("MoveForward", this, &ATPCharacter::MoveForward);
	// PlayerInputComponent->BindAxis("MoveRight", this, &ATPCharacter::MoveRight);
}


void ATPCharacter::MoveForward(float Axis)
{

}

void ATPCharacter::MoveRight(float Axis)
{

}

void ATPCharacter::StopJumping()
{

}

void ATPCharacter::Jump()
{

}

