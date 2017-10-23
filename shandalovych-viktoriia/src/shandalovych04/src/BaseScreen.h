/*
 * BaseScreen.h �������� �������� �������� ������ ��� ������ ��������
 *
 *  Created on: 8 ���. 2017 �.
 *      Author: Viktotia
 */

#ifndef BASESCREEN_H_
#define BASESCREEN_H_
#include<string>
#include "Wheel.h"
class BaseScreen {
public:
	BaseScreen();
	/**
	 * ����������� ��� ������ �������, ������� �������.
	 * @param  wheel - ������, ������� �������.
	 */
	BaseScreen(Wheel* wheel);
	virtual ~BaseScreen();
	void display();
protected:
	///������, ������� �������.
	Wheel* wheel;
	virtual void ShowHeader()=0;
	virtual void ShowContent()=0;
	virtual void ShowFooter()=0;

};

#endif /* BASESCREEN_H_ */
