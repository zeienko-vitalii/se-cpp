/**
* @file Counter.cpp
* @brief Contains Counter class implementation.
* @author Khalin Yevhen
* @version 0.0.1
* @date 19.10.17
*/

#include "Counter.h"

Counter::Counter(): value(0)
{
}

void Counter::reset()
{
	value = 0;
}

void Counter::operator++()
{
	value++;
}

void Counter::operator--()
{
	value--;
}

Counter::~Counter()
{
}

int Counter::getValue()
{
	return value;
}
