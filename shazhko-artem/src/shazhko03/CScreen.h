/**
* @file CScreen.h
* @brief �������� ���������� ������  CScreen
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#pragma once
#include "CWheel.h"
#include "CBaseScreen.h"

/**
* ����� ����������� ����������� �������� ������ CWheel
*/
class CScreen: public CBaseScreen {
public:
	/**
	* ����������� ��-���������
	*/
	CScreen();
	/**
	* ����������� � ����� ����������
	* @param _wheel ������
	*/
	CScreen(CWheel *_wheel);
	/**
	* ����������
	*/
	virtual ~CScreen();
	/**
	* Outputs header of information.
	*/
	virtual void ShowHeader();
	/**
	* Outputs main information about window.
	*/
	virtual void ShowContent();

	/**
	* Outputs footer of information.
	*/
	virtual void ShowFooter();
private:
	// ������
	CWheel *wheel;
};