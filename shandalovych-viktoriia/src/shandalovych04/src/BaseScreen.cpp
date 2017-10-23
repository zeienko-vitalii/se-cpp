/*
 * BaseScreen.cpp Содержит реализацию базового класса для вывода объектов
 *
 *  Created on: 8 окт. 2017 г.
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
	cout << "Вызов коструктора с параметром\n";

}

void BaseScreen::display() {
	ShowHeader();
	ShowContent();
    ShowFooter();
}
