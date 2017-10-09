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

/** This class provides an output information about manipulator */
class ManipulatorView : public BaseView {
public:
	/**
	 * Constructor takes constant Manipulator`s object and assigns if to ManipulatorView::manipulator.
	 * @param manipulator this object`s information will be printed on the screen.
	 * */
	ManipulatorView(const Manipulator& manipulator, std::ostream* os);

	/**
	 * Outputs ManipulatorView::manipulator object.
	 * */
	void show();

	/**
	 * Destructor. Destroys object and  frees the memory which was allocated.
	 * */
	virtual ~ManipulatorView();
};

#endif /* MANIPULATOR_VIEW_H_ */
