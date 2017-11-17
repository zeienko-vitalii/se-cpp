#define _WIN32_WINNT 0x0600
#include "TimerEx.h"

void TimerEx::go(){
	// Pointer to timer object.
	PTP_TIMER pTimer;
	// Parameters to be passed to callback.
	TimerParam timerParam = TP;

	ULARGE_INTEGER ulDueTime;
	FILETIME fileDueTime;

	ulDueTime.QuadPart = -10000 * (ULONGLONG) ms;
	fileDueTime.dwHighDateTime = ulDueTime.HighPart;
	fileDueTime.dwLowDateTime = ulDueTime.LowPart;

	pTimer = CreateThreadpoolTimer(GraphScreen::onTimerAction, (PVOID) &timerParam, 0);
	if (NULL == pTimer) {
		printf("CreateThreadpoolTimer failed (%lu)\n", GetLastError());
		return;
	}

	// Set a timer to wait for ms milliseconds.
	SetThreadpoolTimer(pTimer, &fileDueTime, ms, 0);

	printf("Waiting for %d ms %d times.\n", ms, timerParam.numCntActions);

	// Wait for the timer.
	while (timerParam.numCntActions) {
		Sleep(500);
	}

	// Do this to prevent callback calling.
	SetThreadpoolTimer(pTimer, 0, 0, 0);
	WaitForThreadpoolTimerCallbacks(pTimer, true);

	// Finally close timer.
	CloseThreadpoolTimer(pTimer);

	printf("Timer was signaled.\n");
}
