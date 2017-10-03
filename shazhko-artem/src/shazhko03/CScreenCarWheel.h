/**
* @file CScreen.h
* @brief �������� ���������� ������  CScreen
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#pragma once
#include "CCarWheel.h"
#include "CBaseScreen.h"
/**
* ����� ����������� ����������� �������� ������ CWheel
*/
class CScreenCarWheel :public CBaseScreen{
public:
	/**
	* ����������� � ����� ����������
	* @param _wheel ������
	*/
	CScreenCarWheel(CCarWheel *_wheel);
	/**
	* ����������
	*/
	virtual ~CScreenCarWheel();
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
	CCarWheel *wheel;
};