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

ComputerManipulatorView::ComputerManipulatorView(ComputerManipulator* computerManipulator, std::ostream* os) : 
	ManipulatorView(computerManipulator, os ){ }

void ComputerManipulatorView::showHeader() {
	(*getOutputStream()) << "\tComputer Manipulator" << "\n"; 
}

void ComputerManipulatorView::showContent() {
	if ((getComputerManipulator())->isGame()) {
		(*getOutputStream()) << "|==============================|\n";
		(*getOutputStream()) << "|" << "Type: game " << (getComputerManipulator())->getType() << "\n";
		(*getOutputStream()) << "|" << "Amount of buttons: " << (getComputerManipulator())->getAmountOfButtons() << "\n";
		(*getOutputStream()) << "|" << "Connection interface: " << (getComputerManipulator())->getConnectionInterface() << "\n";
		(*getOutputStream()) << "|" << "Sensor type: " << (getComputerManipulator())->getSensorType() << "\n";
	}
	else if ((getComputerManipulator())->isSimple()) {
		(*getOutputStream()) << "|==============================|" << "\n";
		(*getOutputStream()) << "|" << "Type: simple " << (getComputerManipulator())->getType() << "\n";
		(*getOutputStream()) << "|" << "Amount of buttons: " << (getComputerManipulator())->getAmountOfButtons() << "\n";
		(*getOutputStream()) << "|" << "Connection interface: " << (getComputerManipulator())->getConnectionInterface() << "\n";
		(*getOutputStream()) << "|" << "Sensor type: " << (getComputerManipulator())->getSensorType() << "\n";
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