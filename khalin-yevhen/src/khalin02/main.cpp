/**
* @file main.cpp
* @brief Contains the entry point to the console application
* @author Khalin Yevhen
* @version 0
* @date 17.09.17
*/

#include "GraphScreen.h"
#include <iostream>

inline void testButtonsConditions() {
	using std::cout;

	// create round and pressed button
	Button c(ButtonForm::ROUND, true);

	// create rectangular and pressed button
	Button b(ButtonForm::RECTANGULAR, true);

	// let's take a look at the round pressed button
	GraphScreen sc(&c);
	cout << "Round pressed button:\n\t";
	sc.printData(sc.getDataSource(), cout);

	// at rectangular pressed
	sc.setDataSource(&b);
	cout << "\nRectangular pressed button:\n\t";
	sc.printData(sc.getDataSource(), cout);
}

void main() {
	testButtonsConditions();
	system("pause");
}