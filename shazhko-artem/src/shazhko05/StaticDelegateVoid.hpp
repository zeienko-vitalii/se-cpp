#pragma once
/**
* @file StaticDelegateVoid.hpp
* @brief Объявляение и реализация класса StaticDelegateVoid
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
#include "IDelegateVoid.h"
#include <stdlib.h>
namespace Delegate {
	/**
	* Класс реализующий интерфейс IDelegateVoid, для работы со статическими функциями
	*/
	class StaticDelegateVoid : public IDelegateVoid
	{
	public:
		/**
		* Конструктор
		* @param _pFunction указатель на функцию класса
		*/
		typedef void(*PtrFunction)();
		StaticDelegateVoid(PtrFunction _pFunction) { pFunction = _pFunction; }
		/**
		* Вызов функции
		*/
		virtual void Invoke() { pFunction(); }
		/**
		* Сравнение делегатов
		* @return true - если равны
		*/
		virtual bool Compare(IDelegateVoid* _pDelegate);
		/**
		* Деструктор
		*/
		virtual ~StaticDelegateVoid(){}
	private:
		// указатель на функцию класса
		PtrFunction pFunction;
	};

	bool StaticDelegateVoid::Compare(IDelegateVoid *pDelegate)
	{
		StaticDelegateVoid* pStaticDel = dynamic_cast<StaticDelegateVoid*>(pDelegate);

		if (pStaticDel == NULL || pStaticDel->pFunction != pFunction)
			return false;
		return true;
	}
}