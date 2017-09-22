/*
 * CScreen.cpp
 * Created on: 10 сент. 2017 г.
 * Author: shcherbinina
 * Description: CScreen implementation
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
	switch (capacity.unit){
	case ml: cout << "Об'єм = " << capacity.v << " мл" << endl; break;
	case l: cout << "Об'єм = " << capacity.v << " л" << endl; break;
	}
}
