/**
* @file SimpleInputStreamHelper.h
* @brief Содержит объявление класса SimpleInputStreamHelper
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/

#pragma once
#include "InputStreamHelper.h"
#include <iostream>

/**
* Вспомогательный класс для чтения параметров из потока
*/
class  SimpleInputStreamHelper :public InputStreamHelper
{
public:
	/**
	* Конструктор
	* @param _iStream поток ввода
	*/
	 SimpleInputStreamHelper(std::istream& _iStream);

	 /**
	 * Задает размер буфера
	 * @param newSize размер буфера
	 */
	 void SetBuffer(size_t newSize);

	 /**
	 * Деструктор
	 */
	 virtual ~ SimpleInputStreamHelper();

	 /**
	 * Для чтения данных из потока
	 * @return параметр, который был прочитан из потока
	 */
	StreamHelperArg* Read() override;
	
	/**
	* Функция определяет конец потока
	* @return вернет true - если поток достиг конца
	*/
	bool isEnd()override;
private:
	// поток ввода
	std::istream * iStream;
	// буфер
	char *buffer;
	// размер буфер
	size_t bufferSize;
};
