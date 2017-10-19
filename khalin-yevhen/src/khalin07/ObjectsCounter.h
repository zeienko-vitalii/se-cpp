/**
* @file ObjectsCounter.h
* @brief Contains ObjectsCounter class declaration.
* @author Khalin Yevhen
* @version 0.0.1
* @date 19.10.17
*/

#pragma once
#include "Counter.h"
#include "..\khalin06\Functors.h"

/**
* @file Counter.h
* @brief Contains Counter class declaration.
* @author Khalin Yevhen
* @version 0.0.1
* @date 19.10.17
*/

/**
* @brief A counter implementation that can be represented as an instance
* of the Action class.
*
* The value of the counter is changed according to the predicate <i>p</i> each time the 
* <i>act</i> method is called.
*
* @author Khalin Yevhen
*/
template <class E>
class ObjectsCounter : public Counter, public functors::Action<E>
{
public:
	
	/**
	* @param p a predicate that will be used when <i>act</i> method is called.
	*/
	ObjectsCounter(functors::Predicate<E> *p) : predicate(p) { }

	virtual ~ObjectsCounter() { }

	// inherited method
	void act(E *obj) {
		if (predicate->test(obj)) {
			this->operator++();
		}
	}

private:
	functors::Predicate<E> *predicate; // the rule of the counter increasing
};

