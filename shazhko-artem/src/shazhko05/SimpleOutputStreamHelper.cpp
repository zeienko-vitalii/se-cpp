#include "SimpleOutputStreamHelper.h"

SimpleOutputStreamHelper::SimpleOutputStreamHelper(std::ostream& _oStream) :oStream(&_oStream) {}


SimpleOutputStreamHelper::~SimpleOutputStreamHelper() { oStream = NULL; }

void SimpleOutputStreamHelper::Write(StreamHelperArg* arg)
{
	*oStream << arg->nameVulue << " : " << arg->value << "\n";
}