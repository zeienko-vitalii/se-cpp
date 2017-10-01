/*
 * @file Screen.h

 * Part of lab1
 * @author ����
 * @version 0.0.1
 * @date 2017.01.01
 */
#include "BaseView.h"

#ifndef SCREEN_H_
#define SCREEN_H_
/**
 * ����� ��� ����������� �����
 */
class Screen: public BaseView {
public:
	//��'��� ���� Manipulator
	Manipulator data;

public:
	Screen();
	/**
	 * ����������� �� ����������
	 * @param manip ��'��� ���� Manipulator
	 */
	Screen(Manipulator data);

	/**
	 * ������� ������ ������
	 */
	void dataOutput();

	virtual void showHeader();

	virtual void showContent();

	virtual void showFooter();

	/**
	 * ����������.
	 */

	virtual ~Screen();
};

#endif /* SCREEN_H_ */
