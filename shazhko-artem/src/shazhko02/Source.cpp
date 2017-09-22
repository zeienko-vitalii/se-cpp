#include "CWheel.h"
#include "CScreen.h"
#include <iostream>

int main() {
	CWheel *iWheel1 = new CWheel(2, 2, EUNIT_CENTIMETERS);
	CWheel *iWheel2 = new CWheel(4, 2, EUNIT_CENTIMETERS);

	std::cout << "============= CScreen =============\n";
	CScreen *screen1 = new CScreen(*iWheel1);
	screen1->PrintData();
	CScreen *screen2 = new CScreen(*iWheel2);
	screen2->PrintData();
	delete screen1;

	delete screen2;
	delete iWheel1;
	delete iWheel2;
	return 0;
}