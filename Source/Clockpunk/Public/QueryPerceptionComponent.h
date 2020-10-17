// Copyright 2020 Tristan "Axandros" Brumagin.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "QueryPerceptionComponent.generated.h"


UCLASS(BlueprintType, ClassGroup=(Custom) , meta=(BlueprintSpawnableComponent) )
class CLOCKPUNK_API UQueryPerceptionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UQueryPerceptionComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	// Central Vision
	/* The angle, in degrees, away from the forward vector that the central vision goes.*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perception")
		float centralViewAngleHorizontal;

	/* Unused */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perception")
		float centralViewAngleVertical;

	/* Unused */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perception")
		float centralViewDistance;


	// Peripheral Vision
	/* Unused */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perception")
		float peripheralViewAngleHorizontl;

	/* Unused */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perception")
		float peripheralViewAngleVertical;

	/* Unused */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perception")
		float peripheralViewDistance;


public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	bool CanSeeActor(AActor* ActorToSee);
};
