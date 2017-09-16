/*
 * CWindow.h
 * Created on: 10 сент. 2017 г.
 * @author: yashchenko
 * @description: CScreen declaration
 */

#ifndef CWINDOW_H_
#define CWINDOW_H_

//CLASS DECLARATION
class CWindow {
public:
	/**
	 * Конструктор без параметра
	 */
	CWindow();
	/**
	 * Конструктор з параметрами
	 * @param _ID Задає ID вікна
	 * @param _x1 Задає параметр вікна x1
	 * @param _y1 Задає параметр вікна у1
	 * @param _x2 Задає параметр вікна x2
	 * @param _y2 Задає параметр вікна у2
	 */
	CWindow(int _ID, int _x1, int _y1, int _x2, int _y2);
	/**
	 * Конструктор копіювання
	 * @param _cWindow Вихідний об'єкт із даними для копіювання
	 */
	CWindow(const CWindow& _cWindow);
	/**
	 * Деструктор
	 */
	~CWindow();
public:
	//ID вікна
	int ID;
	//параметр вікна x1
	int x1;
	//параметр вікна у1
	int y1;
	//параметр вікна x2
	int x2;
	//параметр вікна у2
	int y2;

};
#endif /* CWINDOW_H_ */

