// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CollectableActions.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UCollectableActions : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class UNREALFPS_API ICollectableActions
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Collectables")
	void OnCollectableCollected();
};
