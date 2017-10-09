/*
 * @file Screen.h

 * Part of lab1
 * @author ����
 * @version 0.0.1
 * @date 2017.01.01
 */


#ifndef SCREEN_H_
#define SCREEN_H_
#include "BaseView.h"
/**
 * ����� ��� ����������� �����
 */
class Screen: public BaseView {


public:
	Screen();
	/**
	 * ����������� �� ����������
	 * @param manip ��'��� ���� Manipulator
	 */
	Screen(Manipulator* manip);

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
