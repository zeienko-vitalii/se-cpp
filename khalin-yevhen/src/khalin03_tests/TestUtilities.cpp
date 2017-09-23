/**
* @file TestUtilities.cpp
* @brief Contains tests of khalin03 utilities
* @author Khalin Yevhen
* @version 0.0.1
* @date 22.09.17
*/

#include "TestClassInstances.h"

TEST_F(TestClassInstances, OtherClassInstanceOfBase_falseReturn) {
	OtherClass other;
	bool expected = false;
	bool actual = instanceof<BaseClass>(&other);
	ASSERT_EQ(expected, actual);
}

TEST_F(TestClassInstances, ChildClassInstanceOfBase_trueReturn) {
	ChildClass child;
	bool expected = true;
	bool actual = instanceof<BaseClass>(&child);
	ASSERT_EQ(expected, actual);
}

TEST_F(TestClassInstances, BaseClassInstanceOfChildClass_falseReturn) {
	BaseClass base;
	bool expected = false;
	bool actual = instanceof<ChildClass>(&base);
	ASSERT_EQ(expected, actual);
}

TEST_F(TestClassInstances, castChildToBase_checkInstantiation_trueRet) {
	ChildClass c;
	BaseClass * base = &c;
	bool t = instanceof<ChildClass>(base);
	ASSERT_TRUE(t);
}