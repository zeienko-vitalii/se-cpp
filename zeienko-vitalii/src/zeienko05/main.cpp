#include <conio.h>
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;


#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define new new (_NORMAL_BLOCK, __FILE__, __LINE__)

#include <stdlib.h>
#include <crtdbg.h>

#include "FileStorage.h"
#include "Manipulator.h"
#include "ComputerManipulator.h"

/**
* Shows an example of saving and restoring the data of the created objects.
*/
void SaveAndRestore() {

	Manipulator* manipulator = new Manipulator;
	CFileStorage* storage1 = CFileStorage::Create(*manipulator, "datafile.txt");
	bool success = storage1->Store();
	if (!success) {
		cerr << "Storing returned error: " << storage1->GetLastError() << endl;
	}
	
	cout << "Manipulator Current amountOfButtons " << manipulator->getAmountOfButtons() << endl;
	manipulator->setAmountOfButtons(15);
	cout << "Manipulator New amountOfButtons " << manipulator->getAmountOfButtons() << endl;
	success = storage1->Load();
	if (!success) {
		cerr << "Loading returned error: " << storage1->GetLastError() << endl;
	}
	cout << "Manipulator Restored amountOfButtons " << manipulator->getAmountOfButtons() << endl;

	delete manipulator;
	delete storage1;

	ComputerManipulator* computerManipulator = new ComputerManipulator;
	CFileStorage* storage2 = CFileStorage::Create(*computerManipulator, "datafile.txt");
	bool success1 = storage2->Store();
	if (!success1) {
		cerr << "Storing returned error: " << storage2->GetLastError() << endl;
	}

	cout << "computerManipulator Current Connection Type " << computerManipulator->getConnectionInterface() << endl;
	computerManipulator->setConnectionInterface("Bluetooth");
	cout << "computerManipulator New Connection Type " << computerManipulator->getConnectionInterface() << endl;
	success1 = storage2->Load();
	if (!success1) {
		cerr << "Loading returned error: " << storage2->GetLastError() << endl;
	}
	cout << "computerManipulator Restored Connection Type " << computerManipulator->getConnectionInterface() << endl;

	delete computerManipulator;
	delete storage2;
	

}

int main() {
	SaveAndRestore();
	_getch();
	return _CrtDumpMemoryLeaks();
}
#endif /* _DEBUG */