// Fill out your copyright notice in the Description page of Project Settings.


#include "PythonFunctionLibrary.h"

bool UPythonFunctionLibrary::RunPythonScript(FString script)
{
	PythonBridge* PyBridge = new PythonBridge();
	int exe = PyBridge->PyRunScript(TCHAR_TO_ANSI(*script));
	if (exe == 0)
	{
		return true;
	}
	return false;
}
