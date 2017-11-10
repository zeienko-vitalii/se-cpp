/**
* @file  ComputerManipulator.cpp
* Realization of the ComputerManipulator class.
* @author Vitalii Zeienko
* @version 0.0.3
* @date 2017.10.09
**/

#include "ComputerManipulatorView.h"
#include <ctime>

#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define new new (_NORMAL_BLOCK, __FILE__, __LINE__)

ComputerManipulatorView::ComputerManipulatorView(Manipulator* computerManipulator, std::ostream* os) : 
	ManipulatorView(computerManipulator, os ){ }

void ComputerManipulatorView::showHeader() {
	(*getOutputStream()) << "\tComputer Manipulator" << "\n"; 
}

void ComputerManipulatorView::showContent() {
	ComputerManipulator* coomputerManipulator;
	coomputerManipulator = dynamic_cast<ComputerManipulator*>(getManipulator());
	if (coomputerManipulator->isGame()) {
		(*getOutputStream()) << "|==============================|\n";
		(*getOutputStream()) << "|" << "Type: game " << coomputerManipulator->getType() << "\n";
		(*getOutputStream()) << "|" << "Amount of buttons: " << coomputerManipulator->getAmountOfButtons() << "\n";
		(*getOutputStream()) << "|" << "Connection interface: " << coomputerManipulator->getConnectionInterface() << "\n";
		(*getOutputStream()) << "|" << "Sensor type: " << coomputerManipulator->getSensorType() << "\n";
	}
	else if (coomputerManipulator->isSimple()) {
		(*getOutputStream()) << "|==============================|" << "\n";
		(*getOutputStream()) << "|" << "Type: simple " << coomputerManipulator->getType() << "\n";
		(*getOutputStream()) << "|" << "Amount of buttons: " << coomputerManipulator->getAmountOfButtons() << "\n";
		(*getOutputStream()) << "|" << "Connection interface: " << coomputerManipulator->getConnectionInterface() << "\n";
		(*getOutputStream()) << "|" << "Sensor type: " << coomputerManipulator->getSensorType() << "\n";
	}
}

void ComputerManipulatorView::showFooter() {
	(*getOutputStream()) << "|==============================|" << "\n";
	char* buffer = new char[64];
	time_t rawtime;
	time(&rawtime);
	ctime_s(buffer, 64, &rawtime);
	(*getOutputStream()) << "|Date:" << buffer;
	(*getOutputStream()) << "|==============================|" << "\n";
	delete buffer;
}

ComputerManipulatorView::~ComputerManipulatorView() { }
#endif