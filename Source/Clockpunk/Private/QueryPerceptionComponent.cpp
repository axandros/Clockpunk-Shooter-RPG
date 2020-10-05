// Fill out your copyright notice in the Description page of Project Settings.


#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "QueryPerceptionComponent.h"

// Sets default values for this component's properties
UQueryPerceptionComponent::UQueryPerceptionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UQueryPerceptionComponent::BeginPlay()
{
	Super::BeginPlay();

	//GetOwner();
}


// Called every frame
void UQueryPerceptionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UQueryPerceptionComponent::CanSeeActor(AActor* target) {
	FVector toTarget = target->GetActorLocation() - GetOwner()->GetActorLocation();
	toTarget.Normalize();
	FVector forward = GetOwner()->GetActorForwardVector();
	forward.Normalize();
	float angle = UKismetMathLibrary::Dot_VectorVector(toTarget, forward);
	//float angle = UKismetMathLibrary::RadiansToDegrees(acos( UKismetMathLibrary::Dot_VectorVector(toTarget , forward)));
	float ViewAngle = cos(centralViewAngleHorizontal);
	//UE_LOG(LogTemp, Warning, TEXT("Dot Product: %f, ViewAngle C: %f"), angle, cosine);
	if (angle > ViewAngle) {
		FDateTime time = FDateTime::Now();
		UE_LOG(LogTemp, Warning, TEXT("%i:%i Player is seen"), time.GetMinute(), time.GetSecond());
	}
	return false;
}
