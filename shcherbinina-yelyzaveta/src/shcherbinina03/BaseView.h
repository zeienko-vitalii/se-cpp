/*
* @file Jar.h
* ̳����� ���� ��'���� ����� BaseView
* @date 2017.10.03
* @author shcherbinina
*/
#pragma once
#include "Capacity.h"
/**
* ������� ���� ����������� �����
*/
class BaseView
{
protected:
	///��'��� �����������
	Capacity* data;
	/**
	* �������� ��������� �����������
	*/
	virtual void showHeader() = 0;
	/**
	* �������� ������� ���������� ��� ��'���
	*/
	virtual void showContent() = 0;
	/**
	* �������� ����� ���������� �����������
	*/
	virtual void showFooter() = 0;
public:
	/**
	* ����������� ��� ���������
	*/
	BaseView();
	/**
	* ����������� � �����������
	* @param ������������ �������� ��'����, �� ������������
	*/
	BaseView(Capacity* data);
	/**
	* ����������
	*/
	virtual ~BaseView();
	/**
	* �������� ��'��� 
	*/
	void display();
};

