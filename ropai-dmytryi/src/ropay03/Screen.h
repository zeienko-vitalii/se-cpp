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
	Manipulator manip;

public:
	/**
	 * ����������� ��� ���������
	 */
	Screen();

	/**
	 * ����������� �� ����������
	 * @param manip ��'��� ���� Manipulator
	 */
	Screen(Manipulator manip);

	/**
	 * ������� ������ ������
	 */
	void dataOutput();

	virtual void ShowHeader();

	virtual void ShowContent();

	virtual void ShowFooter();

	/**
	 * ����������.
	 */

	virtual ~Screen();
};

#endif /* SCREEN_H_ */
