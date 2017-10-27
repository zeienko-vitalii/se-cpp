/*
* @file Capacity.cpp
* ̳����� ��������� ����� Capacity
* @date 2017.09.17
* @author shcherbinina
*/

#include "Capacity.h"
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

///����������� ��� ���������
Capacity::Capacity() : unit(ml), v(1){
	cout << "Capacity constructor\n";
}

///����������� ���������
Capacity::Capacity(const Capacity& capacity) : unit(capacity.unit), v(capacity.v){
	cout << "Capacity copy constructor\n";
}
///����������� �� �����������
Capacity::Capacity(units _unit, float _v) : unit(_unit), v(_v){
	cout << "Capacity constructor with parametrs\n";
}

///����������
Capacity::~Capacity() {
	cout << "Capacity destructor\n";
}
///���������� �������� ������� ����������
void Capacity::setUnit(units unit) {
	this->unit = unit;
}
///������� �������� ������� ����������
units Capacity::getUnit(){
	return this->unit;
}
///������� ��� ����������� ����� ���������� ����
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
///�������������� ��������� ������ ��� ���������� ����������� ��'���� �����
ostream& operator <<(ostream& out, Capacity capacity){
	switch (capacity.unit){
	case ml: return (out << "��'�� = " << capacity.v << " ��" << endl); break;
	case l: return (out << "��'�� = " << capacity.v << " �" << endl); break;
	case cubicMeter: return (out << "��'�� = " << capacity.v << " �^3" << endl); break;
	}
	return out;
}
///
string Capacity::toString(){
	string tmp;
	tmp += "\n��'�� = " + to_string(v);
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
	tmp += "\n����� ���� = ";
	tmp += to_string(square(1));
	tmp += " �^2\n";
	return tmp;
}
///
bool Capacity::operator >= (Capacity data){
	bool result;
	if (this->getUnit() == data.getUnit() || (this->getUnit() == 0 && data.getUnit() == 2) || (this->getUnit() == 2 && data.getUnit() == 1)){
		if (this->v >= data.getUnit())
			result = true;
		else result = false;
	}
	else if ((this->getUnit() == 2 || this->getUnit() == 0) && data.getUnit() == 1)
			result = true;
	else result = false;
	return result;
}