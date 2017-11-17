/**
 * @file GraphScreen.h
 * @brief ������ �������� ������ GraphScreen
 * @author Kirnos Serhii
 * @version 0
 * @date 22.10.17
 */

#pragma once
#include "Room.h"
#include "RoomHousing.h"
#include "BaseView.h"
#include "TimerParam.h"
#include <iomanip>
#include <iostream>
using namespace std;

/**
 * ����� ������������ ��� ������ ������� ������ Screen ��������� �������������.
 */
class GraphScreen: public BaseView {
public:
	/***
	 * ����������� ��� ����������
	 * @remark ����������� ��������� ���� ������
	 */
	GraphScreen();
	/**
	 * ����������� � ����������
	 * @param R ������ �� ������ ���� ��������� �����
	 */
	GraphScreen(const Room& R);
	/**
	 * ����������� �����������.
	 * @param S ������ �����������
	 */
	GraphScreen(const GraphScreen& S);
	/**
	 * ����������.
	 */
	~GraphScreen();

	/**
	 * ������ ������ ��� ������.
	 * @param R ����� �������� ������
	 */
	void SetDataSource(const Room *R);

	/**
	 * ������� ���������� � ��������� � �������� ��������� �������
	 * @param R ������� ���������� � ������� ���� �������
	 */
	void PrintData(const Room& R);

	/**
	 * ������� ���������� � ������� �� ������� ��������� ��������� room
	 */
	void PrintData();

	void ShowHeader();
	void ShowContent();
	void ShowFooter();

	static void CALLBACK onTimerAction(PTP_CALLBACK_INSTANCE instance, PVOID param,
			PTP_TIMER timer);
};

