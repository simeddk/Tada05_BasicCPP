#include "CSpawner.h"
#include "CStaticMeshBase.h"

ACSpawner::ACSpawner()
{

}

void ACSpawner::BeginPlay()
{
	Super::BeginPlay();

	FTransform TM;
	for (int32 i = 0; i < 4; i++)
	{
		GetWorld()->SpawnActor<ACStaticMeshBase>(ClassesToSpawn[i], TM);
		//Todo. �ٴڴٴ� �پ ���� ���̴�. ���� ä���
	}
	
}