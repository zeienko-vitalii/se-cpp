#include "ComputerManipulator.h"
#include <cstring> // strcmp

#pragma once

class Functor {
public:
	bool operator()(ComputerManipulator& tObject) {
		return strcmp(tObject.getConnectionInterface(), "Bluetooth") == 0 ? true : false;
	}
};