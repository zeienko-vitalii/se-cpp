#include "CWheel.h"
#include "CScreen.h"
#include "CGraphScreen.h"
#include <iostream>

int main() {
	CWheel *iWheel1 = new CWheel(6, 5, EUNITS_CENTIMETERS);
	CWheel *iWheel2 = new CWheel(8, 3, EUNITS_CENTIMETERS);

	std::cout << "============= CScreen =============\n";
	CScreen *screen1 = new CScreen(*iWheel1);
	screen1->PrintData();
	CScreen *screen2 = new CScreen(*iWheel2);
	screen2->PrintData();
	
	std::cout << "\n\n============= CGraphScreen =============\n";

	CGraphScreen graphScreen;
	graphScreen.PrintData(iWheel1);
	std::cout << "\n";
	graphScreen.SetDataSource(iWheel2);
	graphScreen.PrintData();

	delete screen1;

	delete screen2;
	delete iWheel1;
	delete iWheel2;
	return 0;
}