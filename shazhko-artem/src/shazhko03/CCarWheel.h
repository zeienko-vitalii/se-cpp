/**
* @file CScreen.h
* @brief �������� ���������� �������� ������  CCarWheel
* @author Shazhko Artem
* @version 0
* @date 03.10.17
*/
#pragma once
#include "CWheel.h"
#include <string.h>

class  CCarWheel:public CWheel
{
public:
	/**
	* ����������� � ����� ����������
	* @param _diameter �������
	* @param _width ������
	* @param _unit ������� ���������
	*/
	CCarWheel(double _diameter, double _width, EUnits _unit,std::string tireName,std::string tireManufacturer);
	/**
	* ����������� �����������
	* @param carWheel ���������� ������
	*/
	CCarWheel(const CCarWheel *carWheel);
	/**
	* ������ �������� ����
	* @param _tireName �������� ����
	*/
	void SetTireName(const std::string _tireName);
	/**
	* ������ �������������
	* @param _tireName �������������
	*/
	void SetTireManufacturer(const std::string _tireManufacturer);
	/**
	* �������� �������� ����
	* @return �������� ����
	*/
	std::string GetTireName() const;
	/**
	* �������� �������������
	* @return �������������
	*/
	std::string GetTireManufacturer() const;
private:
	// �������� ����
	std::string tireName;
	// �������������
	std::string tireManufacturer;
};