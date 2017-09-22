#include "CWheel.h"

int main() {
	CWheel *iWheel1 = new CWheel(2, 2, EUNIT_CENTIMETERS);
	CWheel *iWheel2 = new CWheel(4, 2, EUNIT_CENTIMETERS);

	delete iWheel1;
	delete iWheel2;
	return 0;
}