#pragma once
/**
* @file DelegateVoid.h
* @brief Объявляение класса DelegateVoid
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
#include <list>
#include "IDelegateVoid.h"

namespace Delegate {
	/**
	* Класс для удобной работы с делегатами
	*/
	class DelegateVoid
	{
	public:
		/**
		* Конструктор
		* @param pDelegate делегат
		*/
		DelegateVoid(IDelegateVoid* pDelegate = NULL) { Add(pDelegate); }
		
		/**
		* Деструктор
		*/
		~DelegateVoid() {
			RemoveAll(); 
		}

		/**
		* Получает состояние контейнера
		* @return true - если контейнер пуст
		*/
		bool IsNull() { return (delegateList.size() == 0); }

		/**
		* Переопределение оператора =
		*/
		DelegateVoid& operator=(IDelegateVoid* pDelegate);
		/**
		* Переопределение оператора +=
		*/
		DelegateVoid& operator+=(IDelegateVoid* pDelegate);
		/**
		* Переопределение оператора -=
		*/
		DelegateVoid& operator-=(IDelegateVoid* pDelegate);
		/**
		* Переопределение функтора
		*/
		void operator()();
	private:
		/**
		* Добавление
		* @param pDelegate делегат
		*/
		void Add(IDelegateVoid* pDelegate);
		/**
		* Удаление
		* @param pDelegate делегат
		*/
		void Remove(IDelegateVoid* pDelegate);
		/**
		* Удаление всех делегатов
		* @param pDelegate делегат
		*/
		void RemoveAll();
		/**
		* Вызов
		*/
		void Invoke();

	private:
		// лист делегатов
		std::list<IDelegateVoid*> delegateList;
	};
}