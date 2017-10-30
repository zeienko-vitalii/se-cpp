/**
 * @file HousingRoomScreen.cpp
 * HousingRoomScreen functions realization.
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.10.02
 */
#include <iostream>
#include"Screen.h"
#include "HousingRoomScreen.h"
#include "HousingRoom.h"

HousingRoomScreen::HousingRoomScreen() {
	// TODO Auto-generated constructor stub

}

HousingRoomScreen::HousingRoomScreen(HousingRoom* housingRoom) :
		Screen(housingRoom) {

}

void HousingRoomScreen::showHousingRoom() {
	cout << (*this->room).toString() << endl;
}

void HousingRoomScreen::showHeader() {
	cout << "HousingRoomScreen::showHeader() \n";
}

void HousingRoomScreen::showContent() {
	showHousingRoom();
	dataOutput();
}

void HousingRoomScreen::showFooter() {
	cout << "\n HousingRoomScreen::showFooter()) \n";
}

HousingRoomScreen::~HousingRoomScreen() {
	// TODO Auto-generated destructor stub
}
