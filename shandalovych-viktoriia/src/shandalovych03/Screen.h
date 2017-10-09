/*
 * @file Screen.h �������� �������� ������ ��� ������ ������� ������ .
 * @date 10 ����. 2017 �.
 * @Author: Viktotia
 */

#ifndef Screen_H_
#define Screen_H_
#include <iostream>
#include<string.h>
#include "Wheel.h"
#include "BaseScreen.h"
/**
 * �����, ������� ������� ���������� ��� ������.
 * Wheel - ������, ������� ������ ���� �������.
 */
class Screen: public BaseScreen {
public:
	/**
	 * ����������� ��� ����������.
	 */
	Screen();

	Screen(Wheel* wheel);

	/**
	 * ����������.
	 */
	virtual ~Screen();

	/**
	 * ������� ������ ���������� �� �����.
	 */
	void ViewWheel();

	virtual void ShowHeader();
	virtual void ShowContent();
	virtual void ShowFooter();
};

#endif /* Screen_H_ */
