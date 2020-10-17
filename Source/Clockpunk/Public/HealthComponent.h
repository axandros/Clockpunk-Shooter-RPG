// Copyright 2020 Tristan "Axandros" Brumagin.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnZeroHealth);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CLOCKPUNK_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()


public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;


	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health")
		float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float CurrentHealth;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
		void TakeDamage(int damageValue);

	UFUNCTION(BlueprintCallable)
		void RestoreDamage(int damageToHeal);

	UPROPERTY(BlueprintAssignable, Category = "EventDispatchers")
		FOnZeroHealth OnZeroHealth;
};
