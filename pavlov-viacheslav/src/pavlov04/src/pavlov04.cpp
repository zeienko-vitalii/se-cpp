/**
 * @file pavlov03.cpp
 * Program work demonstration.
 * @author pavlov-vs
 * @version 0.0.1
 * @date 2017.09.09
 */
#include "gtest/gtest.h"
#include <iostream>
#include <windows.h>

#include "Window.h"
#include "Button.h"
#include "BaseScreen.h"
#include "Screen.h"
#include "ButtonScreen.h"
#include "GraphScreen.h"
#include "TimerExecutor.h"

using namespace std;

void demo();
void timerDemo();
/**
 * Entry point of program
 */
int main(int argc, char **argv) {

	timerDemo();

	//::testing::InitGoogleTest(&argc, argv);
	return 0; // RUN_ALL_TESTS();
}

/**
 * Demonstration of program work.
 */
void demo() {
	//Constants for  object1 initialization
	const int WINDOW_ID_1 = 1;
	const int X1_1 = 11;
	const int Y1_1 = 12;
	const int X2_1 = 13;
	const int Y2_1 = 14;

	//Constants for  object2 initialization
	const int WINDOW_ID_2 = 2;
	const int X1_2 = 21;
	const int Y1_2 = 22;
	const int X2_2 = 23;
	const int Y2_2 = 24;

	//Constants for  object3 initialization
	const int WINDOW_ID_3 = 3;
	const int X1_3 = 31;
	const int Y1_3 = 32;
	const int X2_3 = 33;
	const int Y2_3 = 34;
	const string LABEL_3 = "Label 3";
	const string BORDER_COLOR_3 = "Border color 3";

	Window win1(WINDOW_ID_1, X1_1, Y1_1, X2_1, Y2_1);

	Window win2(WINDOW_ID_2, X1_2, Y1_2, X2_2, Y2_2);

	Screen view1_1(&win1);
	cout << "Data from win1:\n";
	view1_1.Display();

	Screen view1_2(&win2);
	cout << "Data from win2:\n";
	view1_2.Display();

	GraphScreen view2;
	view2.setDataSource(&win1);
	cout << "Graph view of win1:\n";
	view2.Display();

	cout << "Graph view of win2::\n";
	view2.Display();

	Button btn1(WINDOW_ID_3, X1_3, Y1_3, X2_3, Y2_3, LABEL_3, BORDER_COLOR_3);
	ButtonScreen test(&btn1);
	cout << "Data from btn1:\n";
	test.Display();

}

void timerDemo() {
	//Constants for  object1 initialization
	const int WINDOW_ID_1 = 1;
	const int X1_1 = 11;
	const int Y1_1 = 12;
	const int X2_1 = 13;
	const int Y2_1 = 14;
	Window win1(WINDOW_ID_1, X1_1, Y1_1, X2_1, Y2_1);

	TimerExecutor<Window> timer(GraphScreen::onTimerAction, win1);
	timer.start();
}
