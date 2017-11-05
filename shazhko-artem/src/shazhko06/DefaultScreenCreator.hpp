#pragma once
/**
* @file DefaultScreenCreator.hpp
* @brief Содержит объявление класса DefaultScreenCreator
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "ScreenCreator.h"
#include "DefaultScreen.h"
namespace Screen {
	namespace ScreenCreator {
		/**
		* Класс реализующий фабричный метод для создания объектов DefaultScreen
		*/
		class DefaultScreenCreator :public ScreenCreator {
		public:
			/**
			* Деструктор
			*/
			virtual ~DefaultScreenCreator() {}
			/**
			* Конструктор
			*/
			DefaultScreenCreator(Wheel::Wheel *wheel) {
				this->wheel = wheel;
			}
			/**
			* Виртуальная функция, создает объект наследующий класс ScreenCreator
			* @return объект, который реализует интерфейс ScreenCreator, для отображения данных на экран
			*/
			BaseScreen* CreateSreen() override {
				if (wheel)
					return new DefaultScreen(wheel);
				else throw "NullReferenceException";
			}
		private:
			// колесо
			Wheel::Wheel *wheel;
		};
	}