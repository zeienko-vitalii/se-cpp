/**
* @file OutputStreamHelper.h
* @brief —одержит объ€вление абстрактного класса OutputStreamHelper
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/

#pragma once
#include "StreamHelperArg.h"
namespace Stream {
	namespace StreamHelper {

		/**
		* јбстрактного класс, который задает интерфейс вывода
		*/
		class OutputStreamHelper abstract {
		public:
			/**
			* ƒеструктор
			*/
			virtual ~OutputStreamHelper() {}

			/**
			* ¬иртуальна€ функци€ дл€ записи данных в поток
			* @param arg параметр, который необходимо записать в поток
			*/
			virtual
				void Write(StreamHelperArg* arg) = 0;
		};
	}
}