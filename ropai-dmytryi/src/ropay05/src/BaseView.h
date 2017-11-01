/*
 * @file BaseView.h
 * Part of lab03
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */
#include "Manipulator.h"
#ifndef BASEVIEW_H_
#define BASEVIEW_H_

class BaseView {

protected:

	Manipulator *manip;

	virtual void showHeader() = 0;

	virtual void showContent() = 0;

	virtual void showFooter() = 0;

public:
	BaseView();

	BaseView(Manipulator *manip);

	void Display();

	virtual ~BaseView();


};

#endif /* BASEVIEW_H_ */
