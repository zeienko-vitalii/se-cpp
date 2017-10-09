/**
 * @file Screen.h
 * Contains class for viewing of Monitor objects.
 * @author pavlov-vs
 * @version 0.0.1
 * @date 2017.09.09
 */
#pragma once
#include "BaseScreen.h"
using namespace std;

/**
 * Class which views information of Monitor object.
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
	Screen(Monitor* monitor);
	virtual ~Screen();

	/**
	 *Outputs information about `window` into console.
	 */
	void viewMonitor();

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
