/**
* @file  ComputerManipulator.cpp
* Realization of the ComputerManipulator class.
* @author Vitalii Zeienko
* @version 0.0.3
* @date 2017.10.09
*/

#include "ComputerManipulatorView.h"
#include <iostream>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;


#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define new new (_NORMAL_BLOCK, __FILE__, __LINE__)


ComputerManipulatorView::ComputerManipulatorView(const ComputerManipulator& CManip, std::ostream* os) : 
	ManipulatorView(CManip, os ), 
	CManipulator(CManip) {
}

void ComputerManipulatorView::showHeader() {
	cout << "\tComputer Manipulator\n" << endl;
}

void ComputerManipulatorView::showContent() {
	if (CManipulator.isGame()) {
		cout << "|==============================|" << endl;
		cout << "|" << "Type: game " << CManipulator.getType() << endl;
		cout << "|" << "Amount of buttons: " << CManipulator.getAmountOfButtons() << endl;
		cout << "|" << "Connection interface: " << CManipulator.getConnectionInterface() << endl;
		cout << "|" << "Sensor type: " << CManipulator.getSensorType() << endl;
	}
	else if (CManipulator.isSimple()) {
		cout << "|==============================|" << endl;
		cout << "|" << "Type: simple " << CManipulator.getType() << endl;
		cout << "|" << "Amount of buttons: " << CManipulator.getAmountOfButtons() << endl;
		cout << "|" << "Connection interface: " << CManipulator.getConnectionInterface() << endl;
		cout << "|" << "Sensor type: " << CManipulator.getSensorType() << endl;
	}
}

void ComputerManipulatorView::showFooter() {
	cout << "|==============================|" << endl;
	char* buffer = new char[64];
	time_t rawtime;
	time(&rawtime);
	ctime_s(buffer, 64, &rawtime);
	cout << "|Date:" << buffer;// << endl;
	cout << "|==============================|" << endl;
	delete buffer;
}

ComputerManipulatorView::~ComputerManipulatorView() {
	//if (this->CManipulator != nullptr) 
	//	delete this->CManipulator;
}
#endif