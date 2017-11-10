/**
* @file main.cpp
* Realization of the main() function.
* @author Vitalii Zeienko
* @version 0.0.2
* @date 2017.09.12
*/

#include <iostream>
#include "ComputerManipulator.h"
#include "Manipulator.h"
#include "MouseList.h"
#include "FileStorage.h"

#include <conio.h> // _getch()

using namespace std;

#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define new new (_NORMAL_BLOCK, __FILE__, __LINE__)


void operationsWithMouseList() {
	ComputerManipulator* cManip1 = new ComputerManipulator(13, Manipulator::Joystick, "USB/PCP", ComputerManipulator::Laser);
	ComputerManipulator* cManip2 = new ComputerManipulator(14, Manipulator::Mouse, "Bluetooth", ComputerManipulator::Optical);
	ComputerManipulator* cManip3 = new ComputerManipulator(15, Manipulator::Joystick, "GIGI", ComputerManipulator::Balling);

	MouseList<ComputerManipulator>* q = new MouseList<ComputerManipulator>();
	q->push_back(cManip1);
	q->push_back(cManip2);
	q->push_back(cManip3);
	CFileStorage* storage1 = CFileStorage::Create(*q, "datafile.txt");
	bool success = storage1->Store();
	if (!success) {
		cerr << "Storing returned error: " << storage1->GetLastError() << endl;
	}
	cout << "Saving ComputerManipualtors with such parameters: " << endl;
	for (int i = 0; i < q->getSize(); i++) {
		cout << "AmountOfBtns: " << q->getDataByIndex(i)->getAmountOfButtons() << endl;
		cout << "Type: " << q->getDataByIndex(i)->getType() << endl;
		cout << "ConnectionInterface: " << q->getDataByIndex(i)->getConnectionInterface() << endl;
		cout << "Sensor: " << q->getDataByIndex(i)->getSensorType() << endl;
		cout << "================================================ " << endl;
	}

	success = storage1->Load();
	if (!success) {
		cerr << "Loading returned error: " << storage1->GetLastError() << endl;
	}
	cout << "Restoring with such parameters: " << endl;
	for (int i = 0; i < q->getSize(); i++) {
		cout << "AmountOfBtns: " << q->getDataByIndex(i)->getAmountOfButtons() << endl;
		cout << "Type: " << q->getDataByIndex(i)->getType() << endl;
		cout << "ConnectionInterface: " << q->getDataByIndex(i)->getConnectionInterface() << endl;
		cout << "Sensor: " << q->getDataByIndex(i)->getSensorType() << endl;
		cout << "================================================ " << endl;
	}
	delete q;
	delete storage1;
	delete cManip1;
	delete cManip2;
	delete cManip3;
	
}


/**
* Entry point of program.
* @param argc is an amount of parameters which were sent to the main.
* @param argv keeps certain arguments which were sent to the main.
* @return 0 in case if there is no error during runtime.
* */
int main() {
	operationsWithMouseList();
	_getch();
	return _CrtDumpMemoryLeaks();
}

#endif