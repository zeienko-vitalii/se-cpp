/**
 * @file  CScreen.cpp
 * Realization of the CScreen class.
 * @author Vitalii Zeienko
 * @version 0.0.1
 * @date 2017.09.09
 */

#include "Screen.h"
#include <iostream>
#include <cstring>

int Screen::counter = 0;

Screen::Screen(const Manipulator& manipulator) {
	// TODO Auto-generated constructor stub
	this->manipulator = new Manipulator(manipulator);
}

void Screen::Show() {

	counter++;

	std::cout << "#" << counter << " Manipulator`s type: " << manipulator->type
			<< std::endl;
	std::cout << "#" << counter << " Manipulator`s amount of buttons: "
			<< manipulator->getAmountOfButtons() << std::endl;

}

Screen::~Screen() {
	// TODO Auto-generated destructor stub
	std::cout << "~Screen()\n";
	if(manipulator)
		delete manipulator;
}
