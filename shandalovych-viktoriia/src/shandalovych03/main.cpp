/*
 * @file main.cpp �������� ����� ����� � ���������.
 * @date 10 ����. 2017 �.
 * @Author: Viktotia
 */
#include <iostream>
#include<string>
#include "Wheel.h"
#include "AutoWheel.h"
#include "BaseScreen.h"
#include "Screen.h"
#include "GraphScreen.h"
#include "AutoWheelScreen.h"


using namespace std;


int main(void) {

	//��������� ��� ������������� ������� �������.
	const int DIAMETER = 20;
	const int WIDTH = 10;
	const string UNIT = "��";
	

	Wheel data( DIAMETER, WIDTH, UNIT);
	AutoWheel data2(DIAMETER, WIDTH, UNIT, "TEST", "TEST");

	Screen screen(&data);

	//screen.display();

	GraphScreen view2(&data);
	//view2.display();

	AutoWheelScreen view3(&data2);
	view3.display();

	return 0;
}
