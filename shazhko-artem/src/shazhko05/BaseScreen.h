/**
* @file CScreen.h
* @brief Содержит объявление базового класса  BaseScreen
* @author Shazhko Artem
* @version 0
* @date 03.10.17
*/
#pragma once

/**
* Класс описывающий базовое отображение объектов
*/
class BaseScreen abstract{
public:
	/**
	* Деструктор
	*/
	virtual ~BaseScreen() {}

	/**
	* Outputs header of information.
	*/
	virtual void ShowHeader();
	/**
	* Outputs main information about window.
	*/
	virtual void ShowContent();

	/**
	* Outputs footer of information.
	*/
	virtual void ShowFooter();
};