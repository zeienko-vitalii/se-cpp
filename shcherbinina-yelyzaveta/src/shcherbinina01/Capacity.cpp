/*
 * Capacity.cpp
 * Created on: 10 ����. 2017 �.
 * Author: shcherbinina
 * Description: Capacity implementation
 */

#include "Capacity.h"
#include <Windows.h>

//����������� ��� ���������
Capacity::Capacity() {
	_unit = F;
	v = 0;

}
//����������� ���������
Capacity::Capacity(const Capacity& _Capacity){
	_unit = _Capacity._unit;
	v = _Capacity.v;
}
//����������
Capacity::~Capacity() {
	OutputDebugString("Destructor is called\n");
}
//����������� �� �����������
Capacity::Capacity(unit unitc, float _v){
	_unit = unitc;
	v = _v;
}
