// Created by Bionic Ape. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
//TODO: This is meant to be removed
#include "GameLiftTypes.h"
//END TODO
#include "GameLiftTutorialGameMode.generated.h"


UCLASS(minimalapi)
class AGameLiftTutorialGameMode : public AGameModeBase
{
	GENERATED_BODY()

private:
	
	UPROPERTY()
	FStartGameSessionState StartGameSessionState;
	
	UPROPERTY()
	FUpdateGameSessionState UpdateGameSessionState;
	
	UPROPERTY()
	FProcessTerminateState ProcessTerminateState;
	
	UPROPERTY()
	FHealthCheckState HealthCheckState;

public:

	AGameLiftTutorialGameMode();

protected:

	virtual void BeginPlay() override;

private:

	virtual void InitGameLift();

};





