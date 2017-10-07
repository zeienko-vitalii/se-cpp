/*
* @file GraphScreen.cpp
* Містить реалізацію класа GraphScreen
* @date 2017.09.17
* @author shcherbinina
*/

#include "GraphScreen.h"
#include "Capacity.h"
#include "Screen.h"
///Конструктор
GraphScreen::GraphScreen() : capacity()
{
	cout << "GraphScreen constructor\n";
}

///Деструктор
GraphScreen::~GraphScreen()
{
	cout << "GraphScreen destructor\n";
}

///Функція зміни об'єкта-джерела даних
void GraphScreen::setDataSource(const Capacity* capacity){
	this->capacity = capacity;
}

///Функція відображення даних
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

///Функція відображення даних  для цього об'єкта
void GraphScreen::printData(){
	printData(*this->capacity);
}