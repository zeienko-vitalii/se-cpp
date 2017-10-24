/*
* @file Screen.cpp
* ̳����� ��������� ����� Screen
* @date 2017.10.03
* @author shcherbinina
*/


#include <iostream>
#include <string>
#include "Screen.h"

using namespace std;

///����������� ��� ���������
Screen::Screen() {
	cout << "Screen constructor\n";
}
///����������� ��� ��� �����
Screen::Screen(Capacity* capacity) : BaseView(capacity) {
	cout << "Screen constructor with parametrs\n";
}
///����������
Screen::~Screen() {
	cout << "Screen destructor\n";
}

///������� ����������� ����� ��'���� ����� Capacity
void Screen::view() {
	cout << (*data).toString();	
}

///�������� ��������� �����������
void Screen::showHeader()
{
	cout << "\n================================\n";
	cout << "\n        Screen output data\n";
	cout << "\n================================\n";
}
///�������� ������� ���������� ��� ��'���
void Screen::showContent()
{
	view();
}
///�������� ����� ���������� �����������
void Screen::showFooter()
{
	cout << "\n________________________________\n";
}
