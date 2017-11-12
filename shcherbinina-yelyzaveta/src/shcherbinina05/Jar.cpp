/*
* @file Jar.cpp
* ̳����� ��������� ����� Jar
* @date 2017.10.01
* @author shcherbinina
*/
#include "Jar.h"
#include <string>
#include <bitset>
using namespace std;

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
///������� ������ 
string Jar::toString()
{
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
	tmp += "\n��� ������ - " + getTypeOfCap();
	tmp += "\n�����i�� - " + getMaterial() + "\n";
	return tmp;
}
///
void Jar::setData(string data){
	this->setTypeOfCap(data);
}
///
void Jar::setData(const string& data){
	this->setMaterial(data);
}
///
void Jar::operator = (int data){
	switch (data){
	case 1:
		this->setTypeOfCap("�����������");
		break;
	case 2:
		this->setTypeOfCap("����������");
		break;
	case 3:
		this->setTypeOfCap("��������");
		break;
	default:
		this->setTypeOfCap("��������");
	}
}

void Jar::OnStore(ostream& aStream){
	aStream << toBitsetString();
}

void Jar::OnLoad(istream& aStream){
	Capacity::OnLoad(aStream);
	string tmpStr;
	bitset<8> input;

	while (aStream.get() != ' ') {
		aStream >> input;
		tmpStr += (char)input.to_ulong();
	}
	this->setMaterial(tmpStr);
	tmpStr.clear();

	while (aStream.get() != ' ') {
		aStream >> input;
		tmpStr += (char)input.to_ulong();
	}
	this->setTypeOfCap(tmpStr);
}

string Jar::toBitsetString(){
	string res = Capacity::toBitsetString();
	for (unsigned int i = 0; i < this->getMaterial().length(); i++) {
		res += bitset<9>(this->getMaterial().at(i)).to_string();
	}
	res += " ";
	for (unsigned int i = 0; i < this->getTypeOfCap().length(); i++) {
		res += bitset<9>(this->getTypeOfCap().at(i)).to_string();
	}
	res += " ";
	return res;
}