/*
* @file GraphScreen.cpp
* ̳����� ��������� ����� GraphScreen
* @date 2017.09.17
* @author shcherbinina
*/

#include "GraphScreen.h"
#include "Capacity.h"
#include "Screen.h"
///�����������
GraphScreen::GraphScreen()
{
	cout << "GraphScreen constructor\n";
}

///����������
GraphScreen::~GraphScreen()
{
	cout << "GraphScreen destructor\n";
}

//����������� ��� ��� �����
GraphScreen::GraphScreen(Capacity* capacity) : BaseView(capacity) {
	cout << "GraphScreen constructor with parametrs\n";
}

///������� ���� ��'����-������� �����
void GraphScreen::setDataSource(Capacity* capacity){
	this->data = capacity;
}

///������� ����������� �����
void GraphScreen::printData(Capacity* capacity){
	Screen view(capacity);
	view.view();
	cout << "\n              |-------------------------------|\n";
	cout << "            |------------------------------|--|\n";
	cout << "            | |                            |  |\n";
	cout << "            | |                            |  |\n";
	cout << "            | ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|^^|\n";
	cout << "            |^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|  |\n";
	cout << "            | |                            |  |\n";
	cout << "            | |                            |  |\n";
	cout << "            | |                            |  |\n";
	cout << "            | |                            |  |\n";
	cout << "            | |                            |  |\n";
	cout << "            | |                            |  |\n";
	cout << "            | |_ _ _ _ _ _ _ _ _ _ _ _ _ _ |_ |\n";
	cout << "            |/                             | /\n";
	cout << "            |______________________________|/\n";
	
}

///������� ����������� �����  ��� ����� ��'����
void GraphScreen::printData(){
	printData(this->data);
}

//�������� ��������� �����������
void GraphScreen::showHeader()
{
	cout << "\n================================\n";
	cout << "\n      GraphScreen output\n";
	cout << "\n================================\n";
}
///�������� ������� ���������� ��� ��'���
void GraphScreen::showContent()
{
	printData();
}
///�������� ����� ���������� �����������
void GraphScreen::showFooter()
{
	cout << "\n________________________________\n";
}