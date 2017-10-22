#pragma once
#include "OutputStreamHelper.h"
#include <iostream>

class  SimpleOutputStreamHelper :public OutputStreamHelper
{
private:
	std::ostream *  oStream;
public:
	SimpleOutputStreamHelper(std::ostream& _iStream);
	virtual ~SimpleOutputStreamHelper();
	void Write(StreamHelperArg* arg) override;
};
