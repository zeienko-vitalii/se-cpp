#include <gtest\gtest.h>
#include "MockEvent.h"
#include "..\khalin04\SimpleTimer.h"
#include "..\khalin04\EventArgs.h"
#include "..\khalin04\SimpleTimer.cpp"
#include "..\khalin04\EventArgs.cpp"

TEST(SimpleTimer, checkEventNotifying_shouldNotifyAll) {
	MockEvent mock;
	EventArgs dummy;
	const int delay = 0;
	SimpleTimer timer(&mock, &dummy, delay);

	timer.start();

	const bool expectedNotifyingRes = true;
	bool actual = mock.allWereNotified();

	ASSERT_EQ(expectedNotifyingRes, actual);
}