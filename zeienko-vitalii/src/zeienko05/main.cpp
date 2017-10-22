#include  "FileStorage.h"
#include "Manipulator.h"
#include "ComputerManipulator.h"

#include <iostream>
using std::cout;
using std::endl;

#include <conio.h> // _getch()

#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define new new (_NORMAL_BLOCK, __FILE__, __LINE__)

void saveAndRestoreManipulatorObject() {
	Manipulator* manip = new Manipulator();
	FileStorage* fileStorage = new FileStorage(manip, "t.txt");

	cout << "Manipulator \n";
	cout << "Type " << manip->getType() << endl;
	cout << "Amount of buttons " << manip->getAmountOfButtons() << endl;

	if (fileStorage->Save()) {
		cout << "Object was saved" << endl;
	}
	manip->setAmountOfButtons(13);
	manip->setType("Joystick");
	cout << "Type " << manip->getType() << endl;
	cout << "Amount of buttons " << manip->getAmountOfButtons() << endl;

	if (fileStorage->Load()) {
		cout << "Object was restored " << endl;
	}
	
	cout << "Type " << manip->getType() << endl;
	cout << "Amount of buttons " << manip->getAmountOfButtons() << endl;

	delete manip;
	delete fileStorage;

}

int main(int argc, char** argv) {
	
	saveAndRestoreManipulatorObject();

	_getch();
	return _CrtDumpMemoryLeaks();
}

#endif