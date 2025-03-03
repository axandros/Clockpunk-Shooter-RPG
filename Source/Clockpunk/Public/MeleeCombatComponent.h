// Copyright 2020 Tristan "Axandros" Brumagin.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MeleeCombatComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CLOCKPUNK_API UMeleeCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMeleeCombatComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	// The distance the melee attack can reach.
	UPROPERTY(BlueprintReadWrite)
		float Range = 150.0f;

	// Time between animation start and damage dealt.
	UPROPERTY(BlueprintReadWrite)
		float AnimationDelay = 0.0f;

	// The angle away from the forward vector the attack can hit.
	UPROPERTY(BlueprintReadWrite)
		float AttackAngle = 30.0f;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	
};
