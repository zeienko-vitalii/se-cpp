/*
* @file Screen.h
* ̳����� ���� ��'���� ����� Screen
* @date 2017.09.17
* @author shcherbinina
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
