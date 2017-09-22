/*
 * Screen.h
 * Created on: 10 ����. 2017 �.
 * Author: shcherbinina
 * Description: Screen declaration
 */

#ifndef CSCREEN_H_
#define CSCREEN_H_

#include "Capacity.h"

/**
* ���� ����������� ���������� ��� ��'��� ����� Capacity
*/
class Screen {
public:
	/**
	* ����������� ��� ���������
	*/
	Screen();
	/**
	* ����������� ��� ��� �����
	* @param capacity
	*/
	Screen(Capacity capacity);
	/**
	* ����������
	*/
	virtual ~Screen();
	/**
	 * ������� ����������� ����� ��'���� ����� Capacity
	 */
	void view();
public:
	///��'��� �����, �� �� ���� �����������
	Capacity capacity;
};

#endif /* CSCREEN_H_ */
