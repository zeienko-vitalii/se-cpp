/**
* @file Logger.h
* @brief Contains Logger class
* @author Khalin Yevhen
* @version 0
* @date 12.09.17
*/

#pragma once

#include <iostream>

// debug mode
#define DBG_MODE

/**
* @brief Provides methods for logging information
* @author Khalin Yevhen
*/
class Logger
{
public:

	/**
	* @brief returns a logger instance
	*/
	static Logger& getLogger();

	/**
	* @brief prints msg 
	*/
	void info(char *msg);

	void setStream(std::ios_base *os); // TODO add implementation;

private:
	Logger();
	~Logger();
	Logger(Logger const&) = delete;
	Logger& operator= (Logger const&) = delete;
};

