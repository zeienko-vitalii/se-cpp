#include "CGraphScreen.h"
#include "CScreen.h"
#include "CScreenCarWheel.h"
#include "CCarWheel.h"
#include <iostream>

int main() {
	CCarWheel *iWheel1 = new CCarWheel(6, 10, EUNITS_CENTIMETERS,"X10","Canon");

	CScreen csreen(iWheel1);

	Timer::SimpleTimer timer(&csreen,4, 1000);
	timer.Start();
	timer.Wait(INFINITE);

	CGraphScreen graphScreen(iWheel1);

	timer.SetAttribute(&graphScreen);
	timer.Start();
	timer.Wait(INFINITE);

	delete iWheel1;
	return 0;
}