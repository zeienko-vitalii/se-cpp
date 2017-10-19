/**
* @file Counter.h
* @brief Contains Counter class declaration.
* @author Khalin Yevhen
* @version 0.0.1
* @date 19.10.17
*/

#pragma once

/**
* @brief An entity with inner value that can be increased and decreased.
*
* @author Khalin Yevhen
*/
class Counter
{
public:
	Counter();

	/**
	* @brief Set zero
	*/
	void reset();
	
	/**
	* @brief Increases inner value.
	*/
	void operator++();
	
	/**
	* @brief Decreases inner value.
	*/
	void operator--();

	virtual ~Counter();

	int getValue();
private:
	int value;
};

