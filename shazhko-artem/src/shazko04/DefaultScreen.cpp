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

DefaultScreen::DefaultScreen(Wheel *_wheel):wheel(new Wheel(*_wheel)) { }
DefaultScreen::~DefaultScreen() {
	if (wheel)delete wheel;
}
void DefaultScreen::ShowContent()
{
	std::cout << "\tDiameter: " << wheel->GetDiameter() << "\n" <<
		"\tWidth: " << wheel->GetWidth() << "\n" <<
		"\tUnits: " << ConvertEUnitToString(wheel->GetUnits()) << "\n" <<
		"Volume: " << wheel->Volume() << "\n";
}
