/*
 * CScreen.cpp
 * Created on: 10 ����. 2017 �.
 * Author: shcherbinina
 * Description: CScreen implementation
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
	switch (capacity.unit){
	case ml: cout << "��'�� = " << capacity.v << " ��" << endl; break;
	case l: cout << "��'�� = " << capacity.v << " �" << endl; break;
	}
}
