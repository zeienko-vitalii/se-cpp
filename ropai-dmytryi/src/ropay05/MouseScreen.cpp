/*
 * @file MouseScreen.cpp
 * Part of lab03
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */
#include <iostream>
#include"Screen.h"
#include "MouseScreen.h"
#include "Mouse.h"

MouseScreen::MouseScreen() {
	// TODO Auto-generated constructor stub

}

MouseScreen::MouseScreen(Mouse* mouse) :
		Screen(mouse) {

}

void MouseScreen::showMouse() {
	cout << (*this->manip).toString() << endl;}

void MouseScreen::showHeader() {
	cout << "MouseScreen::showHeader() \n";
}

void MouseScreen::showContent() {
	showMouse();
	dataOutput();
}

void MouseScreen::showFooter() {
	cout << "\n MouseScreen::showFooter()) \n";
}

MouseScreen::~MouseScreen() {
	// TODO Auto-generated destructor stub
}

