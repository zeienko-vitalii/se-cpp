# ����������� ������ � 4: ������Ͳ ������, �������������� �������в� �� ����Ĳ�

## ���� 
��������� ������� ��������������� ������� ������, � ����� ��������������� �������������� ������ �� ���������.
## 1.����²������� ��������

� ���� `GraphScreen` �������� ��������� ����� `onTimerAction()`, ���� ������������ �� ����� ������� ������� `Window`. ���������� ��� ����� �� ������ � ������. ������ ������� ���������� 4 ����. ����� ������� �������� �� ����� ��� ��� �������� ������������ �ᒺ�� �����. ���������� ������������ ��������� � ������ ����� �������
 

## 2.�������� ��������
### 2.1 ������ ���
� ��� �������� �������� ���� ���������� ��� ������ ���:
- ���������� - ����� ��'��� ����� ���� �������� �������, ��� ����������� ���� ������.
- ������������ - ���� ��'���� ������ ��� �����������,�������� �� ���� ������ �� ����� �� ��������� ������� �� �������, ��� ���������� �� ��������� �������� ����� ���, � �� ��������� ��, ��� ���������� �����������. 
- ����������� - ��� �������� �������� ������ ��������� � ���� ������ �������.

### 2.2 �������� �� ��������� �����
�� ��� 2.1 ������ �������� �����


<p align="center">

![�������� �����](https://raw.githubusercontent.com/kit25a/se-cpp/master/pavlov-viacheslav/doc/pavlov04/screen/classGraph.png)

 ������� 2.1 �������� �����
</p>


### 2.3 ���� ��������
�� ��� 2.2 ������ ��������� �������.

<p align="center">

![��������a �������](https://github.com/kit25a/se-cpp/blob/master/pavlov-viacheslav/doc/pavlov04/screen/projectStruct.PNG?raw=true)
 ������� 2.2 ��������a �������
</p>

�� ��� 2.3 ������ ����������� �����.


<p align="center">

![����������� �����](https://raw.githubusercontent.com/kit25a/se-cpp/master/pavlov-viacheslav/doc/pavlov04/screen/classes.PNG)
 ������� 2.3 ����������� �����
</p>

� ��� ����������� ����� �������� ����� `TimerExecutor`, ������ ����� �: ��������, ��� �� ������ ��������� � ������, �� ��'���, ���� �� ������ ���������. ��� ����� � ����������������, ���� ����� �������� �� ����� ����� `Window` �� ���� �������, � � ���� �����. 

### 2.4 ������ ��������� ��������
� �������� ��� ��������� ����� �� ����� ��������: 

#### ���� `TimerExecutor` ������� ������� �������:

```
template<class T> void TimerExecutor<T>::start() {

	hTimerExecutor = CreateWaitableTimer(NULL, TRUE, "WaitableTimerExecutor");
	if (NULL == hTimerExecutor) {
		printf("CreateWaitableTimerExecutor failed (%d)\n", GetLastError());
	}
	for (int i = 0; i < TimerExecutor::times; i++)
		count();

}
```


#### ���� `TimerExecutor` ������� ��������� ����, �� ������ ��������:
```
template<class T> void TimerExecutor<T>::count() {

// Set a TimerExecutor to wait for 10 seconds.
	if (!SetWaitableTimer(hTimerExecutor, &liDueTime, 0, NULL, NULL, 0)) {
		printf("SetWaitableTimerExecutor failed (%d)\n", GetLastError());

	}

// Wait for the TimerExecutor.
	if (WaitForSingleObject(hTimerExecutor, INFINITE) != WAIT_OBJECT_0)
		printf("WaitForSingleObject failed (%d)\n", GetLastError());
	else
		task(data);
}
```


#### ������������ ������ ��������:

```
	void timerDemo() {
	//Constants for  object1 initialization
	const int WINDOW_ID_1 = 1;
	const int X1_1 = 11;
	const int Y1_1 = 12;
	const int X2_1 = 13;
	const int Y2_1 = 14;
	Window win1(WINDOW_ID_1, X1_1, Y1_1, X2_1, Y2_1);

	TimerExecutor<Window> timer(GraphScreen::onTimerAction, win1);
	timer.start();
}

```


## 3.���������� ������


��������� ������ �������� �� ��� 3.1.


<p align="center">

![����������� �����](https://github.com/kit25a/se-cpp/blob/master/pavlov-viacheslav/doc/pavlov04/screen/res1.PNG?raw=true)
 ������� 3.1 ��������� ������
</p>

##��������
� ��������� ����������� ������ ���� ���������� �������� � ������������� ���� ������� �� const ������. ���� ������� ������� ������ � ���� �����������.