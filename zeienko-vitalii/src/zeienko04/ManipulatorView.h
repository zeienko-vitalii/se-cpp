/**
* @file ManipulatorView.h
* Declaration of the ManipulatorView class.
* @author Vitalii Zeienko
* @version 0.0.3
* @date 2017.09.09
*/

#ifndef MANIPULATOR_VIEW_H_
#define MANIPULATOR_VIEW_H_
#include "Manipulator.h"
#include "BaseView.h"
#include "Event.h"
/** This class provides an output information about manipulator */
class ManipulatorView : public BaseView, public Event {
public:
	/**
	 * Constructor takes constant Manipulator`s object and assigns if to ManipulatorView::manipulator.
	 * @param manipulator this object`s information will be printed on the screen.
	 * @param os is the type of an output stream 
	 * */
	ManipulatorView(const Manipulator& manipulator, std::ostream* os);
	
	static void OnTimerAction(ManipulatorView* pArgs) {
		ManipulatorView* p_ManV = static_cast<ManipulatorView*>(pArgs);
		p_ManV->display();
	}

	/**
	 * Outputs ManipulatorView::manipulator object.
	 * */
	void show();

	/**
	* Outputs the Header.
	* */
	void showHeader();
	/**
	* Outputs the Content.
	* */
	 void showContent();
	/**
	* Outputs the Footer.
	* */
	 void showFooter();

	/**
	 * Destructor. Destroys object and  frees the memory which was allocated.
	 * */
	virtual ~ManipulatorView();
};

#endif /* MANIPULATOR_VIEW_H_ */
