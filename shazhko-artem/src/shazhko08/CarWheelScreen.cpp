/**
* @file CarWheelScreen.cpp
* @brief Содержит реализацию класса CarWheelScreen
* @author Shazhko Artem
* @version 0
* @date 03.10.17
*/
#include "CarWheelScreen.h"
#include <iostream>
namespace Screen {
	CarWheelScreen::CarWheelScreen(Wheel::CarWheel *_wheel) :wheel(new Wheel::CarWheel(*_wheel)) {}

	CarWheelScreen::~CarWheelScreen()
	{
		if (this->wheel)delete this->wheel;
	}
	void CarWheelScreen::ShowHeader()
	{
		std::cout << "----------CarWheel-----------\n";
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

	void CarWheelScreen::ShowFooter()
	{
		std::cout << "-----------------------------\n";
	}
}

