/*
 * @file Main.cpp
 * Точка входу в програму
 * @date 2017.09.10
 * @author shcherbinina
 */
#include "Screen.h"
#include "GraphScreen.h"
#include "Jar.h"
#include "JarScreen.h"
#include "BaseView.h"
#include <iostream>


/**
* Точка входу в програму
*/
int main() {
	setlocale(LC_ALL, "Russian");

	/*Capacity capacity(l, 100);
	GraphScreen view;
	view.setDataSource(&capacity);
	view.printData();*/

	Jar jar1("Закручується", "Скло");
	JarScreen view1(&jar1);
	view1.display();

	Jar jar2;
	Screen view2(&jar2);
	view2.display();
	

	Capacity data(l,1000);
	GraphScreen view3(&data);
	view3.display();
	system("pause");
	return 0;
}

