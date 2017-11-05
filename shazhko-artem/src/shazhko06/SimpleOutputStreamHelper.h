/**
* @file SimpleOutputStreamHelper.h
* @brief Содержит объявление класса SimpleOutputStreamHelper
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
#pragma once
#include "OutputStreamHelper.h"
#include <iostream>
namespace Stream {
	namespace StreamHelper {

		/**
		* Вспомогательный класс для записи параметров в поток
		*/
		class  SimpleOutputStreamHelper :public OutputStreamHelper
		{
		public:
			/**
			* Конструктор
			* @param _oStream поток вывода
			*/
			SimpleOutputStreamHelper(std::ostream& _oStream);
			/**
			* Деструктор
			*/
			virtual ~SimpleOutputStreamHelper();
			/**
			* Функция для записи данных в поток
			* @param arg параметр, который необходимо записать в поток
			*/
			void Write(StreamHelperArg* arg) override;
		private:
			// поток вывода
			std::ostream *  oStream;
		};
	}
}