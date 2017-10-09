#include "CGraphScreen.h"
#include "CScreen.h"
#include "CScreenCarWheel.h"
#include "CCarWheel.h"
#include <iostream>
#include "Delegate.hpp"

int main() {

	CCarWheel *iWheel1 = new CCarWheel(6, 10, EUNITS_CENTIMETERS, "X10", "Canon");

	CScreen csreen(iWheel1);
	Timer::SimpleTimer timer(4, 1000);

	timer.OnTimerTact += Delegate::CreateDelegate<CScreen>(&csreen, &CScreen::ShowContent);
	timer.Start();
	timer.Wait(INFINITE);
	timer.OnTimerTact -= Delegate::CreateDelegate<CScreen>(&csreen, &CScreen::ShowContent);
	CGraphScreen graphScreen(iWheel1);
	timer.OnTimerTact += Delegate::CreateDelegate<CGraphScreen>(&graphScreen, &CGraphScreen::ShowContent);

	timer.Start();
	timer.Wait(INFINITE);
	delete iWheel1;
	return 0;
}