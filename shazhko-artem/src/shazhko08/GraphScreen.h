/**
* @file GraphScreen.h
* @brief Содержит объявление класса  GraphScreen
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#pragma once
#include "Wheel.h"
#include "BaseScreen.h"
#include <Windows.h>
namespace Screen {
	/**
	* Класс описывающий расширенное отображение объектов класса GraphScreen
	*/
	class GraphScreen :public BaseScreen {
	private:
		/**
		* Напечатает линию соответствующую толщине колеса, относительно заданных координат
		* @param width Ширина колеса
		* @param pos Координаты
		*/
		void PrintWidth(double width, COORD pos);
	public:
		/**
		* Конструктор по-умолчанию
		*/
		GraphScreen(Wheel::Wheel *_wheel);
		/**
		* Деструктор
		*/
		virtual ~GraphScreen();
		/**
		* Задать данные колеса
		* @param _wheel колесо
		*/
		void SetDataSource(const Wheel::Wheel &_wheel);
		/**
		* Задать данные колеса
		* @return Данные колеса
		*/
		Wheel::Wheel GetDataSource() const;
		/**
		* Outputs header of information.
		*/
		virtual void ShowHeader() override;
		/**
		* Outputs main information about window.
		*/
		virtual void ShowContent() override;

		/**
		* Outputs footer of information.
		*/
		void ShowFooter() override;
	private:
		// колесо
		Wheel::Wheel *wheel;
	};
}