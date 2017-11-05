/**
* @file BaseView.cpp
* Realization of the BaseView class.
* @author Vitalii Zeienko
* @version 0.0.1
* @date 2017.09.24
*/

#include "BaseView.h"
#include <stdio.h>

BaseView::~BaseView() {}

BaseView::BaseView(Manipulator* manipulator, std::ostream * os) : iManipulator(manipulator), out(os){}

BaseView::BaseView(ComputerManipulator * manipulator, std::ostream * os) : iComputerManipulator(manipulator) , out(os)
{
}

void BaseView::display(){
	
	showHeader();
	showContent();
	showFooter();

}

void BaseView::setManipulator(Manipulator* newManip) {
	iManipulator = newManip;
}
void BaseView::setComputerManipulator(ComputerManipulator * newCompManip)
{
	this->iComputerManipulator = newCompManip;
}
;

void BaseView::setOutputStream(std::ostream * os)
{
	this->out = os;
}

std::ostream * BaseView::getOutputStream()
{
	return this->out;
}

Manipulator* BaseView::getManipulator()
{
	return this->iManipulator;
}

ComputerManipulator * BaseView::getComputerManipulator()
{
	return iComputerManipulator;
}

void BaseView::OnTimerAction()
{
	//	BaseView* pbv = dynamic_cast<BaseView*>(this);
	//this->display();
}