#include "CLogTest.h"
#include "Utilities/CLog.h"

ACLogTest::ACLogTest()
{

}

void ACLogTest::BeginPlay()
{
	Super::BeginPlay();
	
	CLog::Print(777);
	CLog::Print(888, 1);
	CLog::Print(999, 2, 20.f);
	CLog::Print(666, 2, 20.f, FColor::Green);
	CLog::Print("Hell World");
	CLog::Print(GetActorLocation());
	CLog::Print(GetActorRotation());
	//Todo. 빌드 아직 안함
}
