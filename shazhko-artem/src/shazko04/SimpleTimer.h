/**
* @file SimpleTimer.h
* @brief Содержит объявление класса  SimpleTimer
* @author Shazhko Artem
* @version 0
* @date 10.09.17
*/
#pragma once
#include <Windows.h>
#include <stdio.h>

class SimpleTimer
{
public:
	/**
	* Перечисления состояний таймера
	*/
	enum ESatus
	{
		Canceled,Created, RanToCompletion,Running, Faulted
	};
	/**
	* Абстрактный класс, который нужно наследовать классу для использования данного таймера
	*/
	class TimerHelper abstract{
	public:
		/**
		* Функция, которая вызывается во время каждого такта таймера
		*/
		virtual void OnTimerAction();
		virtual ~TimerHelper();
	};
	/**
	* Конструктор с параметрами
	*/
	SimpleTimer(TimerHelper *_attribute, int _numberClick, int _step);
	/**
	* Для запуска таймера
	*/
	int Start();
	/**
	* Для остановки таймера
	*/
	int Stop();
	/**
	* Возвращает состояние таймера
	*/
	bool GetStatus()const;
	/**
	* Задать на выполнение таймеру атрибут
	*/
	void SetAttribute(TimerHelper *_attribute);
	/**
	* Возвращает атрибут
	*/
	TimerHelper * GetAttribute() const;
	/**
	* Задать количество тактов для таймера
	*/
	void SetNumberTact(const int _numberClick);
	/**
	* Получение заданного количество тактов для таймера
	*/
	int GetNumberTact() const;
	/**
	* Задать шаг
	*/
	void SetStep(const int _step);
	/**
	* Получить заданный шаг
	*/
	int GetStep() const;
	/**
	* Возвращает дескриптор потока
	*/
	HANDLE GetHandleThread() const;
	/**
	* Ожидания завершения таймера
	*/
	BOOL Wait(DWORD dwMilliseconds);
	/**
	* Деструктор
	*/
	virtual ~SimpleTimer();
private:
	// Сам таймер
	int StartTimer();
	/**
	* Требуется для связывания потока с таймером
	*/
	static DWORD Build(void *arg);
	// указатель на объект в котором нужно вызывать функцию "OnTimerAction" в каждом такте таймера
	TimerHelper *attribute;
	// дескриптор потока
	HANDLE hThread;
	// статус таймера
	ESatus status;
	// количество тактов
	int numberTact;
	// шаг таймера
	int step;
};