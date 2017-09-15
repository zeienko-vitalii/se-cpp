/*
 * @file Screen.cpp
 * Part of lab1
 * @author ����
 * @version 0.0.1
 * @date 2017.01.01
 */
#include <iostream>
#include <string>

#include "Manipulator.h"
#include "Screen.h"

using namespace std;

Screen::Screen() {
}

Screen::Screen(Manipulator manip): manip(manip){
	cout << "����� ������������ Screen � ����������" << endl;
}

void Screen::dataOutput(){
	cout << "" << endl;
	cout << "��� ��������: " << manip.getType() << endl;
	cout << "ʳ������ ������: " << manip.getCount() << endl;
	cout << "" << endl;
}

Screen::~Screen() {
	// TODO Auto-generated destructor stub
	cout << "����� ����������� Screen" << endl;
}

