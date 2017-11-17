/**
 * @file RoomHousing.h
 * @brief ������ �������� ������ RoomHousing
 * @author Kirnos Serhii
 * @version 0
 * @date 30.10.17
 */

#pragma once
#include "Room.h"
#include "AppointmentRoom.h"
#include <iostream>
#include <windows.h>
using namespace std;

/**
 * ����� ����������� ������� � ������� � �������
 */
class RoomHousing: public Room {
private:
	char *name; /// ��� �������
	int numberOfSeats;	/// ���������� ������
	AppointmentRoom appointment; /// �������������� �������
public:
	RoomHousing(int H, int W, int L, const char *NAME, int NS,
			AppointmentRoom A) ;

	RoomHousing(const RoomHousing& RH) ;

	~RoomHousing();

	const char* getNmae() const ;

	int getNumberOfSeats() const ;

	AppointmentRoom getAppointment() const ;

	/**
	 * �������� ���� ���������� ������
	 * @param NS ����� ���������� ������
	 */
	void SetData(int NS);
	/**
	 * �������� �������������� �������
	 * @param A ����� �������������� �������
	 */
	void SetData(AppointmentRoom A);

	/**
	 * ���������� �������� = ��� ������������ ����� �������
	 * @param newNmae ��������� �� ����� ��� �������
	 * @return ��� �������
	 */
	const char* operator =(const char*);
};
