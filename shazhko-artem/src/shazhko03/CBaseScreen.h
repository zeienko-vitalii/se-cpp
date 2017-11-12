/**
* @file CBaseScreen.h
* @brief Содержит объявление базового класса  CBaseScreen
* @author Shazhko Artem
* @version 0
* @date 03.10.17
*/
#pragma once
/**
* Класс описывающий базовое отображение объектов
*/
class CBaseScreen {
public:
	/**
	* Конструктор по-умолчанию
	*/
	CBaseScreen();
	/**
	* Деструктор
	*/
	virtual ~CBaseScreen();
	virtual void Show();
protected:
	/**
	* Outputs header of information.
	*/
	virtual void ShowHeader()=0;
	/**
	* Outputs main information about window.
	*/
	virtual void ShowContent()=0;

	/**
	* Outputs footer of information.
	*/
	virtual void ShowFooter() = 0;
};