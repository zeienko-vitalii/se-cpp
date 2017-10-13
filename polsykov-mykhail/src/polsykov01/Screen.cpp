/**
 * @file Screen.cpp ���������� ������� Screen
 * Part of polshykov01
 * @author Mike
 * @version 0.0.1
 * @date 2017.01.01
 */
#include <iostream>
#include <string>

#include "Monitor.h"
#include "Screen.h"

using namespace std;

Screen::Screen() {
	// TODO Auto-generated constructor stub
	monitor;
}

Screen::Screen(Monitor monitor) :
		monitor(monitor) {
	cout << "����� ������������ Screen � ����������" << endl;
}

void Screen::dataOutput() {
	cout << "" << endl;
	cout << "ID ��������    : " << monitor.getId() << "  ;" << endl;
	cout << "��� �������    : " << monitor.getWeight() << "  ��; " << endl;
	cout << "��� ��������   : " << monitor.getType() << "  ; " << endl;
	cout << "������ ��������: " << monitor.getWide() << " ��; " << endl;
	cout << "������ ��������: " << monitor.getHigh() << " ��; " << endl;
	cout << "����� �������� : " << monitor.getDeep() << " ��; " << endl;
	cout << "" << endl;
}

Screen::~Screen() {
	// TODO Auto-generated destructor stub
	cout << "����� ����������� Screen" << endl;
}

