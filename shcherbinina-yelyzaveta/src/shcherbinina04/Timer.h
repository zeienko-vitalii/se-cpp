/*
* @file Timer.h
* ̳����� ���� ��'���� ����� Timer
* @date 2017.10.01
* @author shcherbinina
*/
#pragma once

#include <windows.h>
using namespace std;
/**
* ����, �� ������ ��������� �������
*/
template<class T> class Timer
{
private:
	HANDLE hTimer;
	LARGE_INTEGER liDueTime;
	int times;
	void(*task)(T);
	T data;

public:
	Timer(void(*task)(T), T data);
	virtual ~Timer();
	void count();
	void start();
};

