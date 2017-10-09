/*
 * CompMonitor.h
 *
 *  Created on: 9 ���. 2017 �.
 *      Author: Snow Pandemic
 */

#ifndef COMPMONITOR_H_
#define COMPMONITOR_H_

#include "Monitor.h"

class CompMonitor: public Monitor {
public:
	CompMonitor();
	virtual ~CompMonitor();
	int getPlugInCount() const;
	void setPlugInCount(int plugInCount);
	const string& getPortInterface() const;
	void setPortInterface(const string& portInterface);


	virtual string toString();

private:
	string portInterface;
	int plugInCount;
};

#endif /* COMPMONITOR_H_ */
