/**
 * @file  ManipulatorView.cpp
 * Realization of the ManipulatorView class.
 * @author Vitalii Zeienko
 * @version 0.0.3
 * @date 2017.09.09
 */

#include "ManipulatorView.h"
#include <iostream>
#include <ctime>
ManipulatorView::ManipulatorView(const Manipulator& manipulator, std::ostream* os) : BaseView(manipulator, os) {}

void ManipulatorView::show() {
	showHeader();
	showContent();
	showFooter();
}

void ManipulatorView::showHeader()
{
	(*getOutputStream()) << "Manipualtor" << std::endl;
}

void ManipulatorView::showContent()
{
	(*getOutputStream()) << " Manipulator`s type: " << (getManipulator()).getType()
		<< std::endl;
	(*getOutputStream()) << " Manipulator`s amount of buttons: "
		<< (getManipulator()).getAmountOfButtons() << std::endl;
}

void ManipulatorView::showFooter() {
	(*getOutputStream()) << "|==============================|" << std::endl;
	char* buffer = new char[64];
	time_t rawtime;
	time(&rawtime);
	ctime_s(buffer, 64, &rawtime);
	(*getOutputStream()) << "|Date:" << buffer;// << endl;
	(*getOutputStream()) << "|==============================|" << std::endl;
	delete buffer;
}

ManipulatorView::~ManipulatorView() {
}
