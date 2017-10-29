/**
 * @file Window.cpp
 * Implementation of Window class.
 * @author Ященко Олександр
 * @version 0.0.1
 * @date 2017.10.01
 */

#include "Window.h"

Window::Window() :
		iId(0), iX1(0), iY1(0), iX2(0), iY2(0) {
}

Window::Window(int aId, int aX1, int aY1, int aX2, int aY2) :
		iId(aId), iX1(aX1), iY1(aY1), iX2(aX2), iY2(aY2) {
}

Window::Window(const Window& window) :
		iId(window.iId), iX1(window.iX1), iY1(window.iY1), iX2(window.iX2), iY2(
				window.iY2) {
}

Window::~Window() {
}

const int Window::getId() const{
	return iId;
}

const int Window::width() const {
	return iX2-iX1;
}

const int Window::height() const {
	return iY2-iY1;
}
