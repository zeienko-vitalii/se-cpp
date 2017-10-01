/**
 * @file  GraphScreen.cpp
 * Realization of the XGraphScreen class.
 * @author Vitalii Zeienko
 * @version 0.0.2
 * @date 2017.09.12
 */

#include "GraphScreen.h"
#include <cstdio>

int GraphScreen::counter = 0;

GraphScreen::GraphScreen(const Manipulator& manip) {
	SetDataSource(manip);
}

void GraphScreen::SetDataSource(const Manipulator& sManipulator) {

	this->iManipulator = new Manipulator(sManipulator);

}

void GraphScreen::PrintData(const Manipulator& manipulator) {
	counter++;
		if (manipulator.IsGame()) {
			printf(
					"# %d Manipulator:\n Type: Gaming %s\n Amount Of buttons: %d\n",
					counter,
					manipulator.type,
					manipulator.getAmountOfButtons());
		} else {
			printf(
					"# %d Manipulator:\n Type: Simple %s\n Amount Of buttons: %d\n",
					counter,
					manipulator.type,
					manipulator.getAmountOfButtons());
		}

}

void GraphScreen::ShowData(){

	PrintData(*iManipulator);

}

GraphScreen::~GraphScreen() {
	printf("~CGraphScreen() is called!\n");
	if (this->iManipulator) {
		delete iManipulator;
	}
}
