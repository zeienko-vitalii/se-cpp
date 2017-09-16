/*
 * Capacity.cpp
 * Created on: 10 сент. 2017 г.
 * Author: shcherbinina
 * Description: Capacity implementation
 */

#include "Capacity.h"
#include <Windows.h>

//Конструктор без параметра
Capacity::Capacity() {
	_unit = F;
	v = 0;

}
//Конструктор копіювання
Capacity::Capacity(const Capacity& _Capacity){
	_unit = _Capacity._unit;
	v = _Capacity.v;
}
//Деструктор
Capacity::~Capacity() {
	OutputDebugString("Destructor is called\n");
}
//Конструктор із параметрами
Capacity::Capacity(unit unitc, float _v){
	_unit = unitc;
	v = _v;
}
