/**
 * @file pavlov01.cpp
 * Program work demonstration.
 * @author pavlov-vs
 * @version 0.0.1
 * @date 2017.09.09
 */

#include <iostream>

#include "Window.h"
#include "Screen.h"
#include "GraphScreen.h"

using namespace std;

/**
 * Entry point of program
 */
int main(void) {

	//Constants for  object1 initialization
	const int WINDOW_ID_1 = 1;
	const int X1_1 = 0;
	const int Y1_1 = 0;
	const int X2_1 = 10;
	const int Y2_1 = 5;

	//Constants for  object2 initialization
	const int WINDOW_ID_2 = 1;
	const int X1_2 = 0;
	const int Y1_2 = 0;
	const int X2_2 = 5;
	const int Y2_2 = 7;

	Window win1(WINDOW_ID_1, X1_1, Y1_1, X2_1, Y2_1);

	Window win2(WINDOW_ID_2, X1_2, Y1_2, X2_2, Y2_2);

	cout << "Data from win1:\n";
	Screen view1_1(win1);
	view1_1.viewWindow();

	cout << "Data from win2:\n";
	Screen view1_2(win2);
	view1_2.viewWindow();

	cout << "Graph view of win1:\n";
	GraphScreen view2;
	view2.setDataSource(&win1);
	view2.printData();

	cout << "Graph view of win2::\n";
	view2.printData(win2);

	return 0;
}
