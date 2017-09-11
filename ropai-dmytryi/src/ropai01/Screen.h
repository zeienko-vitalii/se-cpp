/*
 * @file Screen.h
 * Part of lab1
 * @author ����
 * @version 0.0.1
 * @date 2017.01.01
 */

#ifndef SCREEN_H_
#define SCREEN_H_
/**
 * ����� ��� ����������� �����
 */
class Screen {
private:
	//��'��� ���� Manipulator
	Manipulator manip;

public:

	/**
	 * ����������� �����.
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

	/**
	 * ����������.
	 */

	virtual ~Screen();
};

#endif /* SCREEN_H_ */
