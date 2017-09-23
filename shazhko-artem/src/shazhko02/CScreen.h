/**
* @file CScreen.h
* @brief �������� ���������� ������  CScreen
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#pragma once
#include "CWheel.h"

class CScreen {
public:
	/**
	* ����������� ��-���������
	*/
	CScreen();
	/**
	* ����������� � ����� ����������
	* @param _wheel ������ 
	*/
	CScreen(CWheel _wheel);
	/**
	* ����������
	*/
	virtual ~CScreen();
	/**
	* ����� ������ �������
	*/
	void PrintData();
private:
	// ������
	CWheel *wheel;
};