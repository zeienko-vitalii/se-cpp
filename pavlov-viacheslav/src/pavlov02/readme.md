# Лабораторна робота № 2: Права доступу, const, покажчики посилання

## Мета 
Отримати навики при передаванні об'єктів із застосуванням прав доступу та const-модифікаторів.
## 1.ІНДИВІДУАЛЬНЕ ЗАВДАННЯ
Розподілити в `Window` права доступу private, public.
Реалызувати клас `GraphScreen` основна задача якого полягае у більш богатому відображеню даних `Window` із застосуванням псевдографіки для наочного відображення пов'язаного об'єкта.
`GraphScreen` повинен містити поля згідно опису в індивідуальному завданні та наступні методи:
- `SetDataSource()` - для зміни об'єкта-джерела даних.
-  `PrintData()` - виводитиме інформацію про отриманий об'єкт у якості аргументу.
Оновити `Screen` для збереження функціональності цього класу при роботі з оновленим `Window`. 

## 2.РОЗРОБКА ПРОГРАМИ
### 2.1 Засоби ООП
В ході розробки програми були використані такі засоби ООП:
- Абстракція - кожен об'єкт описує свою особливу сутність, яка визначається його полями.
- Інкапсуляція - поля об'єктів закриті для користувача,натомість ми даємо доступ до даних за допомогою геттерів та сеттерів, так користувач має можливість отримати готові дані, а не обробляти їх, для подпльшого вікористання. 

### 2.2 Іерархія та структура класів
На рис 2.1 дивись іерархію класів


<p align="center">

![Іерархія класів](https://raw.githubusercontent.com/kit25a/se-cpp/master/pavlov-viacheslav/doc/pavlov02/screen/classGraph.png)

 Рисунок 2.1 іерархія класів
</p>


### 2.3 Опис програми
На рис 2.2 дивись структуру проекту.

<p align="center">

![структурa проекту](https://github.com/kit25a/se-cpp/blob/master/pavlov-viacheslav/doc/pavlov02/screen/projectStruct.PNG?raw=true)
 Рисунок 2.2 структурa проекту
</p>

На рис 2.3 дивись призначення класів.


<p align="center">

![призначення класів](https://raw.githubusercontent.com/kit25a/se-cpp/master/pavlov-viacheslav/doc/pavlov02/screen/classes.PNG)
 Рисунок 2.3 призначення класів
</p>

З попереднтої лабораторної роботи збереглися класи `Window` та `Screen`. У `Window` змінено модифікатори доступу, додано 2 методи, які виводять ширину та висоту вікна. Методи виводу класу `Screen` змінено, для коректної роботи з `private` та `public` полями. Додано класс `GraphScreen` у якому завдяки псевдографіки ми виводимо наш `Window`.

### 2.4 Важливі фрагменти програми
У программі слід зауважити увагу на таких моментах: 

#### Клас `GraphScreen` функція виведення даних за допомогою псевдографіки:

```
void GraphScreen::printData(const Window& data) {

	for (int i = 0; i < data.width(); i++)
		cout << "1";

	for (int i = 0; i < data.height(); i++) {
		cout << "\n1";
		for (int j = 1; j < data.width() - 1; j++)
			cout << " ";
		cout << "1";
	}
	cout << "\n";
	for (int i = 0; i < data.width(); i++)
		cout << "1";
	cout << "\n";
}
```


#### Демонстрація роботи програми:

```
int main(void) {

	//Constants for  object1 initialization
	const int WINDOW_ID_1 = 1;
	const int X1_1 = 0;
	const int Y1_1 = 0;
	const int X2_1 = 10;
	const int Y2_1 = 5;

	//Constants for  object2 initialization
	const int WINDOW_ID_2 = 1;
	const int X1_2 = 0;
	const int Y1_2 = 0;
	const int X2_2 = 5;
	const int Y2_2 = 7;

	Window win1(WINDOW_ID_1, X1_1, Y1_1, X2_1, Y2_1);

	Window win2(WINDOW_ID_2, X1_2, Y1_2, X2_2, Y2_2);

	cout << "Data from win1:\n";
	Screen view1_1(win1);
	view1_1.viewWindow();

	cout << "Data from win2:\n";
	Screen view1_2(win2);
	view1_2.viewWindow();

	cout << "Graph view of win1:\n";
	GraphScreen view2;
	view2.setDataSource(&win1);
	view2.printData();

	cout << "Graph view of win2::\n";
	view2.printData(win2);

	return 0;
}
```


## 3.РЕЗУЛЬТАТИ РОБОТИ


Результат роботи показано на рис 3.1.


<p align="center">

![призначення класів](https://github.com/kit25a/se-cpp/blob/master/pavlov-viacheslav/doc/pavlov02/screen/res1.PNG?raw=true)
 Рисунок 3.1 результат роботи
</p>

##ВИСНОВКИ
В результаті лабораторної роботи було розроблено програму з використанням прав доступу та const методів. Були придбані навички роботи з цими технологіями.