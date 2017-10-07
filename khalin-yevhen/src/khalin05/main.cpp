#include <FileStorage.h>
#include <iostream>
#include "PrintableKeyboardButton.h"
using namespace std;

void demo() {
	PKeyboardButton btn(ButtonForm::RECTANGULAR, 101, "W");
	btn.setCondition(true);
	const char* fileName = "test.out";
	CFileStorage *stor = CFileStorage::Create(btn, fileName);

	cout << "Before writing: ";
	cout << btn.toString() << endl;
	
	cout << "Writing to " << fileName << " . . ." << endl;
	stor->Store();
	cout << "Done." << endl;

	cout << "Reseting data . . ." << endl;
	btn.setCode(0);
	btn.setCondition(false);
	btn.setName("null");
	cout << "After reseting: ";
	cout << btn.toString() << endl;

	cout << "Loading from " << fileName << " . . ." << endl;
	stor->Load();
	cout << "Done." << endl;
	cout << "After loading: ";
	cout << btn.toString() << endl;
}

void main(void) {
	demo();	
	system("pause");
}