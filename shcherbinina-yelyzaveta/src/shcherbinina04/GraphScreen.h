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
class GraphScreen : public BaseView
{
public:
	/**
	* Конструктор
	*/
	GraphScreen();
	/**
	* Конструктор для всіх полей
	* @param capacity - встановлюєме значення
	*/
	GraphScreen(Capacity* capacity);
	/**
	* Деструктор
	*/
	virtual ~GraphScreen();
	/**
	* Функція зміни об'єкта-джерела даних
	*/
	void setDataSource(Capacity* capacity);
	/**
	* Функція відображення даних
	*/
	void printData(Capacity* capacity);
	/**
	* Функція відображення даних для цього об'єкта
	*/
	void printData();
	/**
	* Виводить заголовок відображення
	*/
	virtual void showHeader() override;
	/**
	* Виводить головну інформацію про об'єкт
	*/
	virtual void showContent() override;
	/**
	* Виводить нижній колонтитул відображення
	*/
	virtual void showFooter() override;
};

