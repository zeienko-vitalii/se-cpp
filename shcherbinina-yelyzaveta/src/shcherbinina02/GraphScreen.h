/*
* @file GraphScreen.h
* Містить опис об'єкту класа GraphScreen
* @date 2017.09.17
* @author shcherbinina
*/

#pragma once
#include "Capacity.h"
#include "Screen.h"
/**
* Клас відображення інформації про об'єкт класу Capacity за допомогою псевдографіки
*/
class GraphScreen
{
public:
	/**
	* Конструктор
	*/
	GraphScreen();
	/**
	* Деструктор
	*/
	virtual ~GraphScreen();
	/**
	* Функція зміни об'єкта-джерела даних
	*/
	void setDataSource(const Capacity* capacity);
	/**
	* Функція відображення даних
	*/
	void printData(const Capacity& capacity);
	/**
	* Функція відображення даних для цього об'єкта
	*/
	void printData();
	///об'єкт відображення
	const Capacity* capacity;
};

