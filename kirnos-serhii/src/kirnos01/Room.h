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
	double height;
	double width;
	double length;

	/**
	 * ����������� ��� ���������.
	 */
	Room();

	/**
	 * ����������� � �����������.
	 * @param H ������
	 * @param W ������
	 * @param L �������
	 */
	Room(int H, int W, int L);

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
	 * ��������� ���� Room::height
	 * @param H ��������� � height
	 */
	void SetHeight(double H);

	/**
	 * ��������� ���� Room::width
	 * @param W ��������� � width
	 */
	void SetWidth(double W);

	/**
	 * ��������� ���� Room::length
	 * @param L ��������� � length
	 */
	void SetLength(double L);
};
