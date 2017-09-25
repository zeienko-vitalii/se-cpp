/*
 * @file Screen.h
 * Part of polshykov01
 * @author Mike
 * @version 0.0.1
 * @date 2017.01.01
 */

#ifndef SCREEN_H_
#define SCREEN_H_

/**
 * ����� ��� ����������� �����
 */
class Screen {
public:
	//��'��� ���� Monitor
	Monitor monitor;

public:

	/**
	 * ����������� �����.
	 * ����������� ��� ���������
	 */
	Screen();

	/**
	 * ����������� �� ����������
	 * @param manip ��'��� ���� Monitor
	 */
	Screen(Monitor monitor);

	/**
	 * ������� ������ ������
	 */
	void dataOutput();

	/**
	 * ����������.
	 */

	virtual ~Screen();
};

#endif /* SCREEN_H_ */
