/**
 * @file  GraphicalView.cpp
 * Realization of the GraphicalView class.
 * @author Vitalii Zeienko
 * @version 0.0.2
 * @date 2017.09.12
 */

#include "GraphicalView.h"
#include <ctime>

GraphicalView::GraphicalView(const Manipulator& manipulator, std::ostream* os) : BaseView(manipulator, os) { }

void GraphicalView::setDataSource(const Manipulator& sourceManipulator) {
	// Changing a Manipualtor`s object which will be printed on the screen
	(getManipulator()) = sourceManipulator;
}

void GraphicalView::printData(const Manipulator& manipulator) {
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

void GraphicalView::printData()
{
	printData(getManipulator());
}

void GraphicalView::showHeader()
{
	(*getOutputStream()) << "\tManipulator" << "\n";
}

void GraphicalView::showContent()
{
	if (getManipulator().isGame()) {
		(*getOutputStream()) << "|==============================|\n"
			"|Type: Gaming " << getManipulator().getType() << "\t| \n"
			"|Amount Of buttons:" << getManipulator().getAmountOfButtons() << "\t| \n";
	}
	else {
		(*getOutputStream()) << "|==============================|\n"
			"|Type: Simple " << getManipulator().getType() << "\t| \n"
			"|Amount Of buttons:" << getManipulator().getAmountOfButtons() << "\t| \n";
	}

}

void GraphicalView::showFooter()
{
	(*getOutputStream()) << "|==============================|\n";
	char* buffer = new char[64];
	time_t rawtime;
	time(&rawtime);
	ctime_s(buffer, 64, &rawtime);
	(*getOutputStream()) << "|Date:" << buffer;
	(*getOutputStream()) << "|==============================|\n";
	delete buffer;
}

GraphicalView::~GraphicalView() {
}
