/**
* @file Room.h
* @brief  ̳����� ���� Room
* @author Kirnos Serhii
* @version 0
* @date 18.09.17
*/

#pragma once
#include <iostream>
#include <Windows.h>

using namespace std;

/**
 * ���� ����� ������ 3 ������� ��
 */
class Room
{
public:
	double *field1_data1;
	double *field2_data1;
	double *field3_data1;

	/**
	 * ����������� ��� ���������.
	 */
	Room();

	/**
	 * ����������� � �����������.
	 * @param a ������
	 * @param b �������
	 * @param c ������
	 */
	Room(int a, int b, int c);

	/**
	 * ����������� ���������
	 * @param r ��'��� �� ����� � ���� ����������� �����
	 */
	Room(const Room& r);

	/**
	 * ����������
	 */
	~Room();

	/**
	 * ��������� ���� Room::field1_data1
	 * @param d ��������� � field1_data1
	 */
	void SetField1_data1(double d);

	/**
	 * ��������� ���� Room::field2_data1
	 * @param d ��������� � field2_data1
	 */
	void SetField2_data1(double d);

	/**
	 * ��������� ���� Room::field3_data1
	 * @param d ��������� � field3_data1
	 */
	void SetField3_data1(double d);
};
