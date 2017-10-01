/*
 * CMScreen.cpp
 *
 *  Created on: 24 сент. 2017 г.
 *      Author: Bjorn
 */


#include "CMScreen.h"
#include <iostream>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;

CMScreen::CMScreen(const ComputerManipulator& CManip) : Screen(CManip), CManipulator(new ComputerManipulator(CManip)) { }

void CMScreen::Display()
{
	ShowHeader();
	ShowContent();
	ShowFooter();
}

void CMScreen::ShowHeader() {
	cout << "|    Computer Manipulator    |" << endl;
	cout << "|============================|" << endl;
}

void CMScreen::ShowContent() {
	if (CManipulator->IsGame()) {
		cout << "|Type: game " << CManipulator->type << endl;
		cout << "|Amount of butoons: " << CManipulator->getAmountOfButtons() << endl;
		cout << "|Connection interface: " << CManipulator->getConnectionInterface() << endl;
		cout << "|Sensor type: " << CManipulator->getSensorType() << endl;
	}
	else if (CManipulator->IsSimple()) {
		cout << "|Type: simple " << CManipulator->type << endl;
		cout << "|Amount of butoons: " << CManipulator->getAmountOfButtons() << endl;
		cout << "|Connection interface: " << CManipulator->getConnectionInterface() << endl;
		cout << "|Sensor type: " << CManipulator->getSensorType() << endl;
	}
}

void CMScreen::ShowFooter() {
	cout << "|============================|" << endl;
	char* buffer = new char[64];
	time_t rawtime;
	time(&rawtime);
	ctime_s(buffer, 64, &rawtime);
	cout << "| Date: " << buffer << endl;
	cout << "|============================|" << endl;
	delete buffer;
}

CMScreen::~CMScreen() {
	if (CManipulator) 
		delete CManipulator;
}