/**
 * @file GraphScreen.cpp
 * @brief Хранит реализацию класса GraphScreen
 * @author Kirnos Serhii
 * @version 0
 * @date 22.10.17
 */

#include "GraphScreen.h"

GraphScreen::GraphScreen() :
		room() {
	cout << "GraphScreen()" << endl;
}

GraphScreen::GraphScreen(const Room& R) :
		room(&R) {
	cout << "GraphScreen(Room R)" << endl;
}

GraphScreen::GraphScreen(const GraphScreen& S) :
		room(S.room) {
	cout << "GraphScreen(const GraphScreen& S)" << endl;
}

GraphScreen::~GraphScreen() {
	cout << "~GraphScreen()" << endl;
}

void GraphScreen::SetDataSource(const Room *R) {
	room = R;
}

void GraphScreen::PrintData(const Room& R) const{
	char lh = 201, rh = 187, h = 205, hd = 209, l = 186, r = 186, c = 179, ld =
			200, rd = 188, dh = 207;
	cout << lh;
	for (int i = 0; i < 10; i++, cout << h)
		;
	cout << hd;
	for (int i = 0; i < 10; i++, cout << h)
		;
	cout << rh << endl;
	cout << l << setw(10) << left << "height" << c << setw(10) << R.getHeight()
			<< r << endl;
	cout << l << setw(10) << left << "width" << c << setw(10) << R.getWidth()
			<< r << endl;
	cout << l << setw(10) << left << "length" << c << setw(10) << R.getLength()
			<< r << endl;
	cout << ld;
	for (int i = 0; i < 10; i++, cout << h)
		;
	cout << dh;
	for (int i = 0; i < 10; i++, cout << h)
		;
	cout << rd << endl;
}

void GraphScreen::PrintData() {
	PrintData(*this->room);
}
