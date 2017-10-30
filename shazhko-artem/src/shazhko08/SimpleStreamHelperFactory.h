/**
* @file SimpleStreamHelperFactory.h
* @brief �������� ���������� ������ SimpleStreamHelperFactory
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/

#pragma once
#include "StreamHelperFactory.h"

/**
* ����� ����������� ��������� ����������� �������, ��� �������� ��������������� �������� �����-������ ���������� �� ������
*/
class SimpleStreamHelperFactory : public StreamHelperFactory {
public:
	/**
	* ����������
	*/
	virtual ~SimpleStreamHelperFactory(){}
	/**
	* ������� ������ ��� ������ ���������� �� ������
	* @return ������ SimpleInputStreamHelper
	*/
	InputStreamHelper* CreateInputStreamHelper(std::istream &iStream)override;
	/**
	* ������� ������ ��� ������ ���������� � �����
	* @return ������ SimpleOutputStreamHelper
	*/
	OutputStreamHelper* CreateOutputStreamHelper(std::ostream &oStream)override;
};