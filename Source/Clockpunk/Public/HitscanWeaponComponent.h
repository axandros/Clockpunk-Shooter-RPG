// Copyright 2020 Tristan "Axandros" Brumagin.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HitscanWeaponComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CLOCKPUNK_API UHitscanWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHitscanWeaponComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	// Distance the scan goes.
	UPROPERTY(BlueprintReadWrite, Category = "Attacking")
		float Range = 10000.0f;

	// The location the Scan begins.
	UPROPERTY(BlueprintReadWrite, Category = "Attacking")
		FVector ScanOrigin;

	// Thw directin the scan should go.
	UPROPERTY(BlueprintReadWrite, Category = "Attacking")
		FVector ScanDirection;

	// The width of the Scan.  Useful for providing some leeway.
	UPROPERTY(BlueprintReadWrite, Category = "Attacking")
		float ScanRadius = 0.0f;
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
