// Fill out your copyright notice in the Description page of Project Settings.


#include "Controllers/MuksiPlayerController.h"

#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"

#include "MuksiDebugHelper.h"

void AMuksiPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	
	TArray<AActor*> FoundCameras;
	UGameplayStatics::GetAllActorsOfClassWithTag(this, ACameraActor::StaticClass(), FName("Camera_MainMenu"), FoundCameras);
	if (!FoundCameras.IsEmpty())
	{
		SetViewTarget(FoundCameras[0]);
	}
	
}
