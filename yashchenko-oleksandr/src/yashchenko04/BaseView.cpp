/**
 * @file BaseView.cpp
 * Implementation of class BaseView
 * @author Zhmaiev Anatolii
 * @version 0.0.1
 * @date Sep 23, 2015
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
