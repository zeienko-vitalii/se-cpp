/*
* @file Capacity.cpp
* Містить реалізацію класа Capacity
* @date 2017.09.10
* @author shcherbinina
*/

#include "Capacity.h"
#include <iostream>

using namespace std;

///Конструктор без параметра
Capacity::Capacity() : unit(l), v(1){
	cout << "Capacity constructor\n";
}
///Деструктор
Capacity::~Capacity() {
	cout << "Capacity destructor\n";
}
///Конструктор копіювання
Capacity::Capacity(const Capacity& capacity) : unit(capacity.unit), v(capacity.v){
	cout << "Capacity copy constructor\n";
}
///Конструктор із параметрами
Capacity::Capacity(units _unit, float _v) : unit(_unit), v(_v){
	cout << "Capacity constructor with parametrs\n";
}
///Перевантаження оператора виводу для коректного відображення об'єкта класу
ostream& operator <<(ostream& out, Capacity capacity){
	switch (capacity.unit){
	case ml: return (out << "Об'єм = " << capacity.v << " мл" << endl); break;
	case l: return (out << "Об'єм = " << capacity.v << " л" << endl); break;
	}
	return out;
}