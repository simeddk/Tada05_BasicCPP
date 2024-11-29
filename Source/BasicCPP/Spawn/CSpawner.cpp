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
		//Todo. 다닥다닥 붙어서 나올 것이다. 값을 채우기
	}
	
}