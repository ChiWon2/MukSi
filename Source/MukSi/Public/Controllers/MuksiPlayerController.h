// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MuksiPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class MUKSI_API AMuksiPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	//~ Begin APlayerController Interface
	virtual void OnPossess(APawn* InPawn) override;	
	//~ End APlayerController Interface
	
	
};
