
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameLiftTypes.generated.h"


USTRUCT()
struct FStartGameSessionState
{
	GENERATED_BODY();

	UPROPERTY()
	bool Status;

	FStartGameSessionState() {
		Status = false;
	}
};

USTRUCT()
struct FUpdateGameSessionState
{
	GENERATED_BODY();

	FUpdateGameSessionState() {

	}
};

USTRUCT()
struct FProcessTerminateState
{
	GENERATED_BODY();

	UPROPERTY()
	bool Status;

	long TerminationTime;

	FProcessTerminateState() {
		Status = false;
	}
};

USTRUCT()
struct FHealthCheckState
{
	GENERATED_BODY();

	UPROPERTY()
	bool Status;

	FHealthCheckState() {
		Status = false;
	}
};