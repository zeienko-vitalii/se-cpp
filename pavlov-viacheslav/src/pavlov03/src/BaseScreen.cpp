/**
 * @file BaseScreen.cpp
 * BaseScreen functions realization.
 * @author pavlov-vs
 * @version 0.0.1
 * @date 2017.09.09
 */
#include<iostream>

#include "BaseScreen.h"

BaseScreen::BaseScreen() {
	cout << "BaseScreen default constructor\n";

}

BaseScreen::~BaseScreen() {
	cout << "BaseScreen destructor\n";
}

BaseScreen::BaseScreen(Window window) :
		data(window) {
	// TODO Auto-generated constructor stub

}

void BaseScreen::showHeader() {
	cout << "\n|--------------------------\n";
	cout << "|Base screen output\n";
}

void BaseScreen::showContent() {
	cout << "WindowId" << this->data.getWindowId() << endl;
}

void BaseScreen::showFooter() {
	cout << "|--------------------------\n\n";
}

void BaseScreen::Display() {
	showHeader();
	showContent();
	showFooter();
}
