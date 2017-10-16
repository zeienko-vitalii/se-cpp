/**
* @file CBaseScreen.cpp
* @brief Содержит реализацию класса CarWheelScreen
* @author Shazhko Artem
* @version 0
* @date 03.10.17
*/
#include "CarWheelScreen.h"
#include <iostream>

CarWheelScreen::CarWheelScreen(CarWheel *_wheel) :wheel(new CarWheel(*_wheel)) {}

CarWheelScreen::~CarWheelScreen()
{
	if (this->wheel)delete this->wheel;
}

void CarWheelScreen::ShowContent()
{
	std::cout << "\tDiameter: " << wheel->GetDiameter() << "\n" <<
		"\tWidth: " << wheel->GetWidth() << "\n" <<
		"\tUnits: " << ConvertEUnitToString(wheel->GetUnits()) << "\n" <<
		"\tVolume: " << wheel->Volume() << "\n" <<
		"\tTire Manufacturer: " << wheel->GetTireManufacturer() << "\n" <<
		"\tTire Name: " << wheel->GetTireName() << "\n";
}

