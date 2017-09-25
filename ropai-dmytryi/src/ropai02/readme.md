# Лабораторна робота № 2: Права доступу, const, покажчики посилання
 
## Мета
 
Отримати навики при передаванні об'єктів із застосуванням прав доступу та const-модифікаторів.
 
## 1. Індивідуальне завдання 
 
Розподілити в `Manipulator` права доступу private, public.
Реалізувати клас `GraphScreen` основна задача якого полягае у більш богатому відображеню даних `Manipulator` із застосуванням псевдографіки для наочного відображення пов'язаного об'єкта.
	`GraphScreen` повинен містити поля згідно опису в індивідуальному завданні та наступні методи:
	- `SetDataSource()` - для зміни об'єкта-джерела даних.
	-  `PrintData()` - виводитиме інформацію про отриманий об'єкт у якості аргументу.
Оновити `Screen` для збереження функціональності цього класу при роботі з оновленим `Manipulator`. 

## 2. Розробка програми

### 2.1 Засоби ООП
В ході розробки програми були використані так засоби ООП: 
- Абсракція – кожен об’єкт описує свою сутність, яка визначається його полями.
- Інкапсуляція - поля об'єктів закриті для користувача,натомість ми даємо доступ до даних за допомогою геттерів та сеттерів, так користувач має можливість отримати готові дані, а не обробляти їх, для подпльшого вікористання. 
 
## 2.2 Іерархія та структура класів
На рис 2.1 дивись іерархію класів.

![Ієрархія класів](https://github.com/kit25a/se-cpp/blob/master/ropai-dmytryi/doc/ropay02/Folder1.jpg?raw=true)

Рисунок 2.1 – Ієрархія класів

### 2.3 Опис програми 
На рис. 2.2 дивись структуру проекту.

![Структура проекту](https://github.com/kit25a/se-cpp/blob/master/ropai-dmytryi/doc/ropay02/Capture2.JPG?raw=true)

Рисунок 2.2 – Структура проекту


На рис. 2.3 дивись призначення класів.

![Призначення класів](https://github.com/kit25a/se-cpp/blob/master/ropai-dmytryi/doc/ropay02/Capture3.JPG?raw=true)

Рисунок 2.3 – Призначення класів

Маємо 2 класи. Маніпулятор Manipulator та відображувач Screen. Маніпулятор(Manipulator) описує сутність програмного маніпулятору, тобто його тип та кількість кнопок. Відображувач(Screen) використовується для виводу даних з об’єкту Manipulator у консоль. У функції main() відображена робота програми.

### 2.4 Важливі фрагменті програми

У программі слід зауважити увагу на таких моментах: 

#### Клас `GraphScreen` функція виведення даних за допомогою псевдографіки:
	
```
void GraphScreen::printData(const Manipulator& manip){


	cout  << "           /	        \n";
	cout  << "          /	        \n";
	cout  << "         /	        \n";
	cout  << "        /	            \n";
	cout  << "       /           	\n";
	cout  << "       \\	            \n";
	cout  << "        \\	        \n";
	cout  << "         \\	        \n";
	cout  << "          \\	        \n";
	cout  << "       ---------  	\n";
	cout  << "      /   **    \\	\n";
	cout  << "     /    **     \\   \n";
	cout  << "     |    ||      |	\n";
	cout  << "     |    ||      | 	\n";
	cout  << "     |            | 	\n";
	cout  << "     |            | 	\n";
	cout  << "     |            | 	\n";
	cout  << "      \\          / 	\n";
	cout  << "       \\        / 	\n";
	cout  << "        --------	    \n";


	cout << "" << endl;
	cout << "Device type: " << manip.getType() << endl;
	cout << "Number of buttons: " << manip.getCount() << endl;
	cout << "" << endl;
}
	```

	
	#### Демонстрація роботи програми:

	```
int main() {

	Manipulator manip1(5, "Joystick");
	Manipulator manip2(2, "Mouse");


	cout << "From Screen" << endl;

	cout << "manip1: " << endl;
	Screen view(manip1);
	view.dataOutput();

	cout << "manip2: " << endl;
	Screen view2(manip2);
	view2.dataOutput();


	GraphScreen gscreen;
	cout << "From Graph Screen" << endl;

	gscreen.setDataSource(&manip1);

	cout << "manip1: " << endl;
	gscreen.printData();

	cout << "manip2: " << endl;
	gscreen.printData(manip2);

	cout << "Кількість кнопок дві або менше? (manip1):" << manip1.isSimple() << endl;
	cout << "Кількість кнопок більша або рівна 4? (manip1):" << manip1.isGame() << endl;
	cout << "" <<endl;
	cout << "Кількість кнопок дві або менше? (manip2):" << manip2.isSimple() << endl;
	cout << "Кількість кнопок більша або рівна 4? (manip2):" << manip2.isGame() << endl;

		return 0;
}

## 3. Результати роботи
Результати роботи показано на рис.3.1

![Результати роботи](https://github.com/kit25a/se-cpp/blob/master/ropai-dmytryi/doc/ropay02/Capture4.JPG?raw=true)

Рисунок 3.1 – Результати роботи
## Висновки 
В результаті лабораторної роботи було розроблено програму з використанням прав доступу та const методів. Були придбані навички роботи з цими технологіями.
