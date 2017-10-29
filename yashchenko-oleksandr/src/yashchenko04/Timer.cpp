#include "Timer.h"
#include "GraphScreen.h"

int Timer::start(UINT ms, int numCntActions) {
	// Set the timer.
	UINT_PTR timer = SetTimer(NULL, NULL, ms, (TIMERPROC) GraphScreen::onTimerAction);
	if (timer == NULL) {
		cout << "SetTimer failed (%lu)\n" << GetLastError() << endl;
		return 1;
	}

	MSG msg;

	while (numCntActions--) {
		GetMessage(&msg, 0, 0, 0);
		DispatchMessage(&msg);
	}

	if (0 == KillTimer(NULL, timer)) {
		return 1;
	}
	return 0;
}
