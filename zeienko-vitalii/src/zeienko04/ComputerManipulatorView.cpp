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

ComputerManipulatorView::ComputerManipulatorView(const ComputerManipulator& CManip, std::ostream* os) : 
	ManipulatorView(CManip, os ), 
	CManipulator(CManip) { }

void ComputerManipulatorView::showHeader() {
	(*getOutputStream()) << "\tComputer Manipulator" << "\n"; 
}

void ComputerManipulatorView::showContent() {
	if (CManipulator.isGame()) {
		(*getOutputStream()) << "|==============================|\n";
		(*getOutputStream()) << "|" << "Type: game " << CManipulator.getType() << "\n";
		(*getOutputStream()) << "|" << "Amount of buttons: " << CManipulator.getAmountOfButtons() << "\n"; 
		(*getOutputStream()) << "|" << "Connection interface: " << CManipulator.getConnectionInterface() << "\n";
		(*getOutputStream()) << "|" << "Sensor type: " << CManipulator.getSensorType() << "\n";
	}
	else if (CManipulator.isSimple()) {
		(*getOutputStream()) << "|==============================|" << "\n";
		(*getOutputStream()) << "|" << "Type: simple " << CManipulator.getType() << "\n";
		(*getOutputStream()) << "|" << "Amount of buttons: " << CManipulator.getAmountOfButtons() << "\n";
		(*getOutputStream()) << "|" << "Connection interface: " << CManipulator.getConnectionInterface() << "\n";
		(*getOutputStream()) << "|" << "Sensor type: " << CManipulator.getSensorType() << "\n";
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