/**
* @file PeopleViewer.h
* @brief Содержит объявление класса PeopleViewer
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#pragma once
#include "People.h"

/**
* Класс предназначен для отображение объектов класса  'People'
*/
class PeopleViewer
{
public:
	/*
	* Конструктор по-умолчанию
	*/
	PeopleViewer();

	/*
	* Конструктор с одним параметром
	* @param _people объект класса 'People'
	*/
	PeopleViewer(People _people);

	/*
	* Функция отображает все данные хранящего внутри объекта
	*/
	void Show();

	/*
	* Деструктор
	*/
	virtual ~PeopleViewer();

private:
	// объект класса People
	People people;
};