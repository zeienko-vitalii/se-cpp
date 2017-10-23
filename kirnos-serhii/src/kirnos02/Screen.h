/**
* @file Screen.h
* @brief ������ �������� ������ Screen
* @author Kirnos Serhii
* @version 0
* @date 22.10.17
*/

#pragma once
#include "Room.h"
#include <iostream>
using namespace std;

/**
 * ����� ������������ ��� ������ ������� ������ Screen.
 */
class Screen
{
public:

	Room room;

	/**
	 * ����������� ��� �����������.
	 */
	Screen();

	/**
	 * ����������� � ����������
	 * @param r ������ �� ������ ���� ��������� �����
	 */
	Screen(Room r);

	/**
	 * ����� Room::room.
	 */
	void ShowContent();

	/**
	 * ����������� �����������.
	 * @param s ������ �����������
	 */
	Screen(const Screen& s);

	/**
	 * ����������
	*/
	~Screen();
};
