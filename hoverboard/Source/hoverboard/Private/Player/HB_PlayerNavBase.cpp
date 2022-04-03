// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/HB_PlayerNavBase.h"

#include "Compoenents/HB_HoverCompoenent.h"
#include "Components/ArrowComponent.h"

// Sets default values
AHB_PlayerNavBase::AHB_PlayerNavBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//ForwardArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Forwarf Arrow"));
	//RootComponent = ForwardArrow;
	
	HoverComp = CreateDefaultSubobject<UHB_HoverCompoenent>(TEXT("Hover Component"));
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Nav Mesh"));
	Mesh->BodyInstance.bSimulatePhysics = false;
	Mesh->BodyInstance.bNotifyRigidBodyCollision = true;
//	Mesh->BodyInstance.bUseCCD = true;
//	Mesh->bBlendPhysics = true;
//	Mesh->SetGenerateOverlapEvents(true);
//	Mesh->SetCanEverAffectNavigation(false);
	RootComponent = Mesh;
	//Mesh->SetupAttachment(RootComponent);
	
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
	//Mesh->AddForce(-GetActorUpVector()*1000.f);

}

// Called to bind functionality to input
void AHB_PlayerNavBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}



