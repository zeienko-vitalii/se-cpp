/*
 * @file main.cpp
 * �������� ����� ����� � ���������.
 * @date 10 ����. 2017 �.
 * @Author: Viktotia
 */
#include <iostream>
#include "Wheel.h"
#include "Screen.h"



using namespace std;


int main(void) {

	//��������� ��� ������������� ������� �������.
	const int diameter = 20;
	const int width = 10;
	const string unit = "��";
	

	Wheel data( diameter, width, unit);

	Screen screen(data);

	screen.ViewWheel();

	return 0;
}
