/*
 * @file BaseView.h
 * Part of lab03
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */

#ifndef BASEVIEW_H_
#define BASEVIEW_H_

class BaseView {

protected:
	virtual void ShowHeader();

	virtual void ShowContent();

	virtual void ShowFooter();

public:
	BaseView();

	void Display();

	virtual ~BaseView();


};

#endif /* BASEVIEW_H_ */
