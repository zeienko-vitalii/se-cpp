/**
* @file OutputStreamHelper.h
* @brief �������� ���������� ������������ ������ OutputStreamHelper
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/

#pragma once
#include "StreamHelperArg.h"

/**
* ������������ �����, ������� ������ ��������� ������
*/
class OutputStreamHelper abstract {
public:
	/**
	* ����������
	*/
	virtual ~OutputStreamHelper() {}

	/**
	* ����������� ������� ��� ������ ������ � �����
	* @param arg ��������, ������� ���������� �������� � �����
	*/
	virtual
	void Write(StreamHelperArg* arg) = 0;
};