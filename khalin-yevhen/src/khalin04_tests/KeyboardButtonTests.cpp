/**
* @file KeyboardButtonTest.cpp
* @brief Contains KeyboardButton class tests
* @author Khalin Yevhen
* @version 0.0.1
* @date 28.09.17
*/

#include "KeyboardButtonTest.h"

TEST_F(KeyboardButtonTest, subAssignmentOperator_subBCharFromABC_returnAC) {
	string expected = "AC";
	const char removingChar = 'B';
	(*btn) -= removingChar;
	string actual = btn->getName();
	ASSERT_EQ(expected, actual);
}

TEST_F(KeyboardButtonTest, equalToOperator_compareCodeWithValue_returnTrue) {
	const int value = 123;
	const bool expected = true;
	bool actual = (*btn) == value;
	ASSERT_EQ(expected, actual);
}
