/**
 * @file BaseView.cpp
 * Implementation of class BaseView
 * @author Ященко Олександр
 * @version 0.0.1
 * @date 2017.10.20
 */

#include "BaseView.h"

BaseView::BaseView() {

}

BaseView::~BaseView() {
}

void BaseView::showInfo() {
	showHeader();
	showContent();
	showFooter();
}

void BaseView::showHeader() {
}

void BaseView::showContent() {
}

void BaseView::showFooter() {
}
