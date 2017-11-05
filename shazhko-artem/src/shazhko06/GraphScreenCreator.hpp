/**
* @file GraphScreenCreator.hpp
* @brief Содержит объявление класса GraphScreenCreator
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/

#pragma once
#include "ScreenCreator.h"
#include "GraphScreen.h"
namespace Screen {
	namespace ScreenCreator {
		/**
		* Класс реализующий фабричный метод для создания объектов GraphScreen
		*/
		class GraphScreenCreator :public ScreenCreator {
		public:
			/**
			* Деструктор
			*/
			virtual ~GraphScreenCreator() {}

			/**
			* Конструктор
			*/
			GraphScreenCreator(Wheel::Wheel *wheel) {
				this->wheel = wheel;
			}
			/**
			* Виртуальная функция, создает объект наследующий класс ScreenCreator
			* @return объект, который реализует интерфейс ScreenCreator, для отображения данных на экран
			*/
			BaseScreen* CreateSreen() override {
				if (wheel)
					return new GraphScreen(wheel);
				else throw "NullReferenceException";
			}
		private:
			// колесо
			Wheel::Wheel *wheel;
		};
	}
}