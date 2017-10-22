/**
* @file InputStreamHelper.h
* @brief �������� ���������� ������������ ������ InputStreamHelper
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
#pragma once
#include "StreamHelperArg.h"

/**
* ������������ �����, ������� ������ ��������� �����
*/
class InputStreamHelper abstract{
public:
	/**
	* ����������
	*/
	virtual ~InputStreamHelper() {}
	/**
	* ����������� ������� ��� ������ ������ �� ������
	* @return ��������, ������� ��� �������� �� ������
	*/
	virtual StreamHelperArg* Read()=0;
	/**
	* ����������� �������, ������� ���������� ����� ������
	* @return ������ true - ���� ����� ������ ����� 
	*/
	virtual bool isEnd() = 0;
};