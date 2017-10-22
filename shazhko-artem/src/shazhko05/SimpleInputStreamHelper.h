#pragma once
#include "InputStreamHelper.h"
#include <iostream>

class  SimpleInputStreamHelper :public InputStreamHelper
{
private:
	std::istream * iStream;
	char *buffer;
	size_t bufferSize;
public:
	 SimpleInputStreamHelper(std::istream& _iStream);
	 void SetBuffer(size_t newSize);
	 virtual ~ SimpleInputStreamHelper();
	StreamHelperArg* Read() override;
	bool isEnd()override;
};
