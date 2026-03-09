// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "MuksiFunctionLibrary.generated.h"

class UWidget_ActivatableBase;

/**
 * 
 */
UCLASS()
class MUKSI_API UMuksiFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category = "Muksi Function Library")
	static TSoftClassPtr<UWidget_ActivatableBase> GetMuksiSoftWidgetClassByTag(UPARAM(meta = (Categories = "Muksi.Widget"))FGameplayTag InWidgetTag);
};
