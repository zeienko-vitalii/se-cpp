/**
* @file CBaseScreen.cpp
* @brief Содержит реализацию класса CScreenCarWheel
* @author Shazhko Artem
* @version 0
* @date 03.10.17
*/
#include "CScreenCarWheel.h"
#include <iostream>

CScreenCarWheel::CScreenCarWheel(CCarWheel *_wheel):wheel(new CCarWheel(*_wheel)){}

CScreenCarWheel::~CScreenCarWheel()
{
	if (this->wheel)delete this->wheel;
}

void CScreenCarWheel::ShowHeader()
{
	CBaseScreen::ShowHeader();
}

void CScreenCarWheel::ShowContent()
{
	std::cout << "\tDiameter: " << wheel->GetDiameter() << "\n" <<
		"\tWidth: " << wheel->GetWidth() << "\n" <<
		"\tUnits: " << wheel->ConvertEUnitToString(wheel->GetUnits()) << "\n" <<
		"\tVolume: " << wheel->Volume() << "\n" <<
		"\tTire Manufacturer: " << wheel->GetTireManufacturer() << "\n" <<
		"\tTire Name: " << wheel->GetTireName()<<"\n";
}

void CScreenCarWheel::ShowFooter()
{
	CBaseScreen::ShowFooter();
}
