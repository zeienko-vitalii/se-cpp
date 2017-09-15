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

using namespace std;

/**
 * Entry point of program
 */
int main(void) {

	//Constants for  object initialization
	const int WINDOW_ID_1 = 1;
	const int X1_1 = 100;
	const int Y1_1 = 100;
	const int X2_1 = 100;
	const int Y2_1 = 100;

	Window win1(WINDOW_ID_1, X1_1, Y1_1, X2_1, Y2_1);

	Screen view1(win1);

	view1.viewWindow();

	return 0;
}
