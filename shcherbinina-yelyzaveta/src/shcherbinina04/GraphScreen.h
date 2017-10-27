/*
* @file GraphScreen.h
* ̳����� ���� ��'���� ����� GraphScreen
* @date 2017.09.17
* @author shcherbinina
*/

#pragma once
#include "Capacity.h"
#include "Screen.h"
/**
* ���� ����������� ���������� ��� ��'��� ����� Capacity �� ��������� �������������
*/
class GraphScreen : public BaseView
{
public:
	/**
	* �����������
	*/
	GraphScreen();
	/**
	* ����������� ��� ��� �����
	* @param capacity - ������������ ��������
	*/
	GraphScreen(Capacity* capacity);
	/**
	* ����������
	*/
	virtual ~GraphScreen();
	/**
	* ������� ���� ��'����-������� �����
	*/
	void setDataSource(Capacity* capacity);
	/**
	* ������� ����������� �����
	*/
	void printData(Capacity* capacity);
	/**
	* ������� ����������� ����� ��� ����� ��'����
	*/
	void printData();
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
	static void onTimerAction(Capacity data);
};

