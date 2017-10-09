/**
 * @file CompMonitorScreen.h
 * Contains class for viewing of CompMonitor objects.
 * @author pavlov-vs
 * @version 0.0.1
 * @date 2017.09.09
 */

#pragma once

#include "CompMonitor.h"
#include "Screen.h"

/**
 * Class which views information of CompMonitor object.
 * compMonitor - object which must be viewed.
 */
class CompMonitorScreen: public Screen {
public:
	/**
	 * Default constructor, compMonitor set to default.
	 */
	CompMonitorScreen();
	virtual ~CompMonitorScreen();

	/**
	 * Constructor for all fields.
	 * @param compMonitor - compMonitor which must be set
	 */
	CompMonitorScreen(CompMonitor* compMonitor);

	/**
	 * Sets information into internal compMonitor object of this class.
	 * @param compMonitor - object to be set.
	 */
	void setCompMonitor(CompMonitor compMonitor);
	/**
	 *Outputs information about `compMonitor` into console.
	 */
	void viewCompMonitor();
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
