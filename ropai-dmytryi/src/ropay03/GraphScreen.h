/*
 * @file GraphScreen.h
 * Part of lab02
 * @author ����
 * @version 0.0.1
 * @date 2017.01.01
 */
#include "BaseView.h"
#ifndef GRAPHSCREEN_H_
#define GRAPHSCREEN_H_
/**
 * ���� ��� ����������� �������������
 */
class GraphScreen: public BaseView {
private:

	const Manipulator* manip;


public:
	/**
	 * ����������� ��� ���������
	 */
	GraphScreen();

	/**
	 *����� ��� ���� ��'����-������� �����
	 * @param manip ��'��� ���� Manipulator
	 */
	void setDataSource(const Manipulator *manip);

	/**
	 * ����� ��� ������ �� ����� ���������� ���
	 * �������� ��'��� � ����� ���������
	 * @param manip ��'��� ���� Manipulator
	 */
	void printData(const Manipulator& manip);

	/**
	 * ����� ��� ������ �� ����� ���������� ���
	 * ��'���, �������� ������� setDataSource
	 */
	void printData();


	virtual void ShowHeader();

	virtual void ShowContent();

	virtual void ShowFooter();

	/**
	 * ����������
	 */
	virtual ~GraphScreen();
};

#endif /* GRAPHSCREEN_H_ */
