/**
 * @file  GraphScreen.cpp
 * Realization of the GraphScreen class.
 * @author Vitalii Zeienko
 * @version 0.0.2
 * @date 2017.09.12
 */

#include "GraphScreen.h"
GraphScreen::GraphScreen(const Manipulator& manip, std::ostream* os) : BaseView(manip, os) { }

void GraphScreen::setDataSource(const Manipulator& sManipulator) {
	// Changing a Manipualtor`s object which will be printed on the screen
	//this->iManipulator = new Manipulator(sManipulator);
	(getManipulator()) = sManipulator;
}

void GraphScreen::printData(const Manipulator& manipulator) {
	if (manipulator.isGame()) {
		(*getOutputStream()) << "|=======================| \n"
			"|\tMANIPULATOR\t| \n"
			"|=======================| \n"
			"|Type: Gaming " << manipulator.getType() << "\t| \n"
			"|Amount Of buttons:" << manipulator.getAmountOfButtons() << "\t| \n"
			"|=======================| \n";
	}
	else {
		(*getOutputStream()) << "|=======================| \n"
			"|\tMANIPULATOR\t| \n"
			"|=======================| \n"
			"|Type: Simple " << manipulator.getType() << "\t| \n"
			"|Amount Of buttons:" << manipulator.getAmountOfButtons() << "\t| \n"
			"|=======================| \n";
	}

}

void GraphScreen::printData()
{
	printData(getManipulator());
}

GraphScreen::~GraphScreen() {
}
