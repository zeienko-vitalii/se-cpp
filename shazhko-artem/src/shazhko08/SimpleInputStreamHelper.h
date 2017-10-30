/**
* @file SimpleInputStreamHelper.h
* @brief �������� ���������� ������ SimpleInputStreamHelper
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/

#pragma once
#include "InputStreamHelper.h"
#include <iostream>

/**
* ��������������� ����� ��� ������ ���������� �� ������
*/
class  SimpleInputStreamHelper :public InputStreamHelper
{
public:
	/**
	* �����������
	* @param _iStream ����� �����
	*/
	 SimpleInputStreamHelper(std::istream& _iStream);

	 /**
	 * ������ ������ ������
	 * @param newSize ������ ������
	 */
	 void SetBuffer(size_t newSize);

	 /**
	 * ����������
	 */
	 virtual ~ SimpleInputStreamHelper();

	 /**
	 * ��� ������ ������ �� ������
	 * @return ��������, ������� ��� �������� �� ������
	 */
	StreamHelperArg* Read() override;
	
	/**
	* ������� ���������� ����� ������
	* @return ������ true - ���� ����� ������ �����
	*/
	bool isEnd()override;
private:
	// ����� �����
	std::istream * iStream;
	// �����
	char *buffer;
	// ������ �����
	size_t bufferSize;
};
