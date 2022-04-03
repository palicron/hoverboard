// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "HB_PlayerNavBase.generated.h"
class UHB_HoverCompoenent;
class UArrowComponent;
UCLASS()
class HOVERBOARD_API AHB_PlayerNavBase : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AHB_PlayerNavBase();
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Hober System")
	UHB_HoverCompoenent* HoverComp;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Hober System")
	UArrowComponent*  ForwardArrow;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
	UPROPERTY(Category = Vehicle, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USkeletalMeshComponent* Mesh;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
