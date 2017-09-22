/*
 * @file Capacity.h
 * ̳����� ���� ��'���� ����� Capacity
 * @date 2017.09.10
 * @author shcherbinina
 */

#ifndef CAPACITY_H_
#define CAPACITY_H_

#include <iostream>
using namespace std;
enum units { ml, l };

/**
* ����, �� ������ ��������� ������.
*/
class Capacity {
	/**
	* �������������� ��������� ������ ��� ���������� ����������� ��'���� �����
	* @param out - ����� ������
	* @param capacity - ��'���, �� ����������
	* @return ������������ ����� �� ������
	*/
	friend ostream& operator <<(ostream& out, Capacity capacity);
public:
	/**
		 * ����������� ��� ���������
		 */
	Capacity();
	/**
		 * ����������� � �����������
		 * @param _unit - ���� ������� ����������
		 * @param _v - ���� ��'��
		 */
	Capacity(units _unit, float _v);
	/**
		 * ����������� ���������
		 * @param _Capacity - �������� ��'��� �� ������ ��� ���������
		 */
	Capacity(const Capacity& _Capacity);
	/**
		 * ����������
		 */
	virtual ~Capacity();
public:
	///������� ����������
	units unit;
	///��'��
	float v;
};

#endif /* CAPACITY_H_ */
