/*
* @file Jar.cpp
* Містить реалізацію класа Jar
* @date 2017.10.01
* @author shcherbinina
*/
#include "Jar.h"
#include <string>

using namespace std;

///Конструктор без параметрів
Jar::Jar() : Capacity(), typeOfCap("Накладна"), material("Скло")
{
	cout << "Jar constructor\n";
}

///Деструктор
Jar::~Jar()
{
	cout << "Jar destructor\n";
}

///Конструктор копіювання
Jar::Jar(const Jar& jar) : typeOfCap(jar.typeOfCap), material(jar.material)
{
	cout << "\nJar copy constructor\n";
}
///Конструктор з параметрами для власних полів
Jar::Jar(string typeOfCap, string material) : typeOfCap(typeOfCap), material(material)
{
	cout << "Jar constructor with parametrs\n";
}
///Конструктор з параметрами для власних полів і тих, що унаслідовались 
Jar::Jar(units unit, float v, string typeOfCap, string material) :	Capacity(unit, v), typeOfCap(typeOfCap), material(material)
{
	cout << "Jar and Capacity constructor with parametrs\n";
}
///Сеттер для типу кришки
void Jar::setTypeOfCap(string typeOfCap)
{
	this->typeOfCap = typeOfCap;
}
///Геттер для типу кришки
string Jar::getTypeOfCap()
{
	return typeOfCap;
}
///Сеттер для поля матеріалу
void Jar::setMaterial(string material)
{
	this->material = material;
}
///Геттер для поля матеріалу
string Jar::getMaterial()
{
	return material;
}
///Повертає строку 
string Jar::toString()
{
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
	tmp += "\nТип кришки - " + getTypeOfCap();
	tmp += "\nМатерiал - " + getMaterial() + "\n";
	return tmp;
}