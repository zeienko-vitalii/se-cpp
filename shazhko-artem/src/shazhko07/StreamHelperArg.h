/**
* @file StreamHelperArg.h
* @brief �������� ���������� �������� ������  StreamHelperArg
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
#pragma once
#include <string>

/**
* ����� ������� ������������ ��� ������� ���������� ����� ��������� ������ StreamHelper
*/
class StreamHelperArg{
public:
	/**
	* �����������
	*/
	StreamHelperArg();
	/**
	* ����������� � ����� ����������
	* @param _nameVulue �������� ���������
	* @param _value ��������
	*/
	StreamHelperArg(std::string _nameVulue, std::string _value);
	/**
	* ����������
	*/
	virtual ~StreamHelperArg();

	// �������� ���������
	std::string nameVulue;
	// ��������
	std::string value;
};