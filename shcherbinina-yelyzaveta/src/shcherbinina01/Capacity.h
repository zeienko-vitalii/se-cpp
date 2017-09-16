/*
 * Capacity.h
 * Created on: 10 ����. 2017 �.
 * Author: shcherbinina
 * Description: Capacity declaration
 */

#ifndef CAPACITY_H_
#define CAPACITY_H_

#include <Windows.h>
enum unit { F, mkF, nF, pF };

//CLASS DECLARATION
class Capacity {
public:
	/**
		 * ����������� ��� ���������
		 */
	Capacity();
	/**
		 * ����������� � �����������
		 * @param _unit ���� ������� ����������
		 * @param _v ���� ��'��
		 */
	Capacity(unit _unit, float _v);
	/**
		 * ����������� ���������
		 * @param _Capacity �������� ��'��� �� ������ ��� ���������
		 */
	Capacity(const Capacity& _Capacity);
	/**
		 * ����������
		 */
	~Capacity();
public:
	//������� ����������
	unit _unit;
	//��'��
	float v;
};

#endif /* CAPACITY_H_ */
