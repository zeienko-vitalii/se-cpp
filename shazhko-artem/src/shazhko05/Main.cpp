#include "FileStorage.h"
#define __CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

#include "StorageInterface.h"

#include "CarWheelScreenCreator.hpp"
#include "DefaultScreenCreator.hpp"
#include "GraphScreenCreator.hpp"
#include "CarWheel.h"
#include <iostream>
#include "Delegate.hpp"
#include "SimpleTimer.h"


int main() {

	Wheel *iWheel1 = new Wheel(6, 10, EUNITS_CENTIMETERS);
	ScreenCreator *creatorDefaultScreen = new CreateDefaultScreen(iWheel1);
	ScreenCreator *creatorGraphScreen = new CreateGraphScreen(iWheel1);

	CarWheel *iWheel2 = new CarWheel(0, 0, EUnits::EUNITS_CENTIMETERS, "", "");
	CFileStorage *file = CFileStorage::Create(*iWheel2, "Test.txt");

	file->Load();

	ScreenCreator *creatorCarWheelScreen = new CreateCarWheelScreen(iWheel2);

	BaseScreen *screenD = creatorDefaultScreen->CreateSreen();
	BaseScreen *screenG = creatorGraphScreen->CreateSreen();
	BaseScreen *screenC = creatorCarWheelScreen->CreateSreen();
	{
		Timer::SimpleTimer timer(4, 1000);

		timer.OnTimerTact += Delegate::CreateDelegate<BaseScreen>(screenD, &BaseScreen::ShowContent);
		timer.OnTimerTact += Delegate::CreateDelegate<BaseScreen>(screenG, &BaseScreen::ShowContent);
		timer.OnTimerTact += Delegate::CreateDelegate<BaseScreen>(screenC, &BaseScreen::ShowContent);

		timer.Start();
		timer.Wait(INFINITE);
	}
	delete file;
	delete iWheel1;
	delete iWheel2;

	delete screenD;
	delete screenG;
	delete screenC;
	delete creatorDefaultScreen;
	delete creatorGraphScreen;
	delete creatorCarWheelScreen;

	_CrtDumpMemoryLeaks();
	return 0;
}