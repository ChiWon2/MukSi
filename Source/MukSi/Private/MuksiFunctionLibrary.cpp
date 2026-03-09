// Fill out your copyright notice in the Description page of Project Settings.


#include "MuksiFunctionLibrary.h"

#include "MuksiSettings/MuksiDeveloperSettings.h"

TSoftClassPtr<UWidget_ActivatableBase> UMuksiFunctionLibrary::GetMuksiSoftWidgetClassByTag(FGameplayTag InWidgetTag)
{
	const UMuksiDeveloperSettings* MuksiDeveloperSettings = GetDefault<UMuksiDeveloperSettings>();
	
	checkf(MuksiDeveloperSettings->MuksiWidgetMap.Contains(InWidgetTag), TEXT("Could not find the corresponding widget under the tag %s"), *InWidgetTag.ToString());
	
	return MuksiDeveloperSettings->MuksiWidgetMap.FindRef(InWidgetTag);
}
