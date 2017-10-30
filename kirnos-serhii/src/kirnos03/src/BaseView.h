/**
 * @file BaseView.h
 * @brief ������ �������� ������ BaseView
 * @author Kirnos Serhii
 * @version 0
 * @date 30.10.17
 */

#pragma once
#include <iostream>
#include "Room.h"
#include "RoomHousing.h"
using namespace std;

/**
 * ������� �����, ������ ������ ������ ������� ������ Room � ��� �����������
 */
class BaseView {
protected:
	const Room* room;
public:
	/**
	 * ����������� ��� ����������
	 */
	BaseView() :
			room(nullptr) {
	}
	/**
	 * ����������� �����������
	 * @param R ������ �����������
	 */
	BaseView(const Room& R) :
			room(&R) {
	}
	/**
	 * ������� ����������� �������
	 */
	void Display() {
		ShowHeader();
		ShowContent();
		ShowFooter();
	}

	virtual ~BaseView() {
		cout << "~BaseView()" << endl;
	}

protected:
	virtual void ShowHeader() = 0;
	virtual void ShowContent() = 0;
	virtual void ShowFooter() = 0;
};
