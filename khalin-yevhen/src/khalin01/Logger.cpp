/**
* @file Logger.cpp
* @brief Contains Logger implementation
* @author Khalin Yevhen
* @version 0
* @date 12.09.17
*/

#include "Logger.h"
#include <iostream>

Logger::Logger()
{
}

Logger::~Logger()
{
}

Logger& Logger::getLogger()
{
	static Logger log;
	return log;
}

void Logger::info(char *msg)
{
#ifdef DBG_MODE
	std::cout << msg << std::endl; // TODO replace to ios_base method instead cout
#endif
}
