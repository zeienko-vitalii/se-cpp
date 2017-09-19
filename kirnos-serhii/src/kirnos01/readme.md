# Тема 1: Стекові об'єкти. Конструктор, деструктор, відображення, передача

## Мета
Навчитись створювати об'єкти. Отримати розуміння створення об'єкта на стеку а також передачу об'єкта по значенню.
## 1 ІНДИВІДУАЛЬНЕ ЗАВДАННЯ
Створити клас даних People та класс відображення даних - PeopleViewer. Об'єкт відображення конструюється на стеку функції main() об'єктом даних, що заздалегіть створений на стеку. Передавати People як значення. People має всі публічні поля та методи. PeopleViewer лише виконує відображення даних у формі <назва поля>=<значення>; всі його методи та атрибути публічні.

## 2 РОЗРОБКА ПРОГРАМИ

### 2.1 Засоби ООП
В ході розробки програми були використані такі засоби ООП:

* Абстракція.
* Інкапсуляція.

### 2.2 Іерархія та структура класів
Ієрархія класів наведена на рис. 2.1

![Image alt](https://github.com/kit25a/se-cpp/blob/master/kirnos-serhii/doc/kirnos01/screen/Hierarchy.png)

*Рисунок 2.1 – Ієрархія класів*

### 2.3 Опис програми
Структура проекту наведена на рис. 2.2.

![Image alt](https://github.com/kit25a/se-cpp/blob/master/kirnos-serhii/doc/kirnos01/screen/Struct.png)

*Рисунок 2.2 – Структура проекту*

В програмі було створено два класи. Призначення спроектованих класів наведено на рис. 2.3.

![Image alt](https://github.com/kit25a/se-cpp/blob/master/kirnos-serhii/doc/kirnos01/screen/Clas.png)

*Рисунок 2.3 – Призначення класів*

### 2.4 Важливі фрагменти програми

#### 2.4.1 Демонстрація роботи (функція main())
	{
		Room r;
		r.SetField1_data1(10.1);
		r.SetField2_data1(20.2);
		r.SetField3_data1(30.3);
		cout << endl;
		Screen view1(r);
		view1.ShowContent();
		cout << "---" << endl;
		{
			Room* r1 = new Room();
			Room r2 = *r1;
			Room r3(*r1);
			delete r1;
		}
		cout << "---" << endl;
	}
	return 0;
	}
#### 2.4.2 Конструктор створення об'єкта Screen на основі Room
	Screen::Screen(Room r) {
		room = new Room(r);
		cout << "Screen(Room)" << endl;
	}
#### 2.4.3 Функція класу Screen для виведення полів змінної типу Room – ShowContent()
	void Screen::ShowContent() {
		cout << "ShowContent()" << endl;
		cout << "field1_data1 = " << *((*room).field1_data1) << endl;
		cout << "field2_data1 = " << *((*room).field2_data1) << endl;
		cout << "field3_data1 = " << *((*room).field3_data1) << endl;
	}

## Результати работи
  Результати роботи показано на рис. 3.1.
  
![Image alt](https://github.com/kit25a/se-cpp/blob/master/kirnos-serhii/doc/kirnos01/screen/Result.png)

*Рисунок 3.1 – Результати роботи*

## Висновок
В ході виконання лабораторної роботи навчився створювати об’єкти, отримав розуміння створення об’єкта на стеку а також передачу об’єкту по значенню.