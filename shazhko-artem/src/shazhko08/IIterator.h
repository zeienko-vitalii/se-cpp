#pragma once
/**
* @file IIterator.h
* @brief Содержит объявление класса IIterator
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/

namespace Iterator {
	/**
	* Абстрактный класс который задает интерфейс итераторов
	*/
	template<typename item>
	class IIterator abstract {
	public:
		/**
		* Деструктор
		*/
		virtual ~IIterator() {}
		/**
		* Смещает указатель на первый элемент
		*/
		virtual void First() = 0;
		/**
		* Смещает указатель на последний элемент
		*/
		virtual void Last() = 0;
		/**
		* Смещает указатель на следующий элемент
		*/
		virtual void Next() = 0;
		/**
		* Смещает указатель на предыдущий элемент
		*/
		virtual void Previous() = 0;
		/**
		* Указывает на завершение обхода
		*/
		virtual bool IsDone() const = 0;
		/**
		* Получение текущего элемента
		*/
		virtual item CurrentItem() const = 0;
	};
}