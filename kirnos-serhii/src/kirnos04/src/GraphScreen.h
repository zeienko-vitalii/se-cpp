/**
 * @file GraphScreen.h
 * @brief Хранит описание класса GraphScreen
 * @author Kirnos Serhii
 * @version 0
 * @date 22.10.17
 */

#pragma once
#include "Room.h"
#include "RoomHousing.h"
#include "BaseView.h"
#include "TimerParam.h"
#include <iomanip>
#include <iostream>
using namespace std;

/**
 * Класс предназначен для вывода объекта класса Screen используя псевдографику.
 */
class GraphScreen: public BaseView {
public:
	/***
	 * Конструктор без параметров
	 * @remark Неправильно выполняет свою задачу
	 */
	GraphScreen();
	/**
	 * Конструктор с параметром
	 * @param R объект на основе кого создается новый
	 */
	GraphScreen(const Room& R);
	/**
	 * Конструктор копирования.
	 * @param S объект копирования
	 */
	GraphScreen(const GraphScreen& S);
	/**
	 * Деструктор.
	 */
	~GraphScreen();

	/**
	 * Задает объект для вывода.
	 * @param R новый источник вывода
	 */
	void SetDataSource(const Room *R);

	/**
	 * Выводит информацию о переданой в качестве параметра комнате
	 * @param R комната информацию о которой надо вывести
	 */
	void PrintData(const Room& R);

	/**
	 * Выводит информацию о комнате на которую указывает переменая room
	 */
	void PrintData();

	void ShowHeader();
	void ShowContent();
	void ShowFooter();

	static void CALLBACK onTimerAction(PTP_CALLBACK_INSTANCE instance, PVOID param,
			PTP_TIMER timer);
};

