/*
* @file BaseView.cpp
* ̳����� ��������� ����� BaseView
* @date 2017.10.03
* @author shcherbinina
*/
#include "BaseView.h"

///����������� ��� ���������
BaseView::BaseView()
{
	cout << "BaseView constructor\n";
}

///����������
BaseView::~BaseView()
{
	cout << "BaseView destructor\n";
}
///����������� � �����������
BaseView::BaseView(Capacity data) : data(data)
{
	cout << "BaseView constructor with parametrs\n";
}
///�������� ��'��� 
void BaseView::display(){
	showHeader();
	showContent();
	showFooter();
}