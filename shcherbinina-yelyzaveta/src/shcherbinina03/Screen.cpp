/*
* @file Screen.cpp
* Містить реалізацію класа Screen
* @date 2017.10.03
* @author shcherbinina
*/


#include <iostream>
#include "Screen.h"

using namespace std;

///Конструктор без параметра
Screen::Screen() {
	cout << "Screen constructor\n";
}
///Конструктор для всіх полей
Screen::Screen(Capacity capacity) : capacity(capacity) {
	cout << "Screen constructor with parametrs\n";
}
///Деструктор
Screen::~Screen() {
	cout << "Screen destructor\n";
}

///Функція відображення даних об'єкта класу Capacity
void Screen::view() {
	switch (capacity.getUnit()){
	case ml: cout << "\nОб'єм = " << capacity.v << " мл" << endl;
		cout << "Площа тари = " << capacity.square(1) * 10000 << " cм^2\n";
		break;
	case l: cout << "\nОб'єм = " << capacity.v << " л" << endl; 
		cout << "Площа тари = " << capacity.square(1) << " м^2\n";
		break;
	case cubicMeter: 
		cout << "\nОб'єм = " << capacity.v << " м^3" << endl;
		cout << "Площа тари = " << capacity.square(1) << " м^2\n";
		break;
	}
	
}

///Виводить заголовок відображення
void Screen::showHeader()
{
	cout << "\n================================\n";
	cout << "\n        Capacity data\n";
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