// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DrawDebugHelpers.h"
#include "HB_HoverCompoenent.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HOVERBOARD_API UHB_HoverCompoenent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHB_HoverCompoenent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
	
	UFUNCTION(BlueprintCallable,Category="Hover System ")
    void HeightHoverCalculation();
	
	UFUNCTION(BlueprintCallable,Category="Hover System ")
    float CalculateHoverForce();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="HoverSystem Config")
	float SpringLenght;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="HoverSystem Config")
	float Stiffness;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="HoverSystem Config")
	float ForceMod;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="HoverSystem Config")
	float SuspencionDelta;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="HoverSystem Config")
	float SuspencionPrevious;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="HoverSystem Config")
	float Damping;

	

		
};
