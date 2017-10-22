#define __CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

#include "CarWheelScreenCreator.hpp"
#include "DefaultScreenCreator.hpp"
#include "GraphScreenCreator.hpp"
#include "CarWheel.h"
#include <iostream>
#include "Delegate.hpp"
#include "SimpleTimer.h"

int main() {

	Wheel *iWheel1 = new Wheel(6, 10, EUNITS_CENTIMETERS);

	ScreenCreator *creatorDefaultScreen = (ScreenCreator*)new DefaultScreenCreator(iWheel1);
	ScreenCreator *creatorGraphScreen = (ScreenCreator*)new GraphScreenCreator(iWheel1);
	
	CarWheel *iWheel2=new CarWheel(6, 10, EUNITS_CENTIMETERS, "X10", "Canon");
	ScreenCreator *creatorCarWheelScreen = (ScreenCreator*)new CarWheelScreenCreator(iWheel2);

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
#pragma region Очистка памяти
	delete creatorDefaultScreen;
	delete creatorGraphScreen;
	delete creatorCarWheelScreen;
	delete screenD;
	delete screenG;
	delete screenC;
	delete iWheel1;
	delete iWheel2;
#pragma endregion
	_CrtDumpMemoryLeaks();

	return 0;
}