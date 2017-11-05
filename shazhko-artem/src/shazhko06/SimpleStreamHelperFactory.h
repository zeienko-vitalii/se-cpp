/**
* @file SimpleStreamHelperFactory.h
* @brief Содержит объявление класса SimpleStreamHelperFactory
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/

#pragma once
#include "StreamHelperFactory.h"

namespace Stream {
	namespace StreamHelper {

		/**
		* Класс реализующий интерфейс абстрактной фабрики, для создания вспомогательных объектов ввода-вывода параметров из потока
		*/
		class SimpleStreamHelperFactory : public StreamHelperFactory {
		public:
			/**
			* Деструктор
			*/
			virtual ~SimpleStreamHelperFactory() {}
			/**
			* Создает объект для чтения параметров из потока
			* @return объект SimpleInputStreamHelper
			*/
			InputStreamHelper* CreateInputStreamHelper(std::istream &iStream)override;
			/**
			* Создает объект для записи параметров в поток
			* @return объект SimpleOutputStreamHelper
			*/
			OutputStreamHelper* CreateOutputStreamHelper(std::ostream &oStream)override;
		};
	}
}