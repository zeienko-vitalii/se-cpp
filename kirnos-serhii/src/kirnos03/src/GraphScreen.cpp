/**
 * @file GraphScreen.cpp
 * @brief Хранит реализацию класса GraphScreen
 * @author Kirnos Serhii
 * @version 0
 * @date 22.10.17
 */

#include "GraphScreen.h"

GraphScreen::GraphScreen() :
		BaseView() {
	//cout << "GraphScreen()" << endl;
}

GraphScreen::GraphScreen(const Room& R) :
		BaseView(R) {
	//cout << "GraphScreen(Room R)" << endl;
}

GraphScreen::GraphScreen(const GraphScreen& S) :
		BaseView(*S.room) {
	//cout << "GraphScreen(const GraphScreen& S)" << endl;
}

GraphScreen::~GraphScreen() {
	//cout << "~GraphScreen()" << endl;
}

void GraphScreen::SetDataSource(const Room *R) {
	room = R;
}

void GraphScreen::PrintData(const Room& R) {
	this->ShowHeader();
	char l = 186, r = 186, c = 179;
	cout << l << setw(12) << left << "height" << c << setw(12) << R.getHeight()
			<< r << endl;
	cout << l << setw(12) << left << "width" << c << setw(12) << R.getWidth()
			<< r << endl;
	cout << l << setw(12) << left << "length" << c << setw(12) << R.getLength()
			<< r << endl;

	const RoomHousing *temp = dynamic_cast<const RoomHousing*>(&R);
	if (temp != NULL) {
		cout << l << setw(12) << left << "name" << c << setw(12)
				<< temp->getNmae() << r << endl;
		cout << l << setw(12) << left << "number of seats" << c << setw(12)
				<< temp->getNumberOfSeats() << r << endl;
		cout << l << setw(12) << left << "appointment" << c;
		switch (temp->getAppointment()) {
		case PRACTICAL:
			cout << setw(12) << "PRACTICAL";
			break;
		case LABORATORY:
			cout << setw(12) << "LABORATORY";
			break;
		case LECTURES:
			cout << setw(12) << "LECTURES";
			break;
		case TEACHING:
			cout << setw(12) << "TEACHING";
			break;
		case BUSINESS:
			cout << setw(12) << "BUSINESS";
		}
		cout << r << endl;
	}

	this->ShowFooter();
}

void GraphScreen::PrintData() {
	PrintData(*this->room);
}

void GraphScreen::ShowHeader() {
	char lh = 201, rh = 187, h = 205, hd = 209;
	cout << lh;
	for (int i = 0; i < 12; i++, cout << h)
		;
	cout << hd;
	for (int i = 0; i < 12; i++, cout << h)
		;
	cout << rh << endl;
}

void GraphScreen::ShowContent() {
	char l = 186, r = 186, c = 179;
	cout << l << setw(12) << left << "height" << c << setw(12)
			<< room->getHeight() << r << endl;
	cout << l << setw(12) << left << "width" << c << setw(12)
			<< room->getWidth() << r << endl;
	cout << l << setw(12) << left << "length" << c << setw(12)
			<< room->getLength() << r << endl;

	const RoomHousing *temp = dynamic_cast<const RoomHousing*>(room);
	if (temp != NULL) {
		cout << l << setw(12) << left << "name" << c << setw(12)
				<< temp->getNmae() << r << endl;
		cout << l << setw(12) << left << "numb seats" << c << setw(12)
				<< temp->getNumberOfSeats() << r << endl;
		cout << l << setw(12) << left << "appointment" << c;
		switch (temp->getAppointment()) {
		case PRACTICAL:
			cout << setw(12) << "PRACTICAL";
			break;
		case LABORATORY:
			cout << setw(12) << "LABORATORY";
			break;
		case LECTURES:
			cout << setw(12) << "LECTURES";
			break;
		case TEACHING:
			cout << setw(12) << "TEACHING";
			break;
		case BUSINESS:
			cout << setw(12) << "BUSINESS";
		}
		cout << r << endl;
	}
}

void GraphScreen::ShowFooter() {
	char ld = 200, rd = 188, dh = 207, h = 205;
	cout << ld;
	for (int i = 0; i < 12; i++, cout << h)
		;
	cout << dh;
	for (int i = 0; i < 12; i++, cout << h)
		;
	cout << rd << endl;
}
