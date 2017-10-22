//============================================================================
// Name        : pavlov07.cpp
// Author      : pavlov-viacheslav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Window.h"
#include "WindowVector.h"
#include"Verificator.h"
#include"CollectionHandler.h"
using namespace std;

int main() {
	//Constants for  object1 initialization
	const int WINDOW_ID_1 = 1;
	const int X1_1 = 12;
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

	Verificator ver;
	CollectionHandler<Verificator> handler;
	handler.displayInverted(vec1, ver);

	return 0;
}
