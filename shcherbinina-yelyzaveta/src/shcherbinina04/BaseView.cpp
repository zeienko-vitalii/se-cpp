/*
* @file BaseView.cpp
* Містить реалізацію класа BaseView
* @date 2017.10.03
* @author shcherbinina
*/
#include "BaseView.h"

///Конструктор без параметрів
BaseView::BaseView()
{
	cout << "BaseView constructor\n";
}

///Деструктор
BaseView::~BaseView()
{
	cout << "BaseView destructor\n";
}
///Конструктор з параметрами
BaseView::BaseView(Capacity* data) : data(data)
{
	cout << "BaseView constructor with parametrs\n";
}
///Виводить об'єкт 
void BaseView::display(){
	showHeader();
	showContent();
	showFooter();
}