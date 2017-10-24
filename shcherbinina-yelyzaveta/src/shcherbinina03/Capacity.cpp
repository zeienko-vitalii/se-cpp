/*
* @file Capacity.cpp
* Містить реалізацію класа Capacity
* @date 2017.09.17
* @author shcherbinina
*/

#include "Capacity.h"
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

///Конструктор без параметра
Capacity::Capacity() : unit(ml), v(1){
	cout << "Capacity constructor\n";
}

///Конструктор копіювання
Capacity::Capacity(const Capacity& capacity) : unit(capacity.unit), v(capacity.v){
	cout << "Capacity copy constructor\n";
}
///Конструктор із параметрами
Capacity::Capacity(units _unit, float _v) : unit(_unit), v(_v){
	cout << "Capacity constructor with parametrs\n";
}

///Деструктор
Capacity::~Capacity() {
	cout << "Capacity destructor\n";
}
///Встановлює значення одиниці вимірювання
void Capacity::setUnit(units unit) {
	this->unit = unit;
}
///Повертає значення одиниці вимірювання
units Capacity::getUnit(){
	return this->unit;
}
///Функція для знаходження площі циліндричної тари
const float Capacity::square(float height){
	double r = 0;
	r = sqrt(v/(3.14*height));
	switch (unit){
	case ml: r = r/1000000; break;
	case l: r = r/1000; break;
	case cubicMeter: break;
	}
		return ( 6.18*r*height);
}
///Перевантаження оператора виводу для коректного відображення об'єкта класу
ostream& operator <<(ostream& out, Capacity capacity){
	switch (capacity.unit){
	case ml: return (out << "Об'єм = " << capacity.v << " мл" << endl); break;
	case l: return (out << "Об'єм = " << capacity.v << " л" << endl); break;
	case cubicMeter: return (out << "Об'єм = " << capacity.v << " м^3" << endl); break;
	}
	return out;
}
///
string Capacity::toString(){
	string tmp;
	tmp += "\nОб'єм = " + to_string(v);
	switch (getUnit()){
	case l:
		tmp += " l";
		break;
	case ml:
		tmp += " ml";
		break;
	case cubicMeter:
		tmp += " m3";
		break;
	}
	tmp += "\nПлоща тари = ";
	tmp += to_string(square(1));
	tmp += " м^2\n";
	return tmp;
}