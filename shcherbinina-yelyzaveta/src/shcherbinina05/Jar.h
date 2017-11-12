/*
* @file Jar.h
* ̳����� ���� ��'���� ����� Jar
* @date 2017.10.01
* @author shcherbinina
*/
#pragma once
#include "Capacity.h"
/**
* ����, �� ������ ��������� �����
*/
class Jar :
	public Capacity
{
private:
	///��� ������
	string typeOfCap;
	///�������
	string material;
public:
	/**
	* ����������� ��� ���������
	*/
	Jar();
	/**
	* ����������� � ����������� ��� ������� ����
	*/
	Jar(string typeOfCap, string material);
	/**
	* ����������� ���������
	*/
	Jar(const Jar& jar);
	/**
	* ����������� � ����������� ��� ������� ���� � ���, �� �������������
	*/
	Jar(units unit, float v, string typeOfCap, string material);
	/**
	* ����������
	*/
	virtual ~Jar();
	/**
	* ������ ��� ���� ������
	* @param ������������ �������� ���� ������
	*/
	void setTypeOfCap(string typeOfCap);
	/**
	* ������ ��� ���� ������
	* @return ��� ������
	*/
	string getTypeOfCap();
	/**
	* ������ ��� ���� ��������
	* @param ������������ �������� ��������
	*/
	void setMaterial(string material);
	/**
	* ������ ��� ���� ��������
	* @return �������
	*/
	string getMaterial();
	/**
	*
	*/
	virtual string toString();
	/**
	*
	*/
	void setData(string data);
	/**
	*
	*/
	void setData(const string& data);
	/**
	*
	*/
	void operator = (int data);
	virtual void OnStore(ostream& aStream);
	virtual void OnLoad(istream& aStream);
	virtual string toBitsetString();
};

