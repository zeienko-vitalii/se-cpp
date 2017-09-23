/**
* @file ScreenView.cpp
* @brief Contains ScreenView class implementation
* @author Khalin Yevhen
* @version 0.0.1
* @date 23.09.17
*/

#include "ScreenView.h"

ScreenView::ScreenView(Button * btn, std::ostream *out) : BaseView(btn, out)
{
}

ScreenView::~ScreenView()
{
}

void ScreenView::printHeader()
{
	(*getOutputStream()) << "ScreenView::printHeader()" << std::endl;
}

void ScreenView::printContent()
{
	(*getOutputStream()) << "ScreenView::printContent()" << std::endl;
}

void ScreenView::printFooter()
{
	(*getOutputStream()) << "ScreenView::printFooter()" << std::endl;
}
