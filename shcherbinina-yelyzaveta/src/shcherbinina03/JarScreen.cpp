#include "JarScreen.h"
#include <string>
#include <iostream>
using namespace std;
///����������� ��� ���������
JarScreen::JarScreen()
{
	cout << "JarScreen constructor\n";
}

///����������
JarScreen::~JarScreen()
{
	cout << "JarScreen destructor\n";
}

///����������� ��� ��� �����
JarScreen::JarScreen(Jar data) : data(data), Screen(data)
{
	cout << "JarScreen constructor with parametrs\n";
}

///������� ����������� ����� ��'���� ����� Jar
void JarScreen::viewJar()
{
	cout << "��� ������ = " << data.getTypeOfCap() << endl;
	cout << "������� = " << data.getMaterial() << endl;
}

///�������� ��������� �����������
void JarScreen::showHeader()
{
	cout << "\n================================\n";
	cout << "\n        Jar data\n";
	cout << "\n================================\n";
}
///�������� ������� ���������� ��� ��'���
void JarScreen::showContent()
{
	view();
	viewJar();
}
///�������� ����� ���������� �����������
void JarScreen::showFooter()
{
	cout << "\n________________________________\n";
}