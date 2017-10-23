/*
 * BaseScreen.cpp �������� ���������� �������� ������ ��� ������ ��������
 *
 *  Created on: 8 ���. 2017 �.
 *      Author: Viktotia
 */

#include <iostream>
#include<string>
#include "Wheel.h"
#include "AutoWheel.h"
#include "BaseScreen.h"
#include "Screen.h"
#include "GraphScreen.h"

BaseScreen::BaseScreen()  {
	// TODO Auto-generated

}

BaseScreen::~BaseScreen() {
	// TODO Auto-generated destructor stub
}

BaseScreen::BaseScreen(Wheel* wheel): wheel(wheel) {
	cout << "����� ����������� � ����������\n";

}

void BaseScreen::display() {
	ShowHeader();
	ShowContent();
    ShowFooter();
}
