/**
 * @file  Screen.cpp
 * Realization of the Screen class.
 * @author Vitalii Zeienko
 * @version 0.0.3
 * @date 2017.09.09
 */

#include "Screen.h"
#include <iostream>

Screen::Screen(const Manipulator& manipulator) : manipulator(new Manipulator(manipulator)) {}

void Screen::Show() {
	std::cout << " Manipulator`s type: " << manipulator->getType()
			<< std::endl;
	std::cout << " Manipulator`s amount of buttons: "
			<< manipulator->getAmountOfButtons() << std::endl;
}

Screen::~Screen() {
	if(manipulator != nullptr)
		delete manipulator;
}
