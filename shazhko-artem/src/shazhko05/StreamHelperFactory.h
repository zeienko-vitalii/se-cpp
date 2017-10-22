/**
* @file StreamHelperFactory.h
* @brief Содержит объявление абстрактного класса StreamHelperFactory
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
#pragma once
#include "InputStreamHelper.h"
#include "OutputStreamHelper.h"
#include <iostream>

/**
* Абстрактного класс, который задает интерфейс абстрактной фабрики для создания вспомогательных объектов ввода-вывода
*/
class StreamHelperFactory abstract {
public:
	/**
	* Деструктор
	*/
	virtual ~StreamHelperFactory() {}
	/**
	* Виртуальная функция, создает объект для чтения параметров из потока
	* @return объект, который реализует интерфейс InputStreamHelper, для чтения параметров из потока
	*/
	virtual InputStreamHelper* CreateInputStreamHelper(std::istream &iStream)=0;
	/**
	* Виртуальная функция, создает объект записи параметров в поток
	* @return объект, который реализует интерфейс OutputStreamHelper, для записи параметров в поток
	*/
	virtual OutputStreamHelper* CreateOutputStreamHelper(std::ostream &oStream) = 0;
};