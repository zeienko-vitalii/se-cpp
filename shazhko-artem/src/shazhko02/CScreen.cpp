/**
* @file CScreen.cpp
* @brief Содержит реализацию класса CScreen
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "CScreen.h"
#include <stdlib.h>
#include <iostream>

CScreen::CScreen():wheel(NULL){}
CScreen::CScreen(CWheel _wheel) { wheel = new CWheel(_wheel); }
CScreen::~CScreen(){
	if (wheel)delete wheel;
}
void  CScreen::PrintData(){
	std::cout << "\tDiameter: " << wheel->diameter << "\n" <<
		"\tWidth: " << wheel->width << "\n" <<
		"\tWidth: " << wheel->ConvertEUnitToString(wheel->GetUnit()) << "\n" <<
		"Volume: " << wheel->Volume() << "\n";
}