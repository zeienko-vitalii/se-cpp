/*
 * BaseScreen.cpp
 *
 *  Created on: 20 сент. 2017 г.
 *      Author: JR_Rider
 */
#include<iostream>

#include "Window.h"
#include "BaseScreen.h"

BaseScreen::BaseScreen() {
	cout << "BaseScreen default constructor\n";

}

BaseScreen::~BaseScreen() {
	cout << "BaseScreen destructor\n";
}

BaseScreen::BaseScreen(Window window) :
		window(window) {
	// TODO Auto-generated constructor stub

}

void BaseScreen::showHeader() {
	cout << "Base screen output\n";
}

void BaseScreen::showContent() {
	cout << "WindowId" << this->window.getWindowId() << endl;
}

void BaseScreen::showFooter() {

}

void BaseScreen::Display() {
	showHeader();
	showContent();
	showFooter();
}
