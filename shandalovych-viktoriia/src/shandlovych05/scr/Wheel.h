/*
 * @file Wheel.h �������� �������� ������ "������".
 * @date 10 ����. 2017 �.
 * @Author: Viktotia
 */

#pragma once

#include <iostream>
#include <string>
#include <StorageInterface.h>
using namespace std;
/**
 * ����� ������� �������� �������� ������. <br>
 * diameter - ������� ������. <br>
 * width - ������ ������. <br>
 * unit - ������� ��������� �������� ������. <br>
 */
class Wheel: public MStorageInterface {
	/**
		 * ������ ��� � ����
		 * @param aStream ³������� ���� ��� ���������� �����
		 */
		virtual void OnStore(std::ostream& aStream);

		/**
		 * ��������� ��� �� ������
		 * @param aStream ³������� ���� ��� ������������ �����
		 */
		virtual void OnLoad(std::istream& aStream);
	/**
	 * ���������� ��������� ������ ��� ��������������� ������.
	 */
	friend ostream& operator <<(ostream& oSt, Wheel Wheel);

	/**
	 * ���������� ��������� �����.
	 */
	friend void operator >>(istream& iSt, Wheel &Wheel);
private:

///������� ���������.
	string unit;

public:
	///�������.
	int diameter;
	///������.
	int width;

	/**
	 *  ����������� ������ ��� ����������.
	 */
	Wheel();
	/**
	 * ����������.
	 */

	virtual ~Wheel();

	/**
	 * ����������� ��� ��������� ��������� ��������.
	 * @param diameter - ��������� �������� ��������.
	 * @param width - ��������� �������� ������.
	 * @param unit - ��������� �������� ������� ���������.
	 */
	Wheel(int diameter, int width, string unit);
	double volume() const;
	/**
	 * ������ �������� ������.
	 * @return ������� ������.
	 */
	int getdiameter();

	/**
	 * ������ ��������.
	 * @param diameter - ������� ������.
	 */
	void setdiameter(int diameter);

	/**
	 * ������ ������ ������.
	 * @return ������ ������.
	 */
	int getwidth();

	/**
	 * ������ ������.
	 * @param width - ������ ������.
	 */
	void setwidth(int width);

	/**
	 * ������ ������� ��������� ������.
	 * @return ������� ��������� ������.
	 */
	string getunit();

	/**
	 * ������ ������� ���������.
	 * @param unit - ������� ��������� ������.
	 */
	void setunit(string unit);

	virtual string ToString();
};
