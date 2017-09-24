/**
* @file TestUtilities.cpp
* @brief Contains tests of khalin03 utilities
* @author Khalin Yevhen
* @version 0.0.1
* @date 22.09.17
*/

#include "emptyTestClasses.h"

TEST(testInstanceofFunction, OtherInstanceofBase_falseReturn) {
	EmptyOtherClass other;
	bool expected = false;
	bool actual = instanceof<EmptyBaseClass>(&other);
	ASSERT_EQ(expected, actual);
}

TEST(testInstanceofFunction, ChildInstanceofBase_trueReturn) {
	EmptyChildClass child;
	bool expected = true;
	bool actual = instanceof<EmptyBaseClass>(&child);
	ASSERT_EQ(expected, actual);
}

TEST(testInstanceofFunction, BaseInstanceofChild_falseReturn) {
	EmptyBaseClass base;
	bool expected = false;
	bool actual = instanceof<EmptyChildClass>(&base);
	ASSERT_EQ(expected, actual);
}

TEST(testInstanceofFunction, castChildToBase_trueReturn) {
	EmptyChildClass c;
	EmptyBaseClass *base = &c;
	bool expected = true;
	bool actual = instanceof<EmptyChildClass>(base);
	ASSERT_EQ(expected, actual);
}