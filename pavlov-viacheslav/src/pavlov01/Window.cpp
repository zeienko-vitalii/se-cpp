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

Window::Window() {
	this->windowId = 0;
	this->x1 = 0;
	this->x2 = 0;
	this->y1 = 0;
	this->y2 = 0;

}

Window::~Window() {
	// TODO Auto-generated destructor stub
}

Window::Window(int windowId, int x1, int y1, int x2, int y2) {
	this->windowId = windowId;
	this->x1 = x1;
	this->x2 = x2;
	this->y1 = y1;
	this->y2 = y2;
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
