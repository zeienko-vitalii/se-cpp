/*
 * CWindow.h
 * Created on: 10 ����. 2017 �.
 * @author: yashchenko
 * @description: CScreen declaration
 */

#ifndef CWINDOW_H_
#define CWINDOW_H_

//CLASS DECLARATION
class CWindow {
public:
	/**
	 * ����������� ��� ���������
	 */
	CWindow();
	/**
	 * ����������� � �����������
	 * @param _ID ���� ID ����
	 * @param _x1 ���� �������� ���� x1
	 * @param _y1 ���� �������� ���� �1
	 * @param _x2 ���� �������� ���� x2
	 * @param _y2 ���� �������� ���� �2
	 */
	CWindow(int _ID, int _x1, int _y1, int _x2, int _y2);
	/**
	 * ����������� ���������
	 * @param _cWindow �������� ��'��� �� ������ ��� ���������
	 */
	CWindow(const CWindow& _cWindow);
	/**
	 * ����������
	 */
	~CWindow();
public:
	//ID ����
	int ID;
	//�������� ���� x1
	int x1;
	//�������� ���� �1
	int y1;
	//�������� ���� x2
	int x2;
	//�������� ���� �2
	int y2;

};
#endif /* CWINDOW_H_ */

