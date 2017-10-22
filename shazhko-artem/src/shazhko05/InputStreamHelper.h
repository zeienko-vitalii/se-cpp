/**
* @file InputStreamHelper.h
* @brief Содержит объявление абстрактного класса InputStreamHelper
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
#pragma once
#include "StreamHelperArg.h"

/**
* Абстрактного класс, который задает интерфейс ввода
*/
class InputStreamHelper abstract{
public:
	/**
	* Деструктор
	*/
	virtual ~InputStreamHelper() {}
	/**
	* Виртуальная функция для чтения данных из потока
	* @return параметр, который был прочитан из потока
	*/
	virtual StreamHelperArg* Read()=0;
	/**
	* Виртуальная функция, которая определяет конец потока
	* @return вернет true - если поток достиг конца 
	*/
	virtual bool isEnd() = 0;
};