/*
 * CWindow.cpp
 * Created on: 10 сент. 2017 г.
 * @author: yashchenko
 * @description: CScreen implementation
 */

#include <CWindow.h>
#include <Windows.h>

//Конструктор без параметра
CWindow::CWindow() {
	ID = 0;
	x1 = 0;
	y1 = 0;
	x2 = 0;
	y2 = 0;

}

//Конструктор із параметрами
CWindow::CWindow (int _ID, int _x1, int _y1, int _x2, int _y2) {
	ID = _ID;
	x1 = _x1;
	y1 = _y1;
	x2 = _x2;
	y2 = _y2;

}

//Конструктор копіювання
CWindow::CWindow(const CWindow& _cWindow) {
	ID = _cWindow.ID;
	x1 = _cWindow.x1;
	y1 = _cWindow.y1;
	x2 = _cWindow.x2;
	y2 = _cWindow.y2;

}

//Деструктор
CWindow::~CWindow() {
	OutputDebugString("Destructor is called\n");
}

