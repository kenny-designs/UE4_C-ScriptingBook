#pragma once

#include "ObjectMacros.h"
#include "EnumName.generated.h"

UENUM()
enum Status
{
	Stopped		UMETA(DisplayName = "Stopped"),
	Moving		UMETA(DisplayName = "Moving"),
	Attacking	UMETA(DisplayName = "Attacking")
};
