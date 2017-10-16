/**
* @file CBaseScreen.cpp
* @brief Содержит реализацию класса GraphScreen
* @author Shazhko Artem
* @version 0
* @date 03.10.17
*/

#include "GraphScreen.h"
#include <stdlib.h>
#include <iostream>

GraphScreen::GraphScreen(Wheel * _wheel):wheel(new Wheel(_wheel)){}
GraphScreen::~GraphScreen(){
	if (wheel)delete wheel;
}
void GraphScreen::SetDataSource(const Wheel &_wheel){
	if (wheel)delete wheel;
	wheel = new Wheel(_wheel);
}

Wheel GraphScreen::GetDataSource()const{return new Wheel(wheel);}

void GraphScreen::ShowHeader()
{
	SHORT originDiameter = (SHORT)this->wheel->GetDiameter();
	SHORT originWidth = (SHORT)this->wheel->GetWidth();
	SHORT half = ((originDiameter << 1) + originWidth + 3)/2;

	for (SHORT i = (originDiameter << 1) + originWidth + 3; i != 0; i--) {
		if (i == half) {
			std::cout << "Graphics";
		}
		else
			std::cout << "-";
	}
	std::cout << "\n";
}

void GraphScreen::ShowContent()
{
	double originDiameter = this->wheel->GetDiameter();
	double originWidth = this->wheel->GetWidth();
	SHORT diameter = (SHORT)originDiameter;
	SHORT radius = ((SHORT)diameter) >> 1;
	CONSOLE_SCREEN_BUFFER_INFO cursorinfo;
	ShowHeader();
	if (!GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorinfo)) { std::cout << "\nERROR\n"; return; }
	cursorinfo.dwCursorPosition.X = radius;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { cursorinfo.dwCursorPosition.X,cursorinfo.dwCursorPosition.Y });

	for (SHORT i = 0; i <= radius; i++)std::cout << "*";
	this->PrintWidth(originWidth, { diameter << 1, cursorinfo.dwCursorPosition.Y });
	for (SHORT i = 1; i < diameter; i++) {
		cursorinfo.dwCursorPosition.Y++;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { (SHORT)abs(radius - i),cursorinfo.dwCursorPosition.Y });
		std::cout << "*";
		if (i <= radius) SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { (diameter + i),cursorinfo.dwCursorPosition.Y });
		else
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { (diameter + (radius - (i - radius))),cursorinfo.dwCursorPosition.Y });
		std::cout << "*";
		this->PrintWidth(originWidth, { diameter << 1, cursorinfo.dwCursorPosition.Y });
	}
	cursorinfo.dwCursorPosition.Y++;
	cursorinfo.dwCursorPosition.X = radius;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { cursorinfo.dwCursorPosition.X,cursorinfo.dwCursorPosition.Y });
	for (SHORT i = 0; i <= radius; i++)std::cout << "*";
	this->PrintWidth(originWidth, { diameter << 1, cursorinfo.dwCursorPosition.Y });
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { (SHORT)0,cursorinfo.dwCursorPosition.Y + 1 });

	ShowFooter();
}

void GraphScreen::ShowFooter()
{
	SHORT originDiameter = (SHORT)this->wheel->GetDiameter();
	SHORT originWidth = (SHORT)this->wheel->GetWidth();
	for (SHORT i = (originDiameter << 1) + originWidth + 10; i != 0; i--)std::cout << "-";
	std::cout << "\n";
}

inline void GraphScreen::PrintWidth(double width, COORD pos) {
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { pos.X,pos.Y });
	std::cout << "|    ";
	for (SHORT i = 0; i < width; i++)std::cout << "*";
}