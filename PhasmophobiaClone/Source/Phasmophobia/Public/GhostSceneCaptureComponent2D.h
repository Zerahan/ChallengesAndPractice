// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "GhostSceneCaptureComponent2D.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, meta = (BlueprintSpawnableComponent))
class PHASMOPHOBIA_API UGhostSceneCaptureComponent2D : public USceneCaptureComponent2D
{
	GENERATED_BODY()

	virtual const AActor* GetViewOwner() const override { return ViewOwner; }
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	AActor* ViewOwner;
	
};
