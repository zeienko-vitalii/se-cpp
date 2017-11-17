/**
 * @file Screen.h
 * @brief ������ �������� ������ Screen
 * @author Kirnos Serhii
 * @version 0
 * @date 30.10.17
 */

#pragma once
#include "Room.h"
#include "RoomHousing.h"
#include "BaseView.h"
#include <iostream>
using namespace std;

/**
 * ����� ������������ ��� ������ ������� ������ Screen.
 */
class Screen: public BaseView {
public:
	/**
	 * ����������� ��� �����������.
	 */
	Screen();
	/**
	 * ����������� � ����������
	 * @param r ������ �� ������ ���� ��������� �����
	 */
	Screen(const Room& R);
	/**
	 * ����������� �����������.
	 * @param s ������ �����������
	 */
	Screen(const Screen& s);

	void ShowHeader();
	/**
	 * ����� Room::room.
	 */
	void ShowContent();
	void ShowFooter();

	/**
	 * ����������
	 */
	~Screen();
};
