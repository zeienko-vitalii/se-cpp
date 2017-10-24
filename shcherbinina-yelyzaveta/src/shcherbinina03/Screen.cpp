/*
* @file Screen.cpp
* Містить реалізацію класа Screen
* @date 2017.10.03
* @author shcherbinina
*/


#include <iostream>
#include <string>
#include "Screen.h"

using namespace std;

///Конструктор без параметра
Screen::Screen() {
	cout << "Screen constructor\n";
}
///Конструктор для всіх полей
Screen::Screen(Capacity* capacity) : BaseView(capacity) {
	cout << "Screen constructor with parametrs\n";
}
///Деструктор
Screen::~Screen() {
	cout << "Screen destructor\n";
}

///Функція відображення даних об'єкта класу Capacity
void Screen::view() {
	cout << (*data).toString();	
}

///Виводить заголовок відображення
void Screen::showHeader()
{
	cout << "\n================================\n";
	cout << "\n        Screen output data\n";
	cout << "\n================================\n";
}
///Виводить головну інформацію про об'єкт
void Screen::showContent()
{
	view();
}
///Виводить нижній колонтитул відображення
void Screen::showFooter()
{
	cout << "\n________________________________\n";
}
