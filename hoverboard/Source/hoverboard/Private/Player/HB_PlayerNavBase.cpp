// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/HB_PlayerNavBase.h"

// Sets default values
AHB_PlayerNavBase::AHB_PlayerNavBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHB_PlayerNavBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHB_PlayerNavBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHB_PlayerNavBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

