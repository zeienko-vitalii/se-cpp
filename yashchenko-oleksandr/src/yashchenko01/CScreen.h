/*
 * Name: CScreen.h
 * Created on: 10 ����. 2017 �.
 * @author: yashchenko
 * @description: CScreen declaration
 */

#ifndef CSCREEN_H_
#define CSCREEN_H_

#include <CWindow.h>

//CLASS DECLARATION
class CScreen {
public:
	/**
	 * ����������� ��� ���������
	 */
	CScreen();
	/**
	 * ����������
	 */
	~CScreen();
public:
	/**
	 * ������� ����������� ����� ��'���� ����� CWindow
	 */
	void view(CWindow& cWindow);
};

#endif /* CSCREEN_H_ */
