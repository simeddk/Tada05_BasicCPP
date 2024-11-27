#include "CProperty.h"

ACProperty::ACProperty()
{
	NumberA = 10;
	NumberB = 20;
	NumberC = 30;
}

void ACProperty::BeginPlay()
{
	Super::BeginPlay();

	GLog->Log("Hello World");
}