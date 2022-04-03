// Fill out your copyright notice in the Description page of Project Settings.


#include "Compoenents/HB_HoverCompoenent.h"

// Sets default values for this component's properties
UHB_HoverCompoenent::UHB_HoverCompoenent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHB_HoverCompoenent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHB_HoverCompoenent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	HeightHoverCalculation();

	// ...
}

void UHB_HoverCompoenent::HeightHoverCalculation()
{
	FHitResult OutHit;
	FVector Start = GetOwner()->GetActorLocation();
	FVector End = Start + (-GetOwner()->GetActorUpVector())* SpringLenght;

   	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(GetOwner());
	
	DrawDebugLine(GetWorld(),Start,End,FColor::Green,false,1,0,1);

	if(GetWorld()->LineTraceSingleByChannel(OutHit,Start,End,ECC_Visibility,CollisionParams))
	{
		USkeletalMeshComponent* Sk = Cast<USkeletalMeshComponent>( GetOwner()->GetRootComponent());
		if(Sk)
		{
		//	Sk->AddForce(GetOwner()->GetActorUpVector()*HoverForce);
			FRotator Mrotation =  OutHit.ImpactNormal.Rotation();
		
		}
	}
	GetOwner()->SetActorRotation(FRotator::ZeroRotator);
}

float UHB_HoverCompoenent::CalculateHoverForce()
{
	float DeltaCal = (SuspencionDelta - SuspencionPrevious)/GetWorld()->GetDeltaSeconds();
	DeltaCal = DeltaCal * Damping;
	DeltaCal  += SuspencionDelta * Stiffness;
	DeltaCal *= ForceMod;
	return ForceMod;
}

