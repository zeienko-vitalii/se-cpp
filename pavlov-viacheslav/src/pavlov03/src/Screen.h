/**
 * @file Screen.h
 * Contains class for viewing of Window objects.
 * @author pavlov-vs
 * @version 0.0.1
 * @date 2017.09.09
 */
#pragma once
#include "BaseScreen.h"
using namespace std;

/**
 * Class which views information of Window object.
 */
class Screen: public BaseScreen {

public:
	/**
	 * Default constructor, window set to default.
	 */
	Screen();
	/**
	 * Constructor for all fields.
	 * @param window - window which must be set
	 */
	Screen(Window* window);
	virtual ~Screen();

	/**
	 *Outputs information about `window` into console.
	 */
	void viewWindow();

	/**
	 * Outputs footer of information.
	 */
	virtual void showHeader() override;
	/**
	 * Outputs main information about window.
	 */
	virtual void showContent() override;
	/**
	 * Outputs header of information.
	 */
	virtual void showFooter() override;
};
