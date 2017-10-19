/**
* @file ObjectCounterTests.cpp
* @brief Contains tests of the <b>ObjectsCounter</b> class.
* @author Khalin Yevhen
* @version 0.0.1
* @date 19.10.17
*/

#include "..\khalin07\ObjectsCounter.h"
#include <gtest\gtest.h>
#include "StubPredicate.h"
#include "Dummy.h"

TEST(ObjectsCounter, call3TimesWithTrueRetPredicate_shouldSetValue3) {
	StubPredicate<Dummy> stub(true);
	ObjectsCounter<Dummy> counter(&stub);
	const int expectedCounterValue = 3;
	const int callsAmount = expectedCounterValue;

	// act
	for (auto i = 0; i < callsAmount; i++) {
		counter.act(&Dummy());
	}
	
	const int actualCounterValue = counter.getValue();

	ASSERT_EQ(expectedCounterValue, actualCounterValue);
}

TEST(ObjectsCounter, call5TimesWithFalseRetPredicate_shouldNotSetValue) {
	StubPredicate<Dummy> stub(false);
	ObjectsCounter<Dummy> counter(&stub);
	const int expectedCounterValue = 0;
	const int callsAmount = 5;
	
	// act
	for (auto i = 0; i < callsAmount; i++) {
		counter.act(&Dummy());
	}

	const int actualCounterValue = counter.getValue();

	ASSERT_EQ(expectedCounterValue, actualCounterValue);
}