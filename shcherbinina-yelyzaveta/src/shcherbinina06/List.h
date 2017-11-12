/*
* @file List.h
* Містить опис об'єкту класа List
* @date 2017.09.17
* @author shcherbinina
*/
#pragma once

#include "Capacity.h"
#include <stdlib.h>
#include <iostream>

/**
* Структура являющаяся звеном списка
*/
struct Node       
{
	Capacity x;     ///Значение x будет передаваться в список
	Node *next, *prev; ///Указатели на адреса следующего и предыдущего элементов списка
};

/**
* Класс реализующий двухсвязный список для объектов типа Capacity
*/
class List   
{
	Node *head, *tail; ///Указатели на адреса начала списка и его конца
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

