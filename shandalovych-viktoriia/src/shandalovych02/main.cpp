/*
 * @file main.cpp �������� ����� ����� � ���������.
 * @date 10 ����. 2017 �.
 * @Author: Viktotia
 */
#include <iostream>
#include "Wheel.h"
#include "Screen.h"
#include "GraphScreen.h"



using namespace std;


int main(void) {

	//��������� ��� ������������� ������� �������.
	const int DIAMETER = 20;
	const int WIDTH = 10;
	const string UNIT = "��";
	

	Wheel data( DIAMETER, WIDTH, UNIT);

	Screen screen(data);

	screen.ViewWheel();

	GraphScreen view2(&data);
	view2.PrintData();

	return 0;
}
