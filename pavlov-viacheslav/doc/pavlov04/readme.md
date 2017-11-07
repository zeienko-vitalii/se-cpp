# Лабораторна робота № 4: СТАТИЧНІ МЕТОДИ, ПЕРЕВАНТАЖЕННЯ ОПЕРАТОРІВ ТА МЕТОДІВ

## Мета 
Навчитись доречно використовувати статичні методи, а також використовувати перевантаження методів та операторів.
## 1.ІНДИВІДУАЛЬНЕ ЗАВДАННЯ

У класі `GraphScreen` створити статичний метод `onTimerAction()`, який відображатиме на екрані заданий нащадок `Window`. Встановити цей метод на виклик у таймері. Таймер повинен спрацювати 4 рази. Метод повинен виводити на екран дані про поточний асоційований об’єкт даних. Реалізувати перевантажені оператори і методи згідно варіанту
 

## 2.РОЗРОБКА ПРОГРАМИ
### 2.1 Засоби ООП
В ході розробки програми були використані такі засоби ООП:
- Абстракція - кожен об'єкт описує свою особливу сутність, яка визначається його полями.
- Інкапсуляція - поля об'єктів закриті для користувача,натомість ми даємо доступ до даних за допомогою геттерів та сеттерів, так користувач має можливість отримати готові дані, а не обробляти їх, для подпльшого вікористання. 
- Наслідування - для виділення спільного деяких сутностей у одну базову сутність.

### 2.2 Іерархія та структура класів
На рис 2.1 дивись іерархію класів


<p align="center">

![Іерархія класів](https://raw.githubusercontent.com/kit25a/se-cpp/master/pavlov-viacheslav/doc/pavlov04/screen/classGraph.png)

 Рисунок 2.1 іерархія класів
</p>


### 2.3 Опис програми
На рис 2.2 дивись структуру проекту.

<p align="center">

![структурa проекту](https://github.com/kit25a/se-cpp/blob/master/pavlov-viacheslav/doc/pavlov04/screen/projectStruct.PNG?raw=true)
 Рисунок 2.2 структурa проекту
</p>

На рис 2.3 дивись призначення класів.


<p align="center">

![призначення класів](https://raw.githubusercontent.com/kit25a/se-cpp/master/pavlov-viacheslav/doc/pavlov04/screen/classes.PNG)
 Рисунок 2.3 призначення класів
</p>

У цій лабораторній роботі створено класс `TimerExecutor`, полями якого є: завдання, яке ми будемо запускати у таймері, та об'єкт, який ми будемо обробляти. Цей класс є параметризованим, отже можно передати не тільки класс `Window` та його нащадків, а й інші класи. 

### 2.4 Важливі фрагменти програми
У программі слід зауважити увагу на таких моментах: 

#### Клас `TimerExecutor` функція запуску таймеру:

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


#### Клас `TimerExecutor` функція відрахунку часу, та запуск завдання:
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


#### Демонстрація роботи програми:

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


## 3.РЕЗУЛЬТАТИ РОБОТИ


Результат роботи показано на рис 3.1.


<p align="center">

![призначення класів](https://github.com/kit25a/se-cpp/blob/master/pavlov-viacheslav/doc/pavlov04/screen/res1.PNG?raw=true)
 Рисунок 3.1 результат роботи
</p>

##ВИСНОВКИ
В результаті лабораторної роботи було розроблено програму з використанням прав доступу та const методів. Були придбані навички роботи з цими технологіями.