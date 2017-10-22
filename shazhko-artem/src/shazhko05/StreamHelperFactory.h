#pragma once
#include "InputStreamHelper.h"
#include "OutputStreamHelper.h"
#include <iostream>

class StreamHelperFactory abstract {
public:
	virtual ~StreamHelperFactory() {}
	virtual InputStreamHelper* CreateInputStreamHelper(std::istream &iStream)=0;
	virtual OutputStreamHelper* CreateOutputStreamHelper(std::ostream &oStream) = 0;
};