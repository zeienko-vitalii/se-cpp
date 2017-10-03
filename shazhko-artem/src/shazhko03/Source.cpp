#include "CGraphScreen.h"
#include "CScreen.h"
#include "CScreenCarWheel.h"
#include "CCarWheel.h"
#include <iostream>

int main() {
	CCarWheel *iWheel1 = new CCarWheel(6, 10, EUNITS_CENTIMETERS,"X10","Canon");

	CScreen csreen(iWheel1);
	csreen.ShowHeader();
	csreen.ShowContent();
	csreen.ShowHeader();



	CGraphScreen graphScreen(iWheel1);
	graphScreen.ShowContent();
	std::cout << "\n";

	CScreenCarWheel screenCarWheel(iWheel1);
	screenCarWheel.ShowHeader();
	screenCarWheel.ShowContent();
	screenCarWheel.ShowHeader();

	delete iWheel1;
	return 0;
}