// Copyright 2020 Tristan "Axandros" Brumagin.

#include "Monster.h"
#include "QueryPerceptionComponent.h"
#include "HealthComponent.h"

// Sets default values
AMonster::AMonster()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PerceptionComponent = CreateDefaultSubobject<UQueryPerceptionComponent>(TEXT("PerceptionComponent"));
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("CombatComponent"));
	HealthComponent->OnZeroHealth.AddDynamic(this, &AMonster::Death);
}

// Called when the game starts or when spawned
void AMonster::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMonster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMonster::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMonster::Death()
{
}
