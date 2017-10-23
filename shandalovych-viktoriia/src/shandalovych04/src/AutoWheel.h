/*
 *@file AutoWheel.h  �������� �������� ������� "������ ����������"
 *
 * @date 8 ���. 2017 �.
 * @Author: Viktotia
 */

#ifndef AUTOWHEEL_H_
#define AUTOWHEEL_H_
#include<string>
#include "Wheel.h"

/**
 *  �����, ������� �������� �������� ������ ���������� � �������� ����������� ������ ������. <br>
 *  diameter - ������� ������. <br>
 *  width - ������ ������. <br>
 *  unit - ������� ��������� �������� ������. <br>
 *  rubberNamem - �������� ������ <br>
 *  manufacturerRubber - ������������� ������ <br>
 */
class AutoWheel: public Wheel {
public:
	/**
	 *  ����������� ������ ��� ����������.
	 */
	AutoWheel();
	/**
		 * ����������� ��� ��������� ��������� ��������.
		 * @param diameter - ��������� �������� ��������.
		 * @param width - ��������� �������� ������.
		 * @param unit - ��������� �������� ������� ���������.
		 * @param rubberNamem - ��������� �������� �������� ������.
		 * @param manufacturerRubber - ��������� �������� ������������� ������.
		 */
	AutoWheel(int diameter, int width, string unit, string rubberNamem,
			string manufacturerRubber);

	/**
	 * ����������.
	 */
	virtual ~AutoWheel();

	/**
	 * ������ ������������� ������ ������ ����������.
	 * @return ������������� ������ ������ ����������.
	 */
	const string& getManufacturerRubber();

	/**
		 * ������ ��������.
		 * @param manufacturerRubber - ������������� ������ ������.
		 */
	void setManufacturerRubber(const string& manufacturerRubber);

	/**
	 * ������ �������� ������ ������ ����������.
	 * @return �������� ������ ������ ����������.
	 */
	const string& getRubberName();

	/**
	 * ������ �������� ������.
	 * @param rubberName - �������� ������ ������.
	 */
	void setRubberName(const string& rubberName);
	virtual string ToString();

private:
	///�������� ������
	string rubberName;
	///������������� ������
	string manufacturerRubber;
};

#endif /* AUTOWHEEL_H_ */
