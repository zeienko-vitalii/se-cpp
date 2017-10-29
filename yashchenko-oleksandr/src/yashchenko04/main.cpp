/**
 * @file main.cpp
 * Implementation of main() function
 * @author Ященко Олександр
 * @version 0.0.3
 * @date 2017.10.27
 */

#include "BaseView.h"
#include "ButtonScreen.h"
#include "Window.h"
#include "Button.h"
#include "GraphScreen.h"
#include "Timer.h"

#include <iostream>

using namespace std;

/**
 * Entry point.
 * @param argc number of command line parameters
 * @param argv array of command line parameters
 * @return exit code
 */

int main(int argc, char** argv) {
	Button button(3, 30, 50, 80, 90, "Nice button", "red");
	Button button2(5, 15, 15, 35, 35, "Beautiful button", "green");

	BaseView * view1 = new ButtonScreen(button);
	BaseView * view11 = new ButtonScreen(button2);
	GraphScreen gscreen(&button);

	view1->showInfo();
	cout << endl;

	if (button > button2)
		cout << "Button > button2" << endl;
	cout << endl;

	view11->showInfo();
	cout << endl;

	button.setData("Red button");
	button2.setData("BIG button", "black");
	button += button2;

	BaseView * view2 = new ButtonScreen(button);
	BaseView * view22 = new ButtonScreen(button2);

	view2->showInfo();

	cout << endl;

	view22->showInfo();

	Timer timer1;
	timer1.start(2000, 4);

	delete view1;
	delete view11;
	delete view2;
	delete view22;

	return 0;
}
