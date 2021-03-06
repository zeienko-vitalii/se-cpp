#pragma once
/**
* @file Units.hpp
* @brief �������� ���������� ������������ EUnits � ������� �� ������ � ����
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include <string>

/**
* ������������ ������ ���������
*/
enum EUnits
{
	EUNITS_CENTIMETERS, EUNITS_MILLIMETRES, EUNITS_INCHES
};

/**
* ������������ ��� EUnit � String
* @return ������ ����������� �������� ������� EUnit
*/
static std::string ConvertEUnitToString(const EUnits _units) {
	switch (_units)
	{
	case EUNITS_CENTIMETERS: {
		return std::string("CENTIMETERS");
	}
	case EUNITS_INCHES: {
		return std::string("INCHES");
	}
	case EUNITS_MILLIMETRES: {
		return std::string("MILLIMETRES");
	}
	default:
		return NULL;
	}
}