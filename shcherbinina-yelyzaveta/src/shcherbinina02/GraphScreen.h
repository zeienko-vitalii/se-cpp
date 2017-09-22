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
class GraphScreen
{
public:
	/**
	* �����������
	*/
	GraphScreen();
	/**
	* ����������
	*/
	virtual ~GraphScreen();
	/**
	* ������� ���� ��'����-������� �����
	*/
	void setDataSource(const Capacity* capacity);
	/**
	* ������� ����������� �����
	*/
	void printData(const Capacity& capacity);
	/**
	* ������� ����������� ����� ��� ����� ��'����
	*/
	void printData();
	///��'��� �����������
	const Capacity* capacity;
};

