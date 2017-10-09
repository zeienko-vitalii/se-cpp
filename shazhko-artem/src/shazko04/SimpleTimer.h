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

/**
* Интерфейс для работы с SimpleTimer
*/
namespace Timer {

	__interface  TimerEvent {
public:
	/**
	* Функция, которая вызывается во время каждого такта таймера
	*/
	virtual void OnTimerAction();
	};

	/**
	* Класс SimpleTimer
	*/
	class SimpleTimer
	{
	public:
		/**
		* Перечисления состояний таймера
		*/
		enum ESatus
		{
			Canceled, Created, RanToCompletion, Running, Faulted
		};
		/**
		* Конструктор с параметрами
		*/
		SimpleTimer(TimerEvent *_attribute, int _numberClick, int _step);
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
		void SetAttribute(TimerEvent *_attribute);
		/**
		* Возвращает атрибут
		*/
		TimerEvent * GetAttribute() const;
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
		TimerEvent *attribute;
		// дескриптор потока
		HANDLE hThread;
		// статус таймера
		ESatus status;
		// количество тактов
		int numberTact;
		// шаг таймера
		int step;
	};
}