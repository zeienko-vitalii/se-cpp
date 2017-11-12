/*
* @file List.h
* ̳����� ���� ��'���� ����� List
* @date 2017.09.17
* @author shcherbinina
*/
#pragma once

#include "Capacity.h"
#include <stdlib.h>
#include <iostream>

/**
* ��������� ���������� ������ ������
*/
struct Node       
{
	Capacity x;     ///�������� x ����� ������������ � ������
	Node *next, *prev; ///��������� �� ������ ���������� � ����������� ��������� ������
};

/**
* ����� ����������� ����������� ������ ��� �������� ���� Capacity
*/
class List   
{
	Node *head, *tail; ///��������� �� ������ ������ ������ � ��� �����
	int size;
public:
	List(); 
	List(Capacity x);
	~List(); 
	void show(); 
	void add(Capacity x); 
	void remove(int pos);
	Capacity* get(int pos);
	int lenght();
	void save(string filename);
	void load(string filename, int size);
	Capacity* operator[](int pos){
		return get(pos);
	}
};

