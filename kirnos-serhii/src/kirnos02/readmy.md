# Тема 2: Права доступу, покажчики, const, посилання

## Мета
Отримати навики при передаванні об'єктів у класи із застосуванням прав доступу та const-модифікаторів.
## 1 ІНДИВІДУАЛЬНЕ ЗАВДАННЯ
Розподілити в Room права доступу private, public. Реалызувати клас GraphScreen основна задача якого полягае у більш богатому відображеню даних Window із застосуванням псевдографіки для наочного відображення пов'язаного об'єкта. GraphScreen повинен містити поля згідно опису в індивідуальному завданні та наступні методи:

* SetDataSource() - для зміни об'єкта-джерела даних.
* PrintData() - виводитиме інформацію про отриманий об'єкт у якості аргументу. Оновити Screen для збереження функціональності цього класу при роботі з оновленим Window.

## 2 РОЗРОБКА ПРОГРАМИ

### 2.1 Засоби ООП
В ході розробки програми були використані такі засоби ООП:

* Абстракція.
* Інкапсуляція.

### 2.2 Іерархія та структура класів
Ієрархія класів наведена на рис. 2.1

![Image alt](https://github.com/kit25a/se-cpp/blob/master/kirnos-serhii/doc/kirnos02/screen/Hierarchy.png)

*Рисунок 2.1 – Ієрархія класів*

### 2.3 Опис програми
Структура проекту наведена на рис. 2.2.

![Image alt](https://github.com/kit25a/se-cpp/blob/master/kirnos-serhii/doc/kirnos02/screen/Struct.png)

*Рисунок 2.2 – Структура проекту*

В програмі було створено три класи: 
* клас Room, який містить значення висоти, ширини і довжини кімнати;
* класb Screen та GraphScreen для виведення полів об'єкту типу Room. 
Призначення спроектованих класів наведено на рис. 2.3.

![Image alt](https://github.com/kit25a/se-cpp/blob/master/kirnos-serhii/doc/kirnos02/screen/Clas.png)

*Рисунок 2.3 – Призначення класів*

### 2.4 Важливі фрагменти програми
Демонстрація роботи (функція main())

```
int main() {
	cout << "Begin." << endl;
	Room r(10, 11, 12);
	GraphScreen gs(r);
	gs.PrintData();
	Room r2(1, 2, 3);
	gs.PrintData(r2);
	cout << "done." << endl;
	system("pause");
	return 0;
} 
```

Функція PrintData класу GraphScreen для виведення полів змінної типу Room

```
void GraphScreen::PrintData(const Room& R) const{
	char lh = 201, rh = 187, h = 205, hd = 209, l = 186, r = 186, c = 179, ld =
			200, rd = 188, dh = 207;
	cout << lh;
	for (int i = 0; i < 10; i++, cout << h)
		;
	cout << hd;
	for (int i = 0; i < 10; i++, cout << h)
		;
	cout << rh << endl;
	cout << l << setw(10) << left << "height" << c << setw(10) << R.getHeight()
			<< r << endl;
	cout << l << setw(10) << left << "width" << c << setw(10) << R.getWidth()
			<< r << endl;
	cout << l << setw(10) << left << "length" << c << setw(10) << R.getLength()
			<< r << endl;
	cout << ld;
	for (int i = 0; i < 10; i++, cout << h)
		;
	cout << dh;
	for (int i = 0; i < 10; i++, cout << h)
		;
	cout << rd << endl;
}
```

## Результати работи
  Результати роботи показано на рис. 3.1.
  
![Image alt](https://github.com/kit25a/se-cpp/blob/master/kirnos-serhii/doc/kirnos02/screen/Result.png)

*Рисунок 3.1 – Результати роботи*

## Висновок
В ході виконання лабораторної роботи було створено клас для відображення даних за допомогою псевдографіки із застосуванням прав доступу та const-модифікаторів при передачі об'єктів у клас.