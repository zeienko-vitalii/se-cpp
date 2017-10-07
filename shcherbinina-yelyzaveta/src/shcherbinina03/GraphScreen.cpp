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
GraphScreen::GraphScreen() : capacity()
{
	cout << "GraphScreen constructor\n";
}

///����������
GraphScreen::~GraphScreen()
{
	cout << "GraphScreen destructor\n";
}

///������� ���� ��'����-������� �����
void GraphScreen::setDataSource(const Capacity* capacity){
	this->capacity = capacity;
}

///������� ����������� �����
void GraphScreen::printData(const Capacity& capacity){
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
	printData(*this->capacity);
}