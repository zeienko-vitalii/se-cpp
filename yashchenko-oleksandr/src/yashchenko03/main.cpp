/**
 * @file main.cpp
 * Implementation of main() function
 * @author Ященко Олександр
 * @version 0.0.3
 * @date 2017.10.20
 */

#include "BaseView.h"
#include "Screen.h"
#include "GraphScreen.h"
#include "ButtonScreen.h"
#include "Window.h"
#include "Button.h"

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
	Button button(3, 30, 50, 80, 90, "Nice button", "red");

	BaseView * view1 = new Screen(window);
	BaseView * view2 = new GraphScreen(window2);
	BaseView * view3 = new ButtonScreen(button);

	view1->showInfo();
	cout << endl;
	view2->showInfo();
	cout << endl;
	view3->showInfo();

	delete window2;
	delete view1;
	delete view2;
	delete view3;

	return 0;
}
