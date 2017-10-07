/*
* @file JarScreen.h
* ̳����� ���� ��'���� ����� JarScreen
* @date 2017.10.03
* @author shcherbinina
*/
#pragma once
#include "Screen.h"
#include "Jar.h"
/**
* ���� ����������� ���������� ��� ��'��� ����� Jar
*/
class JarScreen :
	public Screen
{
public:
	///��'��� �����, �� �� ���� �����������
	Jar data;
	/**
	* ����������� ��� ���������
	*/
	JarScreen();
	/**
	* ����������� ��� ��� �����
	* @param data - ������������ ��������
	*/
	JarScreen(Jar data);
	/**
	* ����������
	*/
	~JarScreen();
	/**
	* ������� ����������� ����� ��'���� ����� Jar
	*/
	void viewJar();
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

