/**
* @file BaseScreen.h
* @brief Содержит объявление базового класса  BaseScreen
* @author Shazhko Artem
* @version 0
* @date 03.10.17
*/
#pragma once

namespace Screen {
	/**
	* Класс описывающий базовое отображение объектов
	*/
	class BaseScreen abstract {
	public:
		/**
		* Деструктор
		*/
		virtual ~BaseScreen() {}

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
		virtual void ShowFooter()=0;

		virtual void Show();

	};
}