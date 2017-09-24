/**
* @file TestClassInstances.h
* @brief Contains declaration of the empty testing classes
* @author Khalin Yevhen
* @version 0.0.1
* @date 17.09.17
*/

#pragma once
#include <gtest\gtest.h>
#include "..\khalin03\Utilities.h"

/**
* @brief Represents an empty testing base class for testing types casting or anything else
* @author Khalin Yevhen
*/
class EmptyBaseClass {
public:

	/**
	* @brief Sets polymorphic behavior for testing class.
	*/
	virtual void forPolymorphicBehavior();
};

/**
* @brief Represents an empty testing child class for testing types casting or anything else
* @author Khalin Yevhen
*/
class EmptyChildClass : public EmptyBaseClass { };

/**
* @brief Represents an empty testing other class for testing types casting or anything else
* @author Khalin Yevhen
*/
class EmptyOtherClass {
public:

	/**
	* @brief Sets polymorphic behavior for testing class.
	*/
	virtual void forPolymorphicBehavior();
};