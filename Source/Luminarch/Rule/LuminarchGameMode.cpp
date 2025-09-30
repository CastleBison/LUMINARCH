// Fill out your copyright notice in the Description page of Project Settings.


#include "LuminarchGameMode.h"
#include "../Player/MyCharacter.h"

ALuminarchGameMode::ALuminarchGameMode()
{
	DefaultPawnClass = AMyCharacter::StaticClass();
}

