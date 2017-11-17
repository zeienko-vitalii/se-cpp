/**
 * @file Screen.cpp
 * @brief Хранит реализацию класса Screen
 * @author Kirnos Serhii
 * @version 0
 * @date 22.10.17
 */

#include "Screen.h"

Screen::Screen() :
		BaseView() {
	//cout << "Screen()" << endl;
}

Screen::Screen(const Room& R) :
		BaseView(R) {
	//cout << "Screen(Room)" << endl;
}

Screen::Screen(const Screen& s) :
		BaseView(*s.room) {
	//cout << "Screen(const Screen&)" << endl;
}

void Screen::ShowHeader() {
	//cout << "ShowContent()" << endl;
}

void Screen::ShowContent() {
	cout << "height = " << room->getHeight() << endl;
	cout << "length = " << room->getLength() << endl;
	cout << "width = " << room->getWidth() << endl;

	const RoomHousing *temp = dynamic_cast<const RoomHousing*>(room);
	if (temp != NULL) {
		cout << "name = " << temp->getNmae() << endl;
		cout << "number of seats = " << temp->getNumberOfSeats() << endl;
		cout << "appointment = ";
		switch (temp->getAppointment()) {
		case PRACTICAL:
			cout << "PRACTICAL";
			break;
		case LABORATORY:
			cout << "LABORATORY";
			break;
		case LECTURES:
			cout << "LECTURES";
			break;
		case TEACHING:
			cout << "TEACHING";
			break;
		case BUSINESS:
			cout << "BUSINESS";
		}
		cout << endl;
	}
}

void Screen::ShowFooter() {
}

Screen::~Screen() {
	//cout << "~Screen()" << endl;
}
