/**
 * @file BaseView.cpp
 * BaseView functions realization.
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.10.02
 */
#include <iostream>
#include "BaseView.h"

BaseView::BaseView() {
	// TODO Auto-generated constructor stub

}

BaseView::BaseView(Room *room): room(room){

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
