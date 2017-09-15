/*
 * Manipulator.h
 *
 *  Created on: 5 ����. 2017 �.
 *      Author: ����
 */
#pragma once
using namespace std;
#ifndef MANIPULATOR_H_
#define MANIPULATOR_H_
/**
 * �����, ���� ����� ��`��� ������
 */
class Manipulator {
public:

	//ʳ������� ������
	int count;

	//��� �������
	string type;

public:

	/**
	 * ����������� �����
	 * ����������� ��� ���������
	 */
	Manipulator();

	/**
	 * ����������� �� �����������
	 * @param count ������� ������
	 * @param type ��� �������
	 */
	Manipulator(int count, string type);

	/**
	 * ��������� ������� ������
	 * @return ������� ������
	 */
	int getCount();

	/**
	 * ��������� ���� �������
	 * @return ��� �������
	 */
	string getType();

	/**
	* ��������� ������� ������
	* @param count ������������ ���� count
	*/
	void setCoutn(int count);

	/**
	* ��������� ���� �������
	* @param type ������������ ���� type
	*/
	void setType(string type);

	/**
	 * ����������
	 */
	virtual ~Manipulator();
};


#endif /* MANIPULATOR_H_ */
