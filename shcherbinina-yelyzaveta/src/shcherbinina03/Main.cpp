/*
 * @file Main.cpp
 * ����� ����� � ��������
 * @date 2017.09.10
 * @author shcherbinina
 */
#include "gtest\gtest.h"
#include "Screen.h"
#include "GraphScreen.h"
#include "Jar.h"
#include "JarScreen.h"
#include "BaseView.h"
#include <iostream>
#include <conio.h>


/**
* ����� ����� � ��������
*/
int main(int argc, char **argv) {
	setlocale(LC_ALL, "Russian");

	/*Capacity capacity(l, 100);
	GraphScreen view;
	view.setDataSource(&capacity);
	view.printData();*/

	Jar jar1("�����������", "����");
	JarScreen view1(&jar1);
	view1.display();

	Jar jar2;
	Screen view2(&jar2);
	view2.display();
	

	Capacity data(l,1000);
	GraphScreen view3(&data);
	view3.display();
	
	::testing::InitGoogleTest(&argc, argv);
	const int res = RUN_ALL_TESTS();
	getch();
	return res;
}

