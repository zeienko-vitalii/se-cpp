/**
* @file Timer.h
* Declaration of the Timer class.
* @author Vitalii Zeienko
* @version 0.0.1
* @date 2017.10.01
*/

#include <process.h> 
#include <windows.h> 

#include "Event.h"

// Exclude rarely-used stuff from Window's header. to exclude APIs such as Cryptography, DDE, RPC, Shell, and Windows Sockets.
#define WIN32_LEAN_AND_MEAN 

#ifndef TIMER_H_
#define TIMER_H_

/**
* This class is the representation of the timer. 
* It performs OnTimerAction() execution on the certain time lapse maximum 4 times.
* This class can be used only by clases which extends class Event or by classes which are the heir of such ones.
* @warning T class have to inherit Event class.
*/
template<typename T = Event>
class Timer {
private:
	unsigned int thread_id; /// Current Thread`s ID 
	T* eventObject;			/// Handled object
	bool is_running;		/// State that is responsible for execution of OnTmerAction()
	HANDLE event_handle;	/// Handle of the created event.
	HANDLE thread_handle;	/// Handle of the created thread which will perform the operation 
	const char* lpName;		/// Name of the event
	int timeLapse;			/// Interval time
	const int MAX_RUNNING_TIMES_ = 4;	/// Maximum number of execution of the thread
	void (*OnTimerActionRun)(T* pArgs); /// Function pointer. Used as a pointer to the static function ManipulatorView::OnTimerAction(), which perfroms certain operation
	int counter;						/// It counts a number of timer's runs

	/**
	* This function is used for thread execution. It performs ceratain amount (no more 4 times) of calls of the OnTimerActionRun() pointer function.
	* In this function timer is performing by wainting execution of the event_handle which keeps the handle of the created event.
	* This tells the compiler the rules that apply for setting up the stack, pushing arguments and getting a return value.
	* @param p_thread_data is a void pointer. In this function is used for getting a pointer to 'this' object.
	* @return 0 if the running thread ends successful
	* */
	static unsigned int __stdcall TimerThread(void *p_thread_data)
	{
		Timer* p_Timer = static_cast<Timer*>(p_thread_data);

		while (p_Timer->is_running)
		{
			// If counter less than MAX_RUNNING_TIMES_ then performs waiting.
			// Otherwise, is_running sets to false and breaks while loop
			if (p_Timer->counter++ < p_Timer->MAX_RUNNING_TIMES_) {	
				switch (WaitForSingleObject(p_Timer->event_handle, p_Timer->timeLapse)) // do something every timeLapse seconds
				{
				case WAIT_TIMEOUT:
					p_Timer->OnTimerActionRun(p_Timer->eventObject);
				}
			}
			else {
				p_Timer->is_running = false;
			}
		}
		return(0);
	}

public:
	
	/**
	* This constructor sets: Timer<>::eventObject with value of the argument evObj and
	* Timer<>::OnTimerActionRun with a appropriate pointer function. All other fields sets to default.
	* @param evObj this object will be assigned to Timer<>::eventObject and  class of this object have to inherit Event class.
	* @param OnTimerAction pointer function to the static function ManipulatorView::OnTimerAction()
	* */
	Timer(T* evObj, void(*OnTimerAction)(T* pArgs)) :
		eventObject(evObj),
		OnTimerActionRun(OnTimerAction),
		lpName(" "),
		thread_id(0),
		is_running(false),
		timeLapse(1000),
		counter(0),
		thread_handle(NULL) {
		event_handle = CreateEvent(NULL, FALSE, FALSE, (LPCWSTR)lpName);
	};

	/**
	* This constructor sets: Timer<>::eventObject with value of the argument evObj and
	* Timer<>::OnTimerActionRun with a appropriate pointer function. 
	* In addition, user can set his/her own time lapse.
	* All other fields sets to default.
	* @param evObj this object will be assigned to Timer<>::eventObject and  class of this object have to inherit Event class.
	* @param OnTimerAction pointer function to the static function ManipulatorView::OnTimerAction()
	* @param tLapse is a time lapse of timer's run
	* */
	Timer(T* evObj, void(*OnTimerAction)(T* pArgs), int tLapse) :
		eventObject(t),
		OnTimerActionRun(OnTimerAction),
		timeLapse(tLapse),
		lpName(" "),
		thread_id(0),
		is_running(false),
		counter(0),
		thread_handle(NULL) {
		event_handle = CreateEvent(NULL, FALSE, FALSE, (LPCWSTR)lpName);
	};

	/**
	* This function starts a current thread which runs function Timer<>::TimerThread()
	* */
	void startTheThread() {
		//Start the thread for the receive function
		thread_handle = (HANDLE)
			_beginthreadex(0, 0, &Timer::TimerThread, this, 0, &thread_id);
	};
	
	/**
	* Sets is_running with a value of an argument
	* @param is_run state which sets an user
	**/
	void setIsRunning(bool is_run) {
		this->is_running = is_run;
	}

	
	/**
	* Calling object will wait for ending of all running threads.
	* */
	void Join() {
		WaitForSingleObject(thread_handle, INFINITE);     // wait until the thread has finished
	}

	/**
	* Closes created handlers for releasing the allocated resources for stable future execution of the programm.
	*/
	~Timer() { 
		CloseHandle(this->event_handle);
		CloseHandle(this->thread_handle);
	};
};

#endif // TIMER_H_