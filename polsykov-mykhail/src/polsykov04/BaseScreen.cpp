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

BaseScreen::BaseScreen(Monitor* monitor) :
		data(monitor) {
	// TODO Auto-generated constructor stub

}


void BaseScreen::Display() {
	showHeader();
	showContent();
	showFooter();
}
