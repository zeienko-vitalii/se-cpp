/**
 * @file  ManipulatorView.cpp
 * Realization of the ManipulatorView class.
 * @author Vitalii Zeienko
 * @version 0.0.3
 * @date 2017.09.09
 */

#include "ManipulatorView.h"
#include <iostream>

ManipulatorView::ManipulatorView(const Manipulator& manipulator, std::ostream* os) : BaseView(manipulator, os) {}

void ManipulatorView::show() {
	(*getOutputStream()) << " Manipulator`s type: " << (getManipulator()).getType()
			<< std::endl;
	(*getOutputStream()) << " Manipulator`s amount of buttons: "
			<< (getManipulator()).getAmountOfButtons() << std::endl;
}

ManipulatorView::~ManipulatorView() {
}
