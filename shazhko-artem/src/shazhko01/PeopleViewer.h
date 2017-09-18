/**
* @file PeopleViewer.h
* @brief �������� ���������� ������ PeopleViewer
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#pragma once
#include "People.h"

/**
* ����� ������������ ��� ����������� �������� ������  'People'
*/
class PeopleViewer
{
public:
	/*
	* ����������� ��-���������
	*/
	PeopleViewer();

	/*
	* ����������� � ����� ����������
	* @param _people ������ ������ 'People'
	*/
	PeopleViewer(People _people);

	/*
	* ������� ���������� ��� ������ ��������� ������ �������
	*/
	void Show();

	/*
	* ����������
	*/
	virtual ~PeopleViewer();

private:
	// ������ ������ People
	People people;
};