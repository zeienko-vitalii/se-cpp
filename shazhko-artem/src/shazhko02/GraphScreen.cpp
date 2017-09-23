/**
* @file CGraphScreen.cpp
* @brief —одержит реализацию класса CGraphScreen
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "CGraphScreen.h"
#include <stdlib.h>
#include <iostream>

CGraphScreen::CGraphScreen():wheel(NULL) {}
CGraphScreen::~CGraphScreen(){
	if (wheel)delete wheel;
}
void CGraphScreen::SetDataSource(const CWheel &_wheel){
	if (wheel)delete wheel;
	wheel = new CWheel(_wheel);
}
CWheel CGraphScreen::GetDataSource()const{
return new CWheel(wheel);
}
void CGraphScreen::PrintData(const CWheel &_wheel){
	double amount = _wheel.Volume();
	std::cout << "\tDiameter: " << _wheel.diameter << "\n" <<
		"\tWidth: " << _wheel.width << "\n" <<
		"\tWidth: " << _wheel.ConvertEUnitToString(_wheel.GetUnit()) << "\n" <<
		"Volume: " << amount<<"\n";

	for(int iAmount=(int)amount; iAmount>0; iAmount--)
	{
		std::cout << "_";
	}
	int remainder = (amount - (int)amount) * 10;
	for (int i = remainder; i>0; i--)
	{
		std::cout << ".";
	}
	std::cout << "\n";
}
void CGraphScreen::PrintData(){
	PrintData(wheel);
}