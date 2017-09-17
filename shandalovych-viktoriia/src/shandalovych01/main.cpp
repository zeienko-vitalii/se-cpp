#include <iostream>
#include "Wheel.h"
#include "Screen.h"



using namespace std;


int main(void) {

	
	const int diameter = 20;
	const int width = 10;
	const string unit = "см";
	

	Wheel data( diameter, width, unit);

	Screen screen(data);

	screen.ViewWheel();

	return 0;
}
