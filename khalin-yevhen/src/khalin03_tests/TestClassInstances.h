/**
* @file TestClassInstances.h
* @brief Contains declaration of the TestClassInstances
* @author Khalin Yevhen
* @version 0.0.1
* @date 17.09.17
*/

#pragma once
#include <gtest\gtest.h>
#include "..\khalin03\Utilities.h"

/**
* @brief Contains declaration of the classes container for a Utilities test fixture
* @author Khalin Yevhen
*/
class TestClassInstances : public ::testing::Test {
protected:
	
	class BaseClass {
	public:

		/**
		* @brief According to 'instanceof' function description
		* any incoming object must be an instance of a polymorphic type
		*/
		virtual void smth() {} 
	} base;

	class ChildClass : public BaseClass {

	} child;

	class OtherClass {
	public:
		/**
		* @brief According to 'instanceof' function description
		* any incoming object must be an instance of a polymorphic type
		*/
		virtual void smth() {}
	} other;
public:
	BaseClass * getBaseClassInstance() { return &base; }
	ChildClass * getChildClassInstance() { return &child; }
	OtherClass * getOtherClassInstance() { return &other; }
};