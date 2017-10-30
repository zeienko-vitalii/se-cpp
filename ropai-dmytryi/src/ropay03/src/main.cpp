//============================================================================
// Name        : lab03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Manipulator.h"
#include "GraphScreen.h"
#include "Screen.h"
#include "Mouse.h"
#include "MouseScreen.h"
#include <string>

using namespace std;

int main() {

			const int COUNT_MANIP1 = 5;
			const string TYPE_MANIP1 = "Joystick";
			Manipulator manip1(COUNT_MANIP1, TYPE_MANIP1);

			const int COUNT_MANIP2 = 2;
			const string TYPE_MANIP2 = "Mouse";
			Manipulator manip2(COUNT_MANIP2, TYPE_MANIP2);

			const int COUNT_MANIP3 = 4;
			const string TYPE_MANIP3 = "Mouse";
			const string CONNECTION = "Wireless";
			const string SENSOR_TYPE = "Laser";
			Mouse mouse(COUNT_MANIP3, TYPE_MANIP3, CONNECTION, SENSOR_TYPE);

			cout << "From Screen " << endl;

			cout << "manip1: \n";
			Screen view(&manip1);
			view.Display();

			cout << "manip2: \n";
			Screen view2(&manip2);
			view2.Display();


			GraphScreen gscreen;
			cout << "From Graph Screen \n";
			gscreen.setDataSource(&manip1);
			gscreen.Display();

			MouseScreen mscreen(&mouse);
			cout << "From mouse: \n";
			mscreen.Display();

			return 0;

}
