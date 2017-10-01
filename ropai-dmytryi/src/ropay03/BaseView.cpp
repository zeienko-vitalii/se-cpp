/*
 * @file BaseView.cpp
 * Part of lab03
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */
#include <iostream>
#include "BaseView.h"

BaseView::BaseView() {
	// TODO Auto-generated constructor stub

}

BaseView::BaseView(Manipulator manip): manip(manip){

}

void BaseView::showHeader(){
	cout << "BaseView::showHeader()" << endl;
}

void BaseView::showContent(){
	cout << "\n From BaseView: " << endl;
	cout << "Device type: " << this->manip.getType() << endl;
	cout << "Number of buttons: " << this->manip.getCount() << endl;
}

void BaseView::showFooter(){
	cout << "\n BaseView::showFooter()" << endl;
}

void BaseView::Display(){
	showHeader();
	showContent();
	showFooter();
}

BaseView::~BaseView() {
	// TODO Auto-generated destructor stub
}

