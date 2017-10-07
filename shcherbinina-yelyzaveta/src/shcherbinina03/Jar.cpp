/*
* @file Jar.cpp
* ̳����� ��������� ����� Jar
* @date 2017.10.01
* @author shcherbinina
*/
#include "Jar.h"

///����������� ��� ���������
Jar::Jar() : Capacity(), typeOfCap("��������"), material("����")
{
	cout << "Jar constructor\n";
}

///����������
Jar::~Jar()
{
	cout << "Jar destructor\n";
}

///����������� ���������
Jar::Jar(const Jar& jar) : typeOfCap(jar.typeOfCap), material(jar.material)
{
	cout << "\nJar copy constructor\n";
}
///����������� � ����������� ��� ������� ����
Jar::Jar(string typeOfCap, string material) : typeOfCap(typeOfCap), material(material)
{
	cout << "Jar constructor with parametrs\n";
}
///����������� � ����������� ��� ������� ���� � ���, �� ������������� 
Jar::Jar(units unit, float v, string typeOfCap, string material) :	Capacity(unit, v), typeOfCap(typeOfCap), material(material)
{
	cout << "Jar and Capacity constructor with parametrs\n";
}
///������ ��� ���� ������
void Jar::setTypeOfCap(string typeOfCap)
{
	this->typeOfCap = typeOfCap;
}
///������ ��� ���� ������
string Jar::getTypeOfCap()
{
	return typeOfCap;
}
///������ ��� ���� ��������
void Jar::setMaterial(string material)
{
	this->material = material;
}
///������ ��� ���� ��������
string Jar::getMaterial()
{
	return material;
}