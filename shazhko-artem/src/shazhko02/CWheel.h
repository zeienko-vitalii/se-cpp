/**
* @file CWheel.h
* @brief �������� ���������� ������  CWheel
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#pragma once
#include <string>
/**
* ������������ ������ ���������
*/
enum EUnit
{
	EUNIT_CENTIMETERS, EUNIT_MILLIMETRES, EUNIT_INCHES
};

/**
* ����� ����������� ������
*/
class CWheel {
public:
	// �������
	double diameter;
	// ������
	double width;
	/**
	* ����������� ��-���������
	*/
	CWheel();
	/**
	* ����������� � ����� ����������
	* @param _diameter �������
	* @param _width ������
	* @param _unit ������� ���������
	*/
	CWheel(double _diameter, double _width, EUnit _unit);
	/**
	* ����������� �����������
	* @param wheel ���������� ������
	*/
	CWheel(const CWheel *wheel);

	/**
	* ����������
	*/
	virtual ~CWheel();
	/**
	* ������� ������ ������
	* @return ����� ������
	*/
	double Volume() const;
	/**
	* ������� ���������
	* @return ����� ������
	*/
	EUnit GetUnit() const;
	/**
	* ������������ ��� EUnit � String
	* @return ������ ����������� �������� ������� EUnit
	*/
	static std::string ConvertEUnitToString(const EUnit _unit);
private:
	// ������� ���������
	EUnit unit;
};