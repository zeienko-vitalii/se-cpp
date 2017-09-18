/*
 * @file main.cpp
 * Part of lab02
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */

#include <iostream>

#include "Manipulator.h"
#include "GraphScreen.h"
#include "Screen.h"

using namespace std;

int main() {

	Manipulator manip1(5, "Джойстик");
	Manipulator manip2(2, "Мишка");


	cout << "From Screen" << endl;

	cout << "manip1: " << endl;
	Screen view(manip1);
	view.dataOutput();

	cout << "manip2: " << endl;
	Screen view2(manip2);
	view2.dataOutput();


	GraphScreen gscreen;
	cout << "From Graph Screen" << endl;

	gscreen.setDataSource(&manip1);

	cout << "manip1: " << endl;
	gscreen.printData();

	cout << "manip2: " << endl;
	gscreen.printData(manip2);

		return 0;
}
