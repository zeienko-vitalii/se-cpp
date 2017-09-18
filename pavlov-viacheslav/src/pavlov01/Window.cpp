/**
 * @file Window.cpp
 * Window functions realization.
 * @author pavlov-vs
 * @version 0.0.1
 * @date 2017.09.09
 */

#include <iostream>
#include "Window.h"

using namespace std;

Window::Window() :
		windowId(0), x1(0), y1(0), x2(0), y2(0) {
	cout << "Window default constructor\n";

}

Window::~Window() {
	// TODO Auto-generated destructor stub

	cout << "Window destructor\n";
}

Window::Window(int _windowId, int _x1, int _y1, int _x2, int _y2) :
		windowId(_windowId), x1(_x1), y1(_y1), x2(_x2), y2(_y2) {
	cout << "Window constructor with parameters\n";
}

void Window::setWindowId(int windowId) {
	this->windowId = windowId;
}
int Window::getWindowId() {
	return this->windowId;
}

void Window::setX1(int x1) {
	this->x1 = x1;
}
int Window::getX1() {
	return this->x1;
}

void Window::setY1(int y1) {
	this->y1 = y1;
}
int Window::getY1() {
	return this->y1;
}
void Window::setX2(int x2) {
	this->x2 = x2;
}
int Window::getX2() {
	return this->x2;
}
void Window::setY2(int y2) {
	this->y2 = y2;
}
int Window::getY2() {
	return this->y2;
}
ostream& operator <<(ostream& oSt, Window Window) {

	oSt << "windowId: " << Window.getWindowId() << "\n";
	oSt << "x1: " << Window.getX1() << " ";
	oSt << "y1: " << Window.getY1() << "\n";
	oSt << "x2: " << Window.getX2() << " ";
	oSt << "y2: " << Window.getY2() << "\n";

	return oSt;
}

void operator >>(istream& iSt, Window &Window) {

	int intTmp;

	iSt >> intTmp;
	Window.setWindowId(intTmp);

	iSt >> intTmp;
	Window.setX1(intTmp);

	iSt >> intTmp;
	Window.setX2(intTmp);

	iSt >> intTmp;
	Window.setY1(intTmp);

	iSt >> intTmp;
	Window.setY2(intTmp);

}
