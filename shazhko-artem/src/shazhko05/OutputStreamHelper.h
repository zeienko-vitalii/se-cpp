#pragma once
#include "StreamHelperArg.h"

class OutputStreamHelper abstract {
public:
	virtual ~OutputStreamHelper() {}

	virtual
	void Write(StreamHelperArg* arg) = 0;
};