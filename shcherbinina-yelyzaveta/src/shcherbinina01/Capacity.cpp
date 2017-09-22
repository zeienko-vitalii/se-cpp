/*
* @file Capacity.cpp
* ̳����� ��������� ����� Capacity
* @date 2017.09.10
* @author shcherbinina
*/

#include "Capacity.h"
#include <iostream>

using namespace std;

///����������� ��� ���������
Capacity::Capacity() : unit(l), v(1){
	cout << "Capacity constructor\n";
}
///����������
Capacity::~Capacity() {
	cout << "Capacity destructor\n";
}
///����������� ���������
Capacity::Capacity(const Capacity& capacity) : unit(capacity.unit), v(capacity.v){
	cout << "Capacity copy constructor\n";
}
///����������� �� �����������
Capacity::Capacity(units _unit, float _v) : unit(_unit), v(_v){
	cout << "Capacity constructor with parametrs\n";
}
///�������������� ��������� ������ ��� ���������� ����������� ��'���� �����
ostream& operator <<(ostream& out, Capacity capacity){
	switch (capacity.unit){
	case ml: return (out << "��'�� = " << capacity.v << " ��" << endl); break;
	case l: return (out << "��'�� = " << capacity.v << " �" << endl); break;
	}
	return out;
}