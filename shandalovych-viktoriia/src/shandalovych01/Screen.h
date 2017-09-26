/*
 * @file Screen.h
 * �������� �������� ������ ��� ������ ������� ������ .
 * @date 10 ����. 2017 �.
 * @Author: Viktotia
 */

#ifndef Screen_H_
#define Screen_H_

/**
 * �����, ������� ������� ���������� ��� ������.
 * Wheel - ������, ������� ������ ���� �������.
 */
class Screen {
public:
	/**
	 * ����������� ��� ����������.
	 */
	Screen();

	/**
	 * ����������� ��� ������ �������, ������� �������.
	 * @param  wheel - ������, ������� �������.
	 */
	Screen(Wheel wheel);

	/**
	 * ����������.
	 */
	virtual ~Screen();

	/**
	 * ������� ������ ���������� �� �����.
	 */
	void ViewWheel();
private:
	///������, ������� �������.
	Wheel wheel;
};

#endif /* Screen_H_ */
