/**
* @file BaseView.cpp
* @brief Contains BaseView class implementation
* @author Khalin Yevhen
* @version 0.0.1
* @date 23.09.17
*/

#include "BaseView.h"

BaseView::BaseView(Button *btn, std::ostream *out): btn(btn), out(out)
{
}

void BaseView::display()
{
	printHeader();
	printContent();
	printFooter();
}

BaseView::~BaseView()
{
}

void BaseView::setDataSource(Button * btn)
{
	this->btn = btn;
}

Button * BaseView::getDataSource()
{
	return btn;
}

std::ostream * BaseView::getOutputStream()
{
	return out;
}

void BaseView::setOutputStream(std::ostream * out)
{
	this->out = out;
}
