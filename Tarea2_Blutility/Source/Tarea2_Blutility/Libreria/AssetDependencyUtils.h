// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AssetDependencyUtils.generated.h"

/**
 * 
 */
UCLASS()
class TAREA2_BLUTILITY_API UAssetDependencyUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Asset Dependency Utils")
	static void GenerateAndSaveDependencyReport();
};
