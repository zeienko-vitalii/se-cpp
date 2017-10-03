/**
 * @file  GraphScreen.cpp
 * Realization of the GraphScreen class.
 * @author Vitalii Zeienko
 * @version 0.0.2
 * @date 2017.09.12
 */

#include "GraphScreen.h"
#include <cstdio>
#include <iostream>
using std::cout;
using std::cin;
GraphScreen::GraphScreen(const Manipulator& manip) : iManipulator(new Manipulator(manip)) { }

void GraphScreen::SetDataSource(const Manipulator& sManipulator) {
	// Changing a Manipualtor`s object which will be printed on the screen
	this->iManipulator = new Manipulator(sManipulator);
}

void GraphScreen::PrintData(const Manipulator& manipulator) {
	if (manipulator.IsGame()) {
		cout << "|=======================| \n"
			"|\tMANIPULATOR\t| \n"
			"|=======================| \n"
			"|Type: Gaming " << manipulator.getType() << "\t| \n"
			"|Amount Of buttons:" << manipulator.getAmountOfButtons() << "\t| \n"
			"|=======================| \n";
	}
	else {
		cout << "|=======================| \n"
			"|\tMANIPULATOR\t| \n"
			"|=======================| \n"
			"|Type: Simple " << manipulator.getType() << "\t| \n"
			"|Amount Of buttons:" << manipulator.getAmountOfButtons() << "\t| \n"
			"|=======================| \n";
	}

}

void GraphScreen::PrintData()
{
	PrintData(*iManipulator);
}

GraphScreen::~GraphScreen() {
	if (iManipulator != nullptr) {
		delete iManipulator;
	}
}
