/**
 * @file BaseView.h
 * Declaration of class BaseView
 * @author Ященко Олександр
 * @version 0.0.1
 * @date 2017.10.20
 */

#ifndef BASEVIEW_H_
#define BASEVIEW_H_
/**
 * Base View class.
 */
class BaseView {
public:
	/**
	 * Constructor.
	 */
	BaseView();
	/**
	 * Destructor.
	 */
	virtual ~BaseView();
	/**
	 * Shows full information about object.
	 */
	void showInfo();
protected:
	/**
	 * Shows header for information.
	 */
	virtual void showHeader();
	/**
	 * Shows main content about object.
	 */
	virtual void showContent();
	/**
	 * Shows footer of information.
	 */
	virtual void showFooter();
};

#endif /* BASEVIEW_H_ */
