/**
 * @file main.cpp
 * Implementation of main() function
 * @author Ященко Олександр
 * @version 0.0.1
 * @date 2017.10.01
 */

#include "Window.h"
#include "Screen.h"
#include "GraphScreen.h"
#include <iostream>

using namespace std;

/**
 * Entry point.
 * @param argc number of command line parameters
 * @param argv array of command line parameters
 * @return exit code
 */
int main(int argc, char** argv) {
	Window window(1, 10, 20, 30, 40);
	Window *window2 = new Window(2, 15, 25, 35, 45);
	Window window3(3, 20, 30, 40, 50);

	Screen view1(window);
	GraphScreen view2(window2);

	view1.showInfo();
	cout << endl;
	view2.showInfo();
	cout << endl;
	view2.printData(window3);
	cout << endl;
	view2.setDataSource(&window3);
	view2.showInfo();

	delete window2;

	return 0;
}
