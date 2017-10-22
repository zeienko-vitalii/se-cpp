//============================================================================
// Name        : lab05.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <FileStorage.h>
#include "Manipulator.h"
#include "Mouse.h"
#include "Screen.h"

using namespace std;

int main() {

	const int COUNT_MANIP1 = 5;
	const string TYPE_MANIP1 = "Joystick";
	Manipulator manip1(COUNT_MANIP1, TYPE_MANIP1);

	const int COUNT_MANIP3 = 4;
	const string TYPE_MANIP3 = "Mouse";
	const string CONNECTION = "Wireless";
	const string SENSOR_TYPE = "Laser";
	Mouse mouse(COUNT_MANIP3, TYPE_MANIP3, CONNECTION, SENSOR_TYPE);

	CFileStorage *testStorage = CFileStorage::Create(manip1, "Lab5_Test.bin");
	bool success = testStorage->Store();
	if (!success) {
		cerr << "Storing returned error: " << testStorage->GetLastError()
				<< endl;
	}

	Manipulator manip2;
	testStorage = CFileStorage::Create(manip2, "Lab5_Test.bin");

	success = testStorage->Load();
	if (!success) {
		cerr << "Loading returned error: " << testStorage->GetLastError()
				<< endl;
	}

	cout << manip2.toString();


	CFileStorage *testStorageMouse = CFileStorage::Create(mouse,
			"Lab5_Test2.bin");
	 success = testStorageMouse->Store();
	if (!success) {
		cerr << "Storing returned error: " << testStorageMouse->GetLastError()
				<< endl;
	}
	Mouse mouse2;
	testStorageMouse = CFileStorage::Create(mouse2, "Lab5_Test2.bin");

	success = testStorageMouse->Load();
	if (!success) {
		cerr << "Loading returned error: " << testStorageMouse->GetLastError()
				<< endl;
	}

	cout << mouse2.toString();

	return 0;
}
