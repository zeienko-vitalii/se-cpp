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
JarScreen::JarScreen(Jar* data) : Screen(data)
{
	cout << "JarScreen constructor with parametrs\n";
}

///������� ����������� ����� ��'���� ����� Jar
void JarScreen::viewJar()
{
	cout << (*data).toString();
}

///�������� ��������� �����������
void JarScreen::showHeader()
{
	cout << "\n================================\n";
	cout << "\n        JarScreen output\n";
	cout << "\n================================\n";
}
///�������� ������� ���������� ��� ��'���
void JarScreen::showContent()
{
	viewJar();
}
///�������� ����� ���������� �����������
void JarScreen::showFooter()
{
	cout << "\n________________________________\n";
}