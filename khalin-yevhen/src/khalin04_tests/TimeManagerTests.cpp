/**
* @file TimeManagerTests.cpp
* @brief Contains TimeManager tests 
* @author Khalin Yevhen
* @version 0.0.1
* @date 28.09.17
*/

#include <gtest\gtest.h>
#include "..\khalin04\TimeManager.h"
#include "..\khalin04\TimeManager.cpp"

TEST(TimeManagerTest, checkHandlerCalling_shouldBeCalled) {
	static bool handlerWasCalled = false;
	auto handler = []() { handlerWasCalled = true; };
	TimeManager tmanager;

	tmanager.setOnTimerAction(handler);
	tmanager.OnTimerAction(); // handler is supposed to be called
	
	ASSERT_TRUE(handlerWasCalled);
}
