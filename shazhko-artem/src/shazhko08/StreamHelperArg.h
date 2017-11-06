/**
* @file StreamHelperArg.h
* @brief Содержит объявление базового класса  StreamHelperArg
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
#pragma once
#include <string>

namespace Stream {
	namespace StreamHelper {

		/**
		* Класс который используется для переачи параметров между объектами класса StreamHelper
		*/
		class StreamHelperArg {
		public:
			/**
			* Конструктор
			*/
			StreamHelperArg();
			/**
			* Конструктор с тремя параметром
			* @param _nameVulue название параметра
			* @param _value значение
			*/
			StreamHelperArg(std::string _nameVulue, std::string _value);
			/**
			* Деструктор
			*/
			virtual ~StreamHelperArg();

			// название параметра
			std::string nameVulue;
			// значение
			std::string value;
		};
	}
}