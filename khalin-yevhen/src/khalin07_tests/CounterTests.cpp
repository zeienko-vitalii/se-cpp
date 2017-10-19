/**
* @file CounterTests.cpp
* @brief Contains tests of the <b>Counter</b> class.
* @author Khalin Yevhen
* @version 0.0.1
* @date 19.10.17
*/

#include "..\khalin07\Counter.h"
#include "..\khalin07\Counter.cpp"
#include <gtest\gtest.h>

TEST(Counter, incOperator_setZeroValueAndIncrease_shouldSetValue1) {
	Counter counter;
	const int expectedValue = 1;
	
	// act
	++counter;
	const int actualValue = counter.getValue();

	ASSERT_EQ(expectedValue, actualValue);
}

TEST(Counter, decOperator_setZeroValueAndDecrease_shouldSetNegativeValue) {
	Counter counter;
	const int expectedValue = -1;

	// act
	--counter;
	const int actualValue = counter.getValue();

	ASSERT_EQ(expectedValue, actualValue);
}