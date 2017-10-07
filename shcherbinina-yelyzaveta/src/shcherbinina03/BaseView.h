/*
* @file Jar.h
* Містить опис об'єкту класа BaseView
* @date 2017.10.03
* @author shcherbinina
*/
#pragma once
#include "Capacity.h"
/**
* Базовий клас відображення даних
*/
class BaseView
{
protected:
	///Об'єкт відображення
	Capacity data;
	/**
	* Виводить заголовок відображення
	*/
	virtual void showHeader() = 0;
	/**
	* Виводить головну інформацію про об'єкт
	*/
	virtual void showContent() = 0;
	/**
	* Виводить нижній колонтитул відображення
	*/
	virtual void showFooter() = 0;
public:
	/**
	* Конструктор без параметрів
	*/
	BaseView();
	/**
	* Конструктор з параметрами
	* @param встановлюєме значення об'єкта, що виводиметься
	*/
	BaseView(Capacity data);
	/**
	* Деструктор
	*/
	virtual ~BaseView();
	/**
	* Виводить об'єкт 
	*/
	void display();
};

