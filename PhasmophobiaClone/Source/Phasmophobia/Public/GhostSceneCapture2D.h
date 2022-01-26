// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "GhostSceneCapture2D.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class PHASMOPHOBIA_API UGhostSceneCapture2D : public USceneCaptureComponent2D
{
	GENERATED_BODY()

	virtual const AActor* GetViewOwner() const override { return ViewOwner; }
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	AActor* ViewOwner;
};
