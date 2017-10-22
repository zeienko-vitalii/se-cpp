/**
* @file main.cpp
* @brief Contains tests of LinkedList accessing methods
* @author Khalin Yevhen
* @version 0.0.1
* @date 22.10.17
*/

#include <gtest\gtest.h>
#include "..\khalin06\LinkedList.h"
#include <iostream>
using namespace std;

/**
* @brief A dummy class for passing as a parameter.
*/
class Dummy {
public:
	virtual ~Dummy() { }
};

TEST(LinkedList, get_getElemWithNegIndex_shouldThrowExc) {
	LinkedList<Dummy> list;
	const int accessIndex = -1;

	// act
	list.addLast(&Dummy());
	bool excThrown = false;

	try {
		list.get(accessIndex);
	} catch (std::range_error) {
		excThrown = true;
	}

	ASSERT_TRUE(excThrown);
}

TEST(LinkedList, get_getElemWithInxBiggerThanListSize_shouldThrowExc) {
	LinkedList<Dummy> list;
	const int accessIndex = 1;

	// act
	list.addLast(&Dummy());
	bool excThrown = false;

	try {
		list.get(accessIndex);
	} catch (std::range_error) {
		excThrown = true;
	}

	ASSERT_TRUE(excThrown);
}

TEST(LinkedList, get_getElemWithCorrectIndex_shouldNotThrowExc) {
	LinkedList<Dummy> list;
	const int accessIndex = 0;

	// act
	list.addLast(&Dummy());
	bool excThrown = false;

	try {
		list.get(accessIndex);
	} catch (std::range_error) {
		excThrown = true;
	}

	ASSERT_FALSE(excThrown);
}