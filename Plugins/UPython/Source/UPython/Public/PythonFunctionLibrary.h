// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PythonBridge/library.h"
#include "PythonFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class UPYTHON_API UPythonFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static bool RunPythonScript(FString script);
	
};
