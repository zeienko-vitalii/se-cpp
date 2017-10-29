/**
 * @file GraphScreen.cpp
 * Implemantation of class GraphScreen
 * @author Ященко Олександр
 * @version 1.0.0
 * @date 2017.10.01
 */

#include "GraphScreen.h"
#include <iostream>

using namespace std;

GraphScreen::GraphScreen(Window* window) :
		iWindow(window) {
}

GraphScreen::~GraphScreen() {

}

void GraphScreen::setDataSource(const Window* window) {
	iWindow = window;
}

void GraphScreen::printData(const Window& window) {
	cout << window.iX1 << "; " << window.iY1 << endl;
	cout << "_____________" << endl;
	cout << "| Width = " << window.width() << "|" << endl;
	for (int i = 0; i < 3; i++) {
		if (i == 2)
			cout << "|           | Height = " << window.height() << endl;
		else
			cout << "|           |" << endl;
	}
	cout << "-------------" << endl;
	cout << "             " << window.iX2 << "; " << window.iY2 << endl;
}

void GraphScreen::showInfo() {
	cout << "ID=" << iWindow->getId() << endl;
	cout << "X1=" << iWindow->iX1 << endl;
	cout << "Y1=" << iWindow->iY1 << endl;
	cout << "X2=" << iWindow->iX2 << endl;
	cout << "Y2=" << iWindow->iY2 << endl;
	cout << "Width=" << iWindow->width() << endl;
	cout << "Height=" << iWindow->height() << endl;
}
