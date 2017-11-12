/**
* @file CScreen.cpp
* @brief Содержит реализацию класса CScreen
* @author Shazhko Artem
* @version 0
* @date 03.10.17
*/
#include "CScreen.h"
#include <stdlib.h>
#include <iostream>

CScreen::CScreen(CWheel *_wheel):wheel(new CWheel(*_wheel)) { }
CScreen::~CScreen() {
	if (wheel)delete wheel;
}
void CScreen::ShowHeader()
{
	std::cout << "---------------WHEEL-------------\n";
}
void CScreen::ShowContent()
{
	std::cout << "\tDiameter: " << wheel->GetDiameter() << "\n" <<
		"\tWidth: " << wheel->GetWidth() << "\n" <<
		"\tUnits: " << wheel->ConvertEUnitToString(wheel->GetUnits()) << "\n" <<
		"Volume: " << wheel->Volume() << "\n";
}
void CScreen::ShowFooter()
{
	std::cout << "---------------------------------\n";
}
