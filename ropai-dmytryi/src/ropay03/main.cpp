//============================================================================
// Name        : lab03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Manipulator.h"
#include "GraphScreen.h"
#include "Screen.h"
#include <string>

using namespace std;

int main() {

		const int COUNT_MANIP1 = 5;
		const string TYPE_MANIP1 = "Joystick";
		Manipulator manip1(COUNT_MANIP1, TYPE_MANIP1);

		const int COUNT_MANIP2 = 2;
		const string TYPE_MANIP2 = "Mouse";
		Manipulator manip2(COUNT_MANIP1, TYPE_MANIP2);


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
