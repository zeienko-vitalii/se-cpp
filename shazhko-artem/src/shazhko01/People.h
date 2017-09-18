/**
* @file People.h
* @brief Содержит объявление класса People
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#pragma once

/**
* Структура для работы с датами
*/
struct  Date{
	unsigned day : 5;
	unsigned month : 4;
	unsigned year : 12;
};

/**
* Класс описывающий человека
*/
class  People
{
public:
	/**
	* Конструктор по-умолчанию
	*/
	People();

	/**
	* Конструктор с тремя параметром
	* @param _height Рост
	* @param _weight Вес
	* @param _birthDay Дата рождения
	*/
	People(float _height, float _weight, Date _birthDay);

	/**
	* Задать рост
	* @param height Рост
	*/
	void SetHeight(float height);

	/**
	* Задать вес
	* @param weight Вес
	*/
	void SetWeight(float weight);

	/**
	* Задать дату рождения
	* @param birthDay Дата рождения
	*/
	void SetBirthDay(Date birthDay);

	/**
	* Получить рост
	* @return Рост
	*/
	float GetHeight();

	/**
	* Получить вес
	* @return Вес
	*/
	float GetWeight();

	/**
	* Получить дату рождения
	* @return Дата рождения
	*/
	Date GetBirthDay();

	/*
	* Деструктор
	*/
	virtual ~People();
private:
	// Рост
	float height;
	// Вес
	float weight;
	//Дата рождения
	Date birthDay;
};