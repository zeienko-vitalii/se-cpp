/*
 * AutoWheel.h
 *
 *  Created on: 8 окт. 2017 г.
 *      Author: Viktotia
 */

#ifndef AUTOWHEEL_H_
#define AUTOWHEEL_H_
#include<string>
#include "Wheel.h"

class AutoWheel: public Wheel {
public:
	AutoWheel();
	AutoWheel(int diameter, int width, string unit, string rubberNamem,
			string manufacturerRubber);
	virtual ~AutoWheel();

	const string& getManufacturerRubber();

	void setManufacturerRubber(const string& manufacturerRubber);

	const string& getRubberName();

	void setRubberName(const string& rubberName);
	virtual string ToString();

private:
	string rubberName;
	string manufacturerRubber;
};

#endif /* AUTOWHEEL_H_ */
