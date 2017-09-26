/*
 * @file Wheel.h
 * �������� �������� ������ "������".
 * @date 10 ����. 2017 �.
 * @Author: Viktotia
 */

#pragma once

#include <iostream>
#include <string.h>
using namespace std;
/**
 * ����� ������� �������� �������� ������. <br>
 * diametr - ������� ������. <br>
 * width - ������ ������. <br>
 * unit - ������� ��������� �������� ������. <br>
 */
class Wheel {
	/**
	 * ���������� ��������� ������ ��� ��������������� ������.
	 */
	friend ostream& operator <<(ostream& oSt, Wheel Wheel);

	/**
	 * ���������� ��������� �����.
	 */
	friend void operator >>(istream& iSt, Wheel &Wheel);
private:
///�������.
	int diameter;
///������.
	int width;
///������� ���������.
	string unit;

public:
	/**
	 *  ����������� ������ ��� ����������.
	 */
	Wheel();
	/**
	 * ����������.
	 */

	~Wheel();

	/**
	 * ����������� ��� ��������� ��������� ��������.
	 * @param diametr - ��������� �������� ��������.
	 * @param width - ��������� �������� ������.
	 * @param unit - ��������� �������� ������� ���������.
	 */
	Wheel(int diameter, int width, string unit);

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

};
