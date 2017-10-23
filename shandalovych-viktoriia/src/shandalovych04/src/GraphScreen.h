/*
 *@file GraphScreen.h  �������� �������� ������ ��� ������ �������������
 *
 *@date  Created on: 26 ����. 2017 �.
 *@author: Viktotia
 */

#ifndef SRC_SHANDALOVYCH02_GRAPHSCREEN_H_
#define SRC_SHANDALOVYCH02_GRAPHSCREEN_H_

#include <iostream>
#include <string>
#include "Wheel.h"
#include "BaseScreen.h"
 /**
  * ����� ������� ������� �������������� ������
  * @param - ������, ������� ������ ����������
  */
class GraphScreen: public BaseScreen  {
private:
	const Wheel* wheel;
public:

	/**
	 * ����������� ��� ����������.
	 */
	GraphScreen();
	/**
	 * ����������� ��� ������ �������, ������� �������.
	 * @param  wheel - ������, ������� �������.
	 */
	GraphScreen( Wheel* wheel);
	/**
     * ����������.
	 */
	virtual ~GraphScreen();
	/**
	 *  ����������� ������ ��� ����������� ������� ����� ������
	 *   @param  wheel - ������, ������� �������.
	 */
	void setDataSource (const Wheel* wheel);
	/**
	 * ������� ������ �� ������� ������
	 * @param  wheel - ������, ������� �������.
	 */
	static void onTimerAction(Wheel wheel);

	void PrintData (const Wheel& wheel);
	/**
	 * ������� ������ ������������� ������� ����� ������.
	 */
	void PrintData ();

    virtual void ShowHeader();
    virtual void ShowContent();
    virtual void ShowFooter();
};

#endif /* SRC_SHANDALOVYCH02_GRAPHSCREEN_H_ */
