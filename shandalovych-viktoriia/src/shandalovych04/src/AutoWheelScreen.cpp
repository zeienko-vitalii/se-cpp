/*
 * AutoWheelScreen.cpp Содержит реализацию класса для вывода объкта колесо автомобиля
 *
 *  Created on: 8 окт. 2017 г.
 *      Author: Viktotia
 */

#include "AutoWheelScreen.h"

AutoWheelScreen::AutoWheelScreen() {
	// TODO Auto-generated constructor stub

}

AutoWheelScreen::AutoWheelScreen(AutoWheel* autoWheel):Screen(autoWheel) {
}
AutoWheelScreen::~AutoWheelScreen() {
	// TODO Auto-generated destructor stub
}

void AutoWheelScreen::ShowHeader() {
}

void AutoWheelScreen::ShowContent() {
cout << (*wheel).ToString();
}


void AutoWheelScreen::ShowFooter() {
}
