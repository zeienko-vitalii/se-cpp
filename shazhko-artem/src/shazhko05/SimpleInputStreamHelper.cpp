/**
* @file SimpleInputStreamHelper.cpp
* @brief Содержит реализацию класса  SimpleInputStreamHelper
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
#include "SimpleInputStreamHelper.h"
#include <regex>

SimpleInputStreamHelper::SimpleInputStreamHelper(std::istream& _iStream) :iStream(&_iStream), bufferSize(1024){ this->buffer=new char[bufferSize]; }

void SimpleInputStreamHelper::SetBuffer(size_t newSize)
{
	if (newSize < 1)return;
	bufferSize = newSize;
	if (this->buffer)
		delete this->buffer;
	this->buffer = new char[newSize];
}

SimpleInputStreamHelper::~SimpleInputStreamHelper() { 
	if(this->buffer)
	delete this->buffer;
	iStream = NULL; 
}

 bool SimpleInputStreamHelper::isEnd()
{
	if (iStream) return iStream->eof();
	return true;
}

 StreamHelperArg* SimpleInputStreamHelper::Read()
{
	 using namespace std;
	std::string result;
	std::cmatch regex_result;
	std::string str;
	iStream->getline(buffer, bufferSize);
	if (std::regex_search(buffer, regex_result, std::regex{ "^([a-zA-Z0-9_]+) : (.*)$" })) {
		return new StreamHelperArg(regex_result[1].str(), regex_result[2].str());
	}
	return new StreamHelperArg("", "");
}
