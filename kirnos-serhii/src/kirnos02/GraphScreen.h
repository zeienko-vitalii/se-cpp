/**
 * @file GraphScreen.h
 * @brief ������ �������� ������ GraphScreen
 * @author Kirnos Serhii
 * @version 0
 * @date 22.10.17
 */

#pragma once
#include "Room.h"
#include <iomanip>
#include <iostream>
using namespace std;

/**
 * ����� ������������ ��� ������ ������� ������ Screen ��������� �������������.
 */
class GraphScreen {
private:
	const Room* room;
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
	void PrintData(const Room& R) const;

	/**
	 * ������� ���������� � ������� �� ������� ��������� ��������� room
	 */
	void PrintData();

};

