/*
 * @file Main.cpp
 * Точка входу в програму
 * @date 2017.09.10
 * @author shcherbinina
 */
#include "Screen.h"
#include "GraphScreen.h"
#include <iostream>


/**
* Точка входу в програму
*/
int main() {
	setlocale(LC_ALL, "Russian");

	Capacity capacity(l, 100);
	GraphScreen view;
	view.setDataSource(&capacity);
	view.printData();
	system("pause");
	return 0;
}

