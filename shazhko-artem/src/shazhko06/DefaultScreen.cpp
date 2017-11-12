/**
* @file DefaultScreen.cpp
* @brief Содержит реализацию класса DefaultScreen
* @author Shazhko Artem
* @version 0
* @date 03.10.17
*/
#include "DefaultScreen.h"
#include <stdlib.h>
#include <iostream>
namespace Screen {
	DefaultScreen::DefaultScreen(Wheel::Wheel *_wheel) :wheel(new Wheel::Wheel(*_wheel)) { }
	DefaultScreen::~DefaultScreen() {
		if (wheel)delete wheel;
	}
	void DefaultScreen::ShowHeader()
	{
		std::cout << "---------------WHEEL-------------\n";
	}

	void DefaultScreen::ShowContent()
	{
		std::cout << "\tDiameter: " << wheel->GetDiameter() << "\n" <<
			"\tWidth: " << wheel->GetWidth() << "\n" <<
			"\tUnits: " << ConvertEUnitToString(wheel->GetUnits()) << "\n" <<
			"Volume: " << wheel->Volume() << "\n";
	}
	void DefaultScreen::ShowFooter()
	{
		std::cout << "---------------------------------\n";
	}

}