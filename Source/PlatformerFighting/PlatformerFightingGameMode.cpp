// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "PlatformerFightingGameMode.h"
#include "PlatformerFightingCharacter.h"
#include "Engine/World.h"
#include "../../../../Programs/UE_4.20/Engine/Plugins/MovieScene/ActorSequence/Source/ActorSequence/Private/ActorSequencePrivatePCH.h"


APlatformerFightingGameMode::APlatformerFightingGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = APlatformerFightingCharacter::StaticClass();	
}

void APlatformerFightingGameMode::BeginPlay()
{
	
}
