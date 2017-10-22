#include "CarWheelScreenCreator.hpp"
#include "DefaultScreenCreator.hpp"
#include "GraphScreenCreator.hpp"
#include "CarWheel.h"
#include <iostream>
#include "Delegate.hpp"
#include "SimpleTimer.h"

int main() {

	Wheel *iWheel1 = new Wheel(6, 10, EUNITS_CENTIMETERS);

	ScreenCreator *creatorDefaultScreen = (ScreenCreator*)new CreateDefaultScreen(iWheel1);
	ScreenCreator *creatorGraphScreen = (ScreenCreator*)new CreateGraphScreen(iWheel1);
	
	CarWheel *iWheel2=new CarWheel(6, 10, EUNITS_CENTIMETERS, "X10", "Canon");
	ScreenCreator *creatorCarWheelScreen = (ScreenCreator*)new CreateCarWheelScreen(iWheel2);

	BaseScreen *screenD = creatorDefaultScreen->CreateSreen();
	BaseScreen *screenG = creatorGraphScreen->CreateSreen();
	BaseScreen *screenC = creatorCarWheelScreen->CreateSreen();

	Timer::SimpleTimer timer(4, 1000);

	timer.OnTimerTact += Delegate::CreateDelegate<BaseScreen>(screenD, &BaseScreen::ShowContent);
	timer.OnTimerTact += Delegate::CreateDelegate<BaseScreen>(screenG, &BaseScreen::ShowContent);
	timer.OnTimerTact += Delegate::CreateDelegate<BaseScreen>(screenC, &BaseScreen::ShowContent);

	timer.Start();
	timer.Wait(INFINITE);
	delete iWheel1;
	return 0;
}