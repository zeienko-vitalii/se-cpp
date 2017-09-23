/**
* @file CGraphScreen.h
* @brief �������� ���������� ������  CGraphScreen
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#pragma once
#include "CWheel.h"

class CGraphScreen
{
public:
	/**
	* ����������� ��-���������
	*/
	CGraphScreen();
	/**
	* ����������
	*/
	virtual ~CGraphScreen();
	/**
	* ������ ������ ������
	* @param _wheel ������
	*/
	void SetDataSource(const CWheel &_wheel);
	/**
	* ������ ������ ������
	* @return ������ ������
	*/
	CWheel GetDataSource()const;
	/**
	* ����� ������ �������
	*/
	void PrintData(const CWheel &_wheel);
	/**
	* ����� ������ �������
	*/
	void PrintData();
private:
	// ������
	CWheel *wheel;
};
