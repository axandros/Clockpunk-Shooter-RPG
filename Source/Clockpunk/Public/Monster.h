// Copyright 2020 Tristan "Axandros" Brumagin.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Monster.generated.h"

UCLASS()
class CLOCKPUNK_API AMonster : public ACharacter
{
	GENERATED_BODY()


public:
	// Sets default values for this character's properties
	AMonster();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Perception)
		class UQueryPerceptionComponent* PerceptionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat)
		class UHealthComponent* HealthComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Death();
};
