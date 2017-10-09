/**
 * @file BaseScreen.h
 * Contains base class for viewing of Monitor objects.
 * @author pavlov-vs
 * @version 0.0.1
 * @date 2017.09.09
 */
#pragma once

#include "Monitor.h"
/**
 * Class which views information of Monitor object.
 * Monitor - object which must be viewed.
 */
class BaseScreen {
protected:
	///Object to be viewed.
	Monitor* data;
	/**
	 * Outputs header of information.
	 */
	virtual void showHeader()=0;
	/**
	 * Outputs main information about Monitor.
	 */
	virtual void showContent()=0;

	/**
	 * Outputs footer of information.
	 */
	virtual void showFooter()=0;
public:
	/**
	 * Default constructor, Monitor set to default.
	 */
	BaseScreen();
	/**
	 * Constructor for all fields.
	 * @param Monitor - Monitor which must be set
	 */
	BaseScreen(Monitor* monitor);
	virtual ~BaseScreen();
	/**
	 *Outputs information about `Monitor` into console.
	 */
	void Display();

};
