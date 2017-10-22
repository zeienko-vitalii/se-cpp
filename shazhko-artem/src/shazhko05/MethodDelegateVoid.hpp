#pragma once
/**
* @file MethodDelegateVoid.hpp
* @brief Объявляение и реализация класса MethodDelegateVoid
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
#include "IDelegateVoid.h"
namespace Delegate {
	/**
	* Класс реализующий интерфейс IDelegateVoid, для работы с функциями в классах
	*/
	template<class TObject>
	class MethodDelegateVoid : public IDelegateVoid
	{
	public:
		/**
		* Конструктор
		* @param _pObject указатель на объект класса
		* @param _pMethod указатель на функцию класса
		*/
		typedef void (TObject::*PMethod)();
		MethodDelegateVoid(TObject* _pObject, PMethod _pMethod)
		{
			pObject = _pObject;
			pMethod = _pMethod;
		}
		/**
		* Вызов функции
		*/
		virtual void Invoke() { (pObject->*pMethod)(); }
		/**
		* Сравнение делегатов
		* @return true - если равны
		*/
		virtual bool Compare(IDelegateVoid* pDelegate);
		/**
		* Деструктор
		*/
		virtual ~MethodDelegateVoid() {}
	private:
		// указатель на объект класса
		TObject *pObject;
		// указатель на функцию класса
		PMethod pMethod;
	};

	template<class TObject>
	bool MethodDelegateVoid<TObject>::Compare(IDelegateVoid* pDelegate)
	{
		MethodDelegateVoid<TObject>* pMethodDel = dynamic_cast<MethodDelegateVoid<TObject>*>(pDelegate);
		if (pMethodDel == NULL || pMethodDel->pObject != pObject || pMethodDel->pMethod != pMethod)
			return false;
		return true;
	}
}