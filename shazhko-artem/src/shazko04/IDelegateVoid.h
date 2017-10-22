#pragma once
/**
* @file IDelegateVoid.h
* @brief Объявляение абстрактного класса IDelegateVoid
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
namespace Delegate {
	/**
	* Задает интерфейс
	*/
	class IDelegateVoid
	{
	public:
		/**
		* Деструктор
		*/
		virtual ~IDelegateVoid() {}
		/**
		* Вызов функции
		*/
		virtual void Invoke() = 0;
		/**
		* Сравнение делегатов
		* @return true - если равны
		*/
		virtual bool Compare(IDelegateVoid* pDelegate) = 0;
	};
}