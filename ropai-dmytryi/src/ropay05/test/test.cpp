//============================================================================
// Name        : lab03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <sstream>
#include <bitset>
#include <algorithm>
#include <FileStorage.h>
#include "gtest/gtest.h"
#include "../src/Manipulator.h"
#include "../src/Screen.h"
#include "../src/Mouse.h"
#include "../src/MouseScreen.h"


using namespace std;
//using std::string;

TEST(classManipulator, constructorsGeters) {
	const int COUNT = 2;
	const string TYPE = "Joystick";

	Manipulator manip(COUNT, TYPE);

	int actualCount = manip.getCount();
	string actualType = manip.getType();

	ASSERT_EQ(COUNT, actualCount);
	ASSERT_EQ(TYPE, actualType);
}

TEST(classMouse, constructorsGeters) {
	const string CONNECTION = "Wireless";
	const string SENSOR_TYPE = "Laser";

	Mouse mouse(CONNECTION, SENSOR_TYPE);

	string actualConnection = mouse.getConnection();
	string actualSensorType = mouse.getSensorType();

	ASSERT_EQ(CONNECTION, actualConnection);
	ASSERT_EQ(SENSOR_TYPE, actualSensorType);
}

TEST(toString, display) {

	const int COUNT = 2;
	const string TYPE = "Joystick";

	Manipulator manip(COUNT, TYPE);

	Screen view(&manip);
	string str;

	str += "Количество кнопок: " + to_string(COUNT) + "\n";
	str += "Тип устройства : " + TYPE + "\n";

	ASSERT_EQ(manip.toString(), str);

}

TEST(toStringMouse, displayMouse) {

	const int COUNT_MANIP = 4;
	const string TYPE_MANIP = "Mouse";
	const string CONNECTION = "Wireless";
	const string SENSOR_TYPE = "Laser";
	Mouse mouse(COUNT_MANIP, TYPE_MANIP, CONNECTION, SENSOR_TYPE);

	MouseScreen mscreen(&mouse);

	string str;
	str += "Количество кнопок: " + to_string(COUNT_MANIP) + "\n";
	str += "Тип устройства : " + TYPE_MANIP + "\n";
	str += "Тип соединения: " + CONNECTION + "\n";
	str += "Тип сенсора: " + SENSOR_TYPE + "\n";

	ASSERT_EQ(str, mouse.toString());

}

TEST(classManipulator, testToBitsetString) {

	const int COUNT = 2;
	const string TYPE = "Joustik";

	Manipulator manip(COUNT, TYPE);

	string res;

	res += bitset<32>(COUNT).to_string();

	for (unsigned int i = 0; i < TYPE.length(); i++) {
		res += bitset<9>(TYPE.at(i)).to_string();
	}
	res += " ";

	string actualBitsetString = manip.toBitsetString();
	ASSERT_EQ(res, actualBitsetString);

}

TEST(classMouse, testToBitsetStringMouse) {
	const int COUNT = 2;
	const string TYPE = "Joustik";

	Manipulator manip(COUNT, TYPE);

	const string CONNECTION = "Wireless";
	const string SENSOR_TYPE = "Laser";
	Mouse mouse(COUNT, TYPE, CONNECTION, SENSOR_TYPE);

	string res = manip.toBitsetString();

	for (unsigned int i = 0; i < CONNECTION.length(); i++) {
		res += bitset<9>(CONNECTION.at(i)).to_string();
	}
	res += " ";

	for (unsigned int i = 0; i < SENSOR_TYPE.length(); i++) {
		res += bitset<9>(SENSOR_TYPE.at(i)).to_string();
	}
	res += " ";

	string actualBitsetStringMouse = mouse.toBitsetString();
	ASSERT_EQ(res, actualBitsetStringMouse);
}

TEST(fileStorage, fileStorageTest) {

	const int COUNT_MANIP = 5;
	const string TYPE_MANIP = "Joystick";
	Manipulator manip(COUNT_MANIP, TYPE_MANIP);

	int actualCountManipulator = manip.getCount();
	string actualTypeManipulator = manip.getType();

	CFileStorage *testStorage = CFileStorage::Create(manip, "Lab5_Test.bin");
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

	int countManipulator2 = manip2.getCount();
	string typeManipulator2 = manip2.getType();

	ASSERT_EQ(actualCountManipulator, countManipulator2);
	ASSERT_EQ(actualTypeManipulator, typeManipulator2);
	delete testStorage;
}

TEST(fileStorageMouse, fileStorageMouseTest) {

	const int COUNT_MANIP3 = 4;
	const string TYPE_MANIP3 = "Mouse";
	const string CONNECTION = "Wireless";
	const string SENSOR_TYPE = "Laser";
	Mouse mouse(COUNT_MANIP3, TYPE_MANIP3, CONNECTION, SENSOR_TYPE);

	CFileStorage *testStorageMouse = CFileStorage::Create(mouse,
			"Lab5_Test2.bin");
	bool success = testStorageMouse->Store();
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


		ASSERT_EQ(mouse.toString(), mouse2.toString());

		delete testStorageMouse;

}
