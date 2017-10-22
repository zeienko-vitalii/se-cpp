#pragma once
#include "StreamHelperFactory.h"

class SimpleStreamHelperFactory : public StreamHelperFactory {
public:
	virtual ~SimpleStreamHelperFactory(){}
	InputStreamHelper* CreateInputStreamHelper(std::istream &iStream)override;
	OutputStreamHelper* CreateOutputStreamHelper(std::ostream &oStream)override;
};