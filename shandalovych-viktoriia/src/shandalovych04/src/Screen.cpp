/*
 * @file Screen.cpp �������� ���������� ������ ��� ������ ������� ������ .
 * @date 10 ����. 2017 �.
 * @Author: Viktotia
 */

#include <iostream>
#include<string.h>
#include "Wheel.h"
#include "AutoWheel.h"
#include "BaseScreen.h"
#include "Screen.h"
#include "GraphScreen.h"
using namespace std;

Screen::Screen() {
	// TODO Auto-generated constructor stub

}

Screen::Screen(Wheel* wheel) :
		BaseScreen(wheel) {
	cout << "����� ����������� � ����������\n";
//this->wheel = wheel;
}

Screen::~Screen() {
	// TODO Auto-generated destructor stub
}

void Screen::ViewWheel() {

	cout << "diameter = " << (*wheel).getdiameter() << "\n";
	cout << "unit = " << (*wheel).getunit() << "\n";
	cout << "width = " << (*wheel).getwidth() << "\n";
}

void Screen::ShowHeader() {
}

void Screen::ShowContent() {
	cout << (*wheel).ToString();
}

void Screen::ShowFooter() {
}
