#pragma once
/**
* @file CarWheelScreenCreator.hpp
* @brief Содержит объявление класса CarWheelScreenCreator
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "ScreenCreator.h"
#include "CarWheelScreen.h"

namespace Screen {
	namespace ScreenCreator {
		/**
		* Класс реализующий фабричный метод для создания объектов CarWheelScreen
		*/
		class CarWheelScreenCreator :public ScreenCreator{
		public:
			/**
			* Деструктор
			*/
			virtual ~CarWheelScreenCreator() {}
			/**
			* Конструктор
			*/
			CarWheelScreenCreator(Wheel::CarWheel *wheel) {
				this->wheel = wheel;
			}
			/**
			* Виртуальная функция, создает объект наследующий класс ScreenCreator
			* @return объект, который реализует интерфейс ScreenCreator, для отображения данных на экран
			*/
			BaseScreen* CreateSreen() override {
				if (wheel)
					return new CarWheelScreen(wheel);
				else throw "NullReferenceException";
			}
		private:
			// колесо
			Wheel::CarWheel *wheel;
		};
	}
}