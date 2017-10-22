/*
 * Verificator.h
 *
 *  Created on: 22 окт. 2017 г.
 *      Author: JR_Rider
 */
#pragma once
#include "Window.h"
class Verificator {

public:
	Verificator();
	virtual ~Verificator();
	bool operator ()(Window win) {
		if (win.getX2() < win.getX1())
			return true;
		if (win.getY2() < win.getY1())
			return true;
		return false;
	}
};
