#include "SimpleStreamHelperFactory.hpp"
#include "SimpleOutputStreamHelper.h"
#include "SimpleInputStreamHelper.h"

InputStreamHelper * SimpleStreamHelperFactory::CreateInputStreamHelper(std::istream & iStream)
{
	return new SimpleInputStreamHelper(iStream);
}

OutputStreamHelper * SimpleStreamHelperFactory::CreateOutputStreamHelper(std::ostream & oStream)
{
	return new SimpleOutputStreamHelper(oStream);
}
