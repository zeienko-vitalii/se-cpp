#pragma once
#include "StreamHelperArg.h"

class InputStreamHelper abstract{
public:
	virtual ~InputStreamHelper() {}
	virtual StreamHelperArg* Read()=0;
	virtual bool isEnd() = 0;
};