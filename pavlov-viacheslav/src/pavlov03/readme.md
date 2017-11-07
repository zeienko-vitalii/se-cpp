# Лабораторна робота № 3: Спадкування та віртуальність

## Мета 
Отримати навики при передаванні об'єктів із застосуванням прав доступу та const-модифікаторів.
## 1.ІНДИВІДУАЛЬНЕ ЗАВДАННЯ

Варіант 10. Створити клас `Button` використовуючи спадкування від класу `Window`. Виділити базовий клас `BaseScreen` для `Screen` та `GraphScreen` із функцією `BaseScreen::Desplay()` та наступними віртуальними функціями, котрі викликаються із неї: `showHeader()`, `showContent()`, `showFooter()`. Створити клас, котрий задає специфіку відображення для об’єктів класу-нащадку. Обрати необхідне місце у ієрархії для нього.
 

## 2.РОЗРОБКА ПРОГРАМИ
### 2.1 Засоби ООП
В ході розробки програми були використані такі засоби ООП:
- Абстракція - кожен об'єкт описує свою особливу сутність, яка визначається його полями.
- Інкапсуляція - поля об'єктів закриті для користувача,натомість ми даємо доступ до даних за допомогою геттерів та сеттерів, так користувач має можливість отримати готові дані, а не обробляти їх, для подпльшого вікористання. 
- Наслідування - для виділення спільного деяких сутностей у одну базову сутність.

### 2.2 Іерархія та структура класів
На рис 2.1 дивись іерархію класів


<p align="center">

![Іерархія класів](https://raw.githubusercontent.com/kit25a/se-cpp/master/pavlov-viacheslav/doc/pavlov03/screen/classGraph.png)

 Рисунок 2.1 іерархія класів
</p>


### 2.3 Опис програми
На рис 2.2 дивись структуру проекту.

<p align="center">

![структурa проекту](https://github.com/kit25a/se-cpp/blob/master/pavlov-viacheslav/doc/pavlov03/screen/projectStruct.PNG?raw=true)
 Рисунок 2.2 структурa проекту
</p>

На рис 2.3 дивись призначення класів.


<p align="center">

![призначення класів](https://raw.githubusercontent.com/kit25a/se-cpp/master/pavlov-viacheslav/doc/pavlov03/screen/classes.PNG)
 Рисунок 2.3 призначення класів
</p>

У цій лабораторній роботі для класу `Window` створено наслідника `Button`, який розширює можливості `Window` новими полями. Також додано класс, `ButtonScreen`, який є наслідником `Screen`, для усіх стуностей `Screen`, виділено базовий класс `BaseScreen`, у якому виділено спільне для цих сутностей. 

### 2.4 Важливі фрагменти програми
У программі слід зауважити увагу на таких моментах: 

#### Клас `BaseScreen` функція виведення даних:

```
void BaseScreen::Display() {
	showHeader();
	showContent();
	showFooter();
}
```
Усі визвані функції тут повністю віртуальні: 

```
	/**
	 * Outputs header of information.
	 */
	virtual void showHeader()=0;
	/**
	 * Outputs main information about window.
	 */
	virtual void showContent()=0;

	/**
	 * Outputs footer of information.
	 */
	virtual void showFooter()=0;
```

#### Демонстрація роботи програми:

```
	//Constants for  object1 initialization
	const int WINDOW_ID_1 = 1;
	const int X1_1 = 11;
	const int Y1_1 = 12;
	const int X2_1 = 13;
	const int Y2_1 = 14;

	//Constants for  object2 initialization
	const int WINDOW_ID_2 = 2;
	const int X1_2 = 21;
	const int Y1_2 = 22;
	const int X2_2 = 23;
	const int Y2_2 = 24;

	//Constants for  object3 initialization
	const int WINDOW_ID_3 = 3;
	const int X1_3 = 31;
	const int Y1_3 = 32;
	const int X2_3 = 33;
	const int Y2_3 = 34;
	const string LABEL_3 = "Label 3";
	const string BORDER_COLOR_3 = "Border color 3";

	Window win1(WINDOW_ID_1, X1_1, Y1_1, X2_1, Y2_1);

	Window win2(WINDOW_ID_2, X1_2, Y1_2, X2_2, Y2_2);

	Screen view1_1(&win1);
	cout << "Data from win1:\n";
	view1_1.Display();

	Screen view1_2(&win2);
	cout << "Data from win2:\n";
	view1_2.Display();

	GraphScreen view2;
	view2.setDataSource(&win1);
	cout << "Graph view of win1:\n";
	view2.Display();

	cout << "Graph view of win2::\n";
	view2.Display();

	Button btn1(WINDOW_ID_3, X1_3, Y1_3, X2_3, Y2_3, LABEL_3, BORDER_COLOR_3);
	ButtonScreen test(&btn1);
	cout << "Data from btn1:\n";
	test.Display();
```


## 3.РЕЗУЛЬТАТИ РОБОТИ


Результат роботи показано на рис 3.1.


<p align="center">

![призначення класів](https://github.com/kit25a/se-cpp/blob/master/pavlov-viacheslav/doc/pavlov03/screen/res1.PNG?raw=true)
 Рисунок 3.1 результат роботи
</p>

##ВИСНОВКИ
В результаті лабораторної роботи було розроблено програму з використанням прав доступу та const методів. Були придбані навички роботи з цими технологіями.