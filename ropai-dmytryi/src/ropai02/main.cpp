/*
 * @file main.cpp
 * Part of lab02
 * @author ����
 * @version 0.0.1
 * @date 2017.01.01
 */

#include <iostream>

#include "Manipulator.h"
#include "GraphScreen.h"
#include "Screen.h"

using namespace std;

int main() {

	Manipulator manip1(5, "Joystick");
	Manipulator manip2(2, "Mouse");


	cout << "From Screen" << endl;

	cout << "manip1: " << endl;
	Screen view(manip1);
	view.dataOutput();

	cout << "manip2: " << endl;
	Screen view2(manip2);
	view2.dataOutput();


	GraphScreen gscreen;
	cout << "From Graph Screen" << endl;

	gscreen.setDataSource(&manip1);

	cout << "manip1: " << endl;
	gscreen.printData();

	cout << "manip2: " << endl;
	gscreen.printData(manip2);

	cout << "ʳ������ ������ �� ��� �����? (manip1):" << manip1.isSimple() << endl;
	cout << "ʳ������ ������ ����� ��� ���� 4? (manip1):" << manip1.isGame() << endl;
	cout << "" <<endl;
	cout << "ʳ������ ������ �� ��� �����? (manip2):" << manip2.isSimple() << endl;
	cout << "ʳ������ ������ ����� ��� ���� 4? (manip2):" << manip2.isGame() << endl;

		return 0;
}
