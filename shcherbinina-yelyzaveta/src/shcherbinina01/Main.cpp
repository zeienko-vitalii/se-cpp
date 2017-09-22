/*
 * @file Main.cpp
 * Точка входу в програму
 * @date 2017.09.10
 * @author shcherbinina
 */
#include "Screen.h"
#include <iostream>


/**
* Точка входу в програму
*/
int main() {
	setlocale(LC_ALL, "Russian");

	Capacity capacity(ml, 200);
	Screen view(capacity);
	view.view();

	system("pause");
	return 0;
}

