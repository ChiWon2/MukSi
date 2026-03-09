// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/Widget_ActivatableBase.h"
#include "MuksiTYpes/MuksiWidgetEnumTypes.h"
#include "Widget_ConfirmScreen.generated.h"

class UCommonTextBlock;
class UDynamicEntryBox;

USTRUCT(BlueprintType)
struct FConfirmScreenButtonInfo
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EConfirmScreenButtonType ConfirmScreenButtonType = EConfirmScreenButtonType::Unknown;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ButtonTextToDisplay;
};

/**
 * 
 */
UCLASS(Abstract, BlueprintType, meta = (DisableNaiveTick))
class MUKSI_API UWidget_ConfirmScreen : public UWidget_ActivatableBase
{
	GENERATED_BODY()
	
private:
	UPROPERTY(meta = (BindWidget))
	UCommonTextBlock* CommonTextBlock_Title;
	
	UPROPERTY(meta = (BindWidget))
	UCommonTextBlock* CommonTextBlock_Message;
	
	UPROPERTY(meta = (BindWidget))
	UDynamicEntryBox* DynamicEntryBox_Buttons;
};
