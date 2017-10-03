/**
 * @file  Screen.cpp
 * Realization of the Screen class.
 * @author Vitalii Zeienko
 * @version 0.0.3
 * @date 2017.09.09
 */

#include "Screen.h"
#include <iostream>

Screen::Screen(const Manipulator& manipulator) : manipulator(new Manipulator(manipulator)) {
	std::cout << "Screen() constructor is called!" << std::endl;
}

void Screen::Show() {

	std::cout << " Manipulator`s type: " << manipulator->getType()
			<< std::endl;
	std::cout << " Manipulator`s amount of buttons: "
			<< manipulator->amountOfButtons << std::endl;

}

Screen::~Screen() {
	std::cout << "~Screen()\n";
	if(manipulator != nullptr)
		delete manipulator;
}
