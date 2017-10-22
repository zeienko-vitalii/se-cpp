#pragma once
#include <string>

class StreamHelperArg{
public:
	StreamHelperArg();
	StreamHelperArg(std::string _nameVulue, std::string _value);
	virtual ~StreamHelperArg();

	std::string nameVulue;
	std::string value;
};