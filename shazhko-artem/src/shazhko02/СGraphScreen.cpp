/**
* @file СGraphScreen.cpp
* @brief Содержит реализацию класса CGraphScreen
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

CWheel CGraphScreen::GetDataSource()const{return new CWheel(wheel);}

inline void CGraphScreen::PrintWidth(double width, COORD pos) {
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { pos.X,pos.Y });
	std::cout << "|    ";
	for (SHORT i = 0; i < width; i++)std::cout << "*";
}

inline void CGraphScreen::PrintLine(double width, SHORT diameter) {
	for (SHORT i = (diameter << 1) + (SHORT)width + 10; i != 0; i--)std::cout << "-";
	std::cout << "\n";
}

void CGraphScreen::PrintData(const CWheel& data) {
	SHORT diameter = (SHORT)data.diameter;
	SHORT radius = ((SHORT)diameter) >> 1;
	CONSOLE_SCREEN_BUFFER_INFO cursorinfo;
	PrintLine(data.width, (SHORT)data.diameter);
	if (!GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorinfo)) { std::cout << "\nERROR\n"; return; }
	cursorinfo.dwCursorPosition.X = radius;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { cursorinfo.dwCursorPosition.X,cursorinfo.dwCursorPosition.Y });

	for (SHORT i = 0; i <= radius; i++)std::cout << "*";
	this->PrintWidth(data.width, { diameter << 1, cursorinfo.dwCursorPosition.Y });
	for (SHORT i = 1; i < diameter; i++) {
		cursorinfo.dwCursorPosition.Y++;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { (SHORT)abs(radius - i),cursorinfo.dwCursorPosition.Y });
		std::cout << "*";
		if (i <= radius) SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { (diameter + i),cursorinfo.dwCursorPosition.Y });
		else
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { (diameter + (radius - (i - radius))),cursorinfo.dwCursorPosition.Y });
		std::cout << "*";
		this->PrintWidth(data.width, { diameter << 1, cursorinfo.dwCursorPosition.Y });
	}
	cursorinfo.dwCursorPosition.Y++;
	cursorinfo.dwCursorPosition.X = radius;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { cursorinfo.dwCursorPosition.X,cursorinfo.dwCursorPosition.Y });
	for (SHORT i = 0; i <= radius; i++)std::cout << "*";
	this->PrintWidth(data.width, { diameter << 1, cursorinfo.dwCursorPosition.Y });
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { (SHORT)0,cursorinfo.dwCursorPosition.Y + 1 });

	PrintLine(data.width, (SHORT)data.diameter);
}
	
void CGraphScreen::PrintData()
{
	PrintData(this->wheel);
}