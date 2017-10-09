/**
* @file CBaseScreen.cpp
* @brief Содержит реализацию класса CBaseScreen
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "CBaseScreen.h"
#include <stdlib.h>
#include <iostream>

CBaseScreen::CBaseScreen(){}
CBaseScreen::~CBaseScreen(){
}

void CBaseScreen::ShowHeader()
{
	std::cout << "-----------------------------\n";
}

void CBaseScreen::ShowContent()
{
	std::cout << "\tContent\n";
	/*std::cout << "\tDiameter: " << wheel->GetDiameter() << "\n" <<
		"\tWidth: " << wheel->GetWidth() << "\n" <<
		"\tUnits: " << wheel->ConvertEUnitToString(wheel->GetUnits()) << "\n" <<
		"Volume: " << wheel->Volume() << "\n";*/
}

void CBaseScreen::ShowFooter()
{
	std::cout << "-----------------------------\n";
}
