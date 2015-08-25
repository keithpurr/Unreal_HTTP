// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "HttpRequest.h"
#include "HttpRequestGameMode.h"
#include "HttpRequestCharacter.h"

AHttpRequestGameMode::AHttpRequestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
