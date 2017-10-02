/**
* @file View1.h
* @brief ̳����� ���� Screen
* @author Kirnos Serhii
* @version 0
* @date 18.09.17
*/

#pragma once
#include "Room.h"

/**
 * ���� ����������� ��� ��������� ��'���� ����� Screen.
 */
class Screen
{
public:

	Room room;

	/**
	 * ����������� ��� ���������.
	 */
	Screen();

	/**
	 * ����������� � ����������, �� ��������� ����� ���������� ���������� ���� Room �� Screen
	 * @param r ��'��� �� ����� � ���� ����������� �����
	 */
	Screen(Room r);

	/**
	 * ��������� Room::room.
	 */
	void ShowContent();

	/**
	 * ����������� ���������.
	 * @param s ��'��� ���������
	 */
	Screen(const Screen& s);

	/**
	 * ����������
	*/
	~Screen();
};
