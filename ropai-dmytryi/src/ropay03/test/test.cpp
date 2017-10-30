//============================================================================
// Name        : lab03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "gtest/gtest.h"
#include "Manipulator.h"
#include "GraphScreen.h"
#include "Screen.h"
#include "Mouse.h"
#include "MouseScreen.h"
#include <string>

using namespace std;

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
	string str ;

		str += "���������� ������: " + to_string(COUNT) + "\n";
		str += "��� ���������� : " + TYPE + "\n";

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
		str += "���������� ������: " + to_string(COUNT_MANIP) + "\n";
		str += "��� ���������� : " + TYPE_MANIP + "\n";
		str += "��� ����������: " + CONNECTION + "\n";
		str += "��� �������: " + SENSOR_TYPE + "\n";

	ASSERT_EQ(str, mouse.toString());

}

