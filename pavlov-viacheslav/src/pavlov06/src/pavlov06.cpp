/**
 * @file pavlov06.cpp
 * Program work demonstration.
 * @author pavlov-vs
 * @version 0.0.1
 * @date 2017.09.09
 */
#include <iostream>
#include "Window.h"
#include "WindowVector.h"
using namespace std;

int main() {

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

	WindowVector vec1;
	vec1.push(win1);
	vec1.push(win2);

	for (int i = 0; i < vec1.size(); i++) {
		cout << vec1[i]->toString() << "\n";
	}

	return 0;
}
