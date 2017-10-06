/*
 *@file GraphScreen.h  �������� �������� ������ ��� ������ �������������
 *
 *@date  Created on: 26 ����. 2017 �.
 *@author: Viktotia
 */

#ifndef SRC_SHANDALOVYCH02_GRAPHSCREEN_H_
#define SRC_SHANDALOVYCH02_GRAPHSCREEN_H_

#include "Wheel.h"
 /**
  * ����� ������� ������� �������������� ������
  * @param - ������, ������� ������ ����������
  */
class GraphScreen {
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
	void PrintData (const Wheel& wheel);
	/**
	 * ������� ������ ������������� ������� ����� ������.
	 */
	void PrintData ();
};

#endif /* SRC_SHANDALOVYCH02_GRAPHSCREEN_H_ */
