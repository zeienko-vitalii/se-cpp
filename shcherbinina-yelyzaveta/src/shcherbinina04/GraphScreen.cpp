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
GraphScreen::GraphScreen()
{
	cout << "GraphScreen constructor\n";
}

///Деструктор
GraphScreen::~GraphScreen()
{
	cout << "GraphScreen destructor\n";
}

//Конструктор для всіх полей
GraphScreen::GraphScreen(Capacity* capacity) : BaseView(capacity) {
	cout << "GraphScreen constructor with parametrs\n";
}

///Функція зміни об'єкта-джерела даних
void GraphScreen::setDataSource(Capacity* capacity){
	this->data = capacity;
}

///Функція відображення даних
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

///Функція відображення даних  для цього об'єкта
void GraphScreen::printData(){
	printData(this->data);
}

//Виводить заголовок відображення
void GraphScreen::showHeader()
{
	cout << "\n================================\n";
	cout << "\n      GraphScreen output\n";
	cout << "\n================================\n";
}
///Виводить головну інформацію про об'єкт
void GraphScreen::showContent()
{
	printData();
}
///Виводить нижній колонтитул відображення
void GraphScreen::showFooter()
{
	cout << "\n________________________________\n";
}

void GraphScreen::onTimerAction(Capacity data){
	Screen view((&data));
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