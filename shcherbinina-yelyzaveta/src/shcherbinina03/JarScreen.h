/*
* @file JarScreen.h
* Містить опис об'єкту класа JarScreen
* @date 2017.10.03
* @author shcherbinina
*/
#pragma once
#include "Screen.h"
#include "Jar.h"
/**
* Клас відображення інформації про об'єкт класу Jar
*/
class JarScreen :
	public Screen
{
public:
	///Об'єкт класу, що має бути відображений
	Jar data;
	/**
	* Конструктор без параметра
	*/
	JarScreen();
	/**
	* Конструктор для всіх полей
	* @param data - встановлюєме значення
	*/
	JarScreen(Jar data);
	/**
	* Деструктор
	*/
	~JarScreen();
	/**
	* Функція відображення даних об'єкта класу Jar
	*/
	void viewJar();
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

