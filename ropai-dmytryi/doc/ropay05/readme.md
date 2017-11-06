# Статичні методи,перевантаження операторів та методів {#mainpage} 
 
## Мета

Навчитись доречно використовувати статичні методи, а також
використовувати перевантаження методів та операторів.
 
## 1. Індивідуальне завдання 
 
Необхідно визначити у класі GraphScreen статичний метод OnTimerAction().
Цей метод відображатиме на екрані заданий нащадок Manipulator.
Обрати для Win32-таймера власний інтервал повторних викликів.
Встановити реалізований метод GraphScreen::OnTimerAction() на виклик у таймері.
Таймер повинен спрацювати лише 4 рази. Метод повинен виводити на екран дані про поточний асоційований об’єкт даних.

## 2. Розробка програми

### 2.1 Засоби ООП
В ході розробки програми були використані так засоби ООП: 
- Абсракція – кожен об’єкт описує свою сутність, яка визначається його полями.
- Спадкування - механізм утворення нових класів на основі використання вже існуючих
- Інкапсуляція - поля об'єктів закриті для користувача,натомість ми даємо доступ до даних за допомогою геттерів та сеттерів, так користувач має можливість отримати готові дані, а не обробляти їх, для подпльшого вікористання.
- Поліморфізм - властивість, яка дозволяє одне і те саме ім’я використовувати для вирішення декількох технічно різних задач, тобто основною метою поліморфізму є використання одного імені для задання загальних класу дій.
 
### 2.2 Іерархія та структура класів
На рис 2.1 дивись іерархію класів.


![Ієрархія класів](https://github.com/kit25a/se-cpp/blob/master/ropai-dmytryi/doc/ropay04/screen/%D0%98%D0%B5%D1%80%D0%B0%D1%80%D1%85%D0%B8%D1%8F.jpg)
Рисунок 2.1 – Ієрархія класів

### Опис програми 
На рис. 2.2 дивись структуру проекту.

![Структура проекту](https://github.com/kit25a/se-cpp/blob/master/ropai-dmytryi/doc/ropay04/screen/%D0%A1%D1%82%D1%80%D1%83%D0%BA%D1%82%D1%83%D1%80%D0%B0.JPG)
Рисунок 2.2 – Структура проекту


На рис. 2.3 дивись призначення класів.

![Призначення класів](https://github.com/kit25a/se-cpp/blob/master/ropai-dmytryi/doc/ropay04/screen/%D0%9D%D0%B0%D0%B7%D0%BD%D0%B0%D1%87%D0%B5%D0%BD%D0%B8%D0%B5.JPG)
Рисунок 2.3 – Призначення класів

Класс Timer описує Win32 timer. Метод GraphScreen::OnTimerAction() відображає 4 рази інформацію про Manipulator.


### 2.4 Важливі фрагменті програми

У программі слід зауважити увагу на таких моментах: 

#### Клас `Timer.cpp`:
	
```
pTimer::Timer(void (*task)(Manipulator), Manipulator manip) :
		task(task), manip(manip) {
	this->time = 3;
	this->liDueTime.QuadPart = -10000000LL;
	this->hTimer = NULL;
}

void Timer::start(){
	hTimer = CreateWaitableTimer(NULL, TRUE, "Time");
		if(hTimer == NULL){
			printf("Create timer is faled (%d)\n", GetLastError());
		}

		for(int i = 0; i < Timer::time; i++){
			count();
		}
}

void Timer::count(){
	if(!SetWaitableTimer(hTimer, &liDueTime, 0, NULL, NULL, 0)){
		printf("SetTimer failed (%d)\n", GetLastError());
	}

	if (WaitForSingleObject(hTimer, INFINITE) != WAIT_OBJECT_0)
			printf("WaitForSingleObject failed (%d)\n", GetLastError());
		else
			task(manip);
}
	```

	
	#### OnTimerAction():

	```
void GraphScreen::OnTimeAction(Manipulator manip) {
	cout << "В OnTimeAction:";
	cout << "\n Тип девайса: " << manip.getType() << endl;
	cout << "Количество кнопок: " << manip.getCount() << endl;
	cout << "" << endl;
}
	```


## 3. Результати роботи
Результати роботи показано на рис.3.1

![Результати роботи](https://github.com/kit25a/se-cpp/blob/master/ropai-dmytryi/doc/ropay04/screen/%D0%A0%D0%B5%D0%B7%D1%83%D0%BB%D1%8C%D1%82%D0%B0%D1%82.jpg)
Рисунок 3.1 – Результати роботи
## Висновки 
Отримав основні навики перевантаження операторів, методів та ознайомився зі статичними методами