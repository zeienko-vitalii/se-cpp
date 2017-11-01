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

BaseView::BaseView(Manipulator *manip): manip(manip){

}

void BaseView::showHeader(){

}

void BaseView::showContent(){

}

void BaseView::showFooter(){

}

void BaseView::Display(){
	showHeader();
	showContent();
	showFooter();
}

BaseView::~BaseView() {
	// TODO Auto-generated destructor stub
}

