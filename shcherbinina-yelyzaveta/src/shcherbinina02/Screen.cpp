/*
* @file Screen.cpp
* ̳����� ��������� ����� Screen
* @date 2017.09.17
* @author shcherbinina
*/


#include <iostream>
#include "Screen.h"

using namespace std;

///����������� ��� ���������
Screen::Screen() {
	cout << "Screen constructor\n";
}
///����������� ��� ��� �����
Screen::Screen(Capacity capacity) : capacity(capacity) {
	cout << "Screen constructor with parametrs\n";
}
///����������
Screen::~Screen() {
	cout << "Screen destructor\n";
}

///������� ����������� ����� ��'���� ����� Capacity
void Screen::view() {
	switch (capacity.getUnit()){
	case ml: cout << "\n��'�� = " << capacity.v << " ��" << endl;
		cout << "����� ���� = " << capacity.square(1) * 10000 << " c�^2\n";
		break;
	case l: cout << "\n��'�� = " << capacity.v << " �" << endl; 
		cout << "����� ���� = " << capacity.square(1) << " �^2\n";
		break;
	case cubicMeter: 
		cout << "\n��'�� = " << capacity.v << " �^3" << endl;
		cout << "����� ���� = " << capacity.square(1) << " �^2\n";
		break;
	}
	
}
