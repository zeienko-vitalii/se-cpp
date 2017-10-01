/**
 * @file  GraphScreen.cpp
 * Realization of the XGraphScreen class.
 * @author Vitalii Zeienko
 * @version 0.0.2
 * @date 2017.09.12
 */

#include "GraphScreen.h"
#include <cstdio>
#include <ctime>

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
		printf("# %d Manipulator:\n Type: Gaming %s\n Amount Of buttons: %d\n",
				counter, manipulator.type, manipulator.getAmountOfButtons());
	} else {
		printf("# %d Manipulator:\n Type: Simple %s\n Amount Of buttons: %d\n",
				counter, manipulator.type, manipulator.getAmountOfButtons());
	}
}

void GraphScreen::Display() {
	ShowHeader();
	ShowContent();
	ShowFooter();
}

void GraphScreen::ShowHeader() {
	printf("|=============================| \n");
	printf("| Manipulator #%d			  |\n", counter);
	printf("|=============================| \n");

}

void GraphScreen::ShowContent() {
	printf("| Type: %s							 |\n", iManipulator->type);
	printf("| Manipulator`s amount of buttons: %d|\n", iManipulator->getAmountOfButtons());
}

void GraphScreen::ShowFooter() {
	char* buf = new char[64];
	time_t rawtime;
	time(&rawtime);
	ctime_s(buf, 64, &rawtime);
	printf("| Date: %s ", buf );
	printf("|=============================| \n");
	delete buf;
}

GraphScreen::~GraphScreen() {
	printf("~CGraphScreen() is called!\n");
	if (this->iManipulator) {
		delete iManipulator;
	}
}
