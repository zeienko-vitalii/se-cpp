/**
 * @file  Screen.cpp
 * Realization of the Screen class.
 * @author Vitalii Zeienko
 * @version 0.0.1
 * @date 2017.09.09
 */

#include "Screen.h"
#include <iostream>
#include <cstring>
#include <ctime>

int Screen::counter = 0;

Screen::Screen()
{
	//TODO Auto-stub
}

Screen::Screen(const Manipulator& manipulator) {
	// TODO Auto-generated constructor stub
	this->manipulator = new Manipulator(manipulator);
}

void Screen::Display() {

	counter++;
	ShowHeader();
	ShowContent();
	ShowFooter();
}

void Screen::ShowHeader() {

	std::cout << "|Manipulator #" << counter << std::endl;
	std::cout << "|====================================|" << std::endl;

}

void Screen::ShowContent() {
	std::cout << "| Type: " << manipulator->type << " |" << std::endl;
	std::cout << "| Manipulator`s amount of buttons: "
			<< manipulator->getAmountOfButtons() << " |" << std::endl;
}

void Screen::ShowFooter() {
	char* buffer = new char[30];
	time_t rawtime;
	time(&rawtime);
	ctime_s(buffer, 30, &rawtime);
	std::cout << "| Date: " << buffer << std::endl;
	std::cout << "|============================|" << std::endl;
	delete buffer;
}

Screen::~Screen() {
	std::cout << "~Screen()\n";
	if (manipulator)
		delete manipulator;
}
