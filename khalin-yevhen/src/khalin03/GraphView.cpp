/**
* @file GraphView.cpp
* @brief Contains GraphView class implementation
* @author Khalin Yevhen
* @version 0.0.1
* @date 23.09.17
*/

#include "GraphView.h"

GraphView::GraphView(Button * btn, std::ostream *out): BaseView(btn, out)
{
}

GraphView::~GraphView()
{
}

void GraphView::printHeader()
{
	(*getOutputStream()) << "GraphView::printHeader()" << std::endl;
}

void GraphView::printContent()
{
	(*getOutputStream()) << "GraphView::printContent()" << std::endl;
}

void GraphView::printFooter()
{
	(*getOutputStream()) << "GraphView::printFooter()" << std::endl;
}
