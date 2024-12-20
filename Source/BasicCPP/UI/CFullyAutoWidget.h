#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CFullyAutoWidget.generated.h"

UCLASS()
class BASICCPP_API UCFullyAutoWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	void EnableImage();

	UFUNCTION(BlueprintImplementableEvent)
	void DiableImage();
};
