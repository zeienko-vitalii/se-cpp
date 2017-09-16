/*
 * CScreen.h
 * Created on: 10 ����. 2017 �.
 * Author: shcherbinina
 * Description: CScreen declaration
 */

#ifndef CSCREEN_H_
#define CSCREEN_H_

#include <Capacity.h>

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
	/**
		 * ������� ����������� ����� ��'���� ����� Capacity
		 */
	void view(Capacity& cCapacity);
};

#endif /* CSCREEN_H_ */
