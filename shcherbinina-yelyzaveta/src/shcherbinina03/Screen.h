/*
* @file Screen.h
* ̳����� ���� ��'���� ����� Screen
* @date 2017.10.03
* @author shcherbinina
*/

#ifndef CSCREEN_H_
#define CSCREEN_H_

#include "Capacity.h"
#include "BaseView.h"
/**
* ���� ����������� ���������� ��� ��'��� ����� Capacity
*/
class Screen : public BaseView {
public:

	///��'��� �����, �� �� ���� �����������
	Capacity capacity;
	/**
	* ����������� ��� ���������
	*/
	Screen();
	/**
	* ����������� ��� ��� �����
	* @param capacity - ������������ ��������
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
	/**
	* �������� ��������� �����������
	*/
	virtual void showHeader() override;
	/**
	* �������� ������� ���������� ��� ��'���
	*/
	virtual void showContent() override;
	/**
	* �������� ����� ���������� �����������
	*/
	virtual void showFooter() override;
};

#endif /* CSCREEN_H_ */
