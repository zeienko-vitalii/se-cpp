/*
 * @file Capacity.h
 * ̳����� ���� ��'���� ����� Capacity
 * @date 2017.09.17
 * @author shcherbinina
 */

#ifndef CAPACITY_H_
#define CAPACITY_H_

#include <iostream>
using namespace std;
enum units { ml, l, cubicMeter };

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
	/**
	* ���������� �������� ������� ����������
	* @param unit - ��������, �� ��������������
	*/
	void setUnit(units unit);
	/**
	* ������� �������� ������� ����������
	*/
	units getUnit();
	/**
	* ������� ��� ����������� ����� ���������� ����
	*/
	const float square(float height);
	///��'��
	float v;
private:
	///������� ����������
	units unit;
	
};

#endif /* CAPACITY_H_ */
