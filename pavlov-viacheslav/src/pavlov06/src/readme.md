# Лабораторна робота № 6: Контейнери

## Мета 
Отримати навики розробки власних контейнерів, на базі існуючих классів.
## 1.ІНДИВІДУАЛЬНЕ ЗАВДАННЯ

Визначити класс коллекції `Container` згідно своєї тематичної області (`WindowVector` - на основі массиву) У колекції повинен буту перевизначений оператор []. Клас повинен виконувати збереження та подальше завантаження із файлу, базуючимь на FileStoreLibrary. 
 

## 2.РОЗРОБКА ПРОГРАМИ
### 2.1 Засоби ООП
В ході розробки програми були використані такі засоби ООП:
- Абстракція - кожен об'єкт описує свою особливу сутність, яка визначається його полями.
- Інкапсуляція - поля об'єктів закриті для користувача,натомість ми даємо доступ до даних за допомогою геттерів та сеттерів, так користувач має можливість отримати готові дані, а не обробляти їх, для подпльшого вікористання. 
- Наслідування - для виділення спільного деяких сутностей у одну базову сутність.

### 2.2 Іерархія та структура класів
На рис 2.1 дивись іерархію класів


<p align="center">

![Іерархія класів](https://raw.githubusercontent.com/kit25a/se-cpp/master/pavlov-viacheslav/doc/pavlov06/screen/classGraph.png)

 Рисунок 2.1 іерархія класів
</p>


### 2.3 Опис програми
На рис 2.2 дивись структуру проекту.

<p align="center">

![структурa проекту](https://github.com/kit25a/se-cpp/blob/master/pavlov-viacheslav/doc/pavlov06/screen/projectStruct.PNG?raw=true)
 Рисунок 2.2 структурa проекту
</p>

На рис 2.3 дивись призначення класів.


<p align="center">

![призначення класів](https://raw.githubusercontent.com/kit25a/se-cpp/master/pavlov-viacheslav/doc/pavlov06/screen/classes.PNG)
 Рисунок 2.3 призначення класів
</p>

У цій лабораторній роботі створено класс '', який базується на масиві. У ньому реалізовані базові функції (додавання, видалення, отримання елемента за позицією, очистка), а також функції для збереження елементів масиву у файл.  

### 2.4 Важливі фрагменти програми
У программі слід зауважити увагу на таких моментах: 

#### Клас `WindowVector` функція запису у файл:

```
void WindowVector::save(string filename) {
	ofstream fileStream;
	fileStream.open(filename,
			ios_base::out | ios_base::binary | ios_base::trunc);

	for (int i = 0; i < this->vSize; i++) {
		this->get(i)->OnStore(fileStream);
		fileStream << " ";
	}
	fileStream.close();

}

```


#### Клас `WindowVector` функція відновлення з файлу:
```
void WindowVector::load(string filename) {
	ifstream fileStream;
	fileStream.open(filename,
			ios_base::out | ios_base::binary | ios_base::trunc);

	while (fileStream.get()) {
		Window tmp;
		tmp.OnLoad(fileStream);
		this->push(tmp);
	}
	fileStream.close();
}

```

#### Демонстрація роботи програми:

```
int main() {

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

	WindowVector vec1;
	vec1.push(win1);
	vec1.push(win2);

	for (int i = 0; i < vec1.size(); i++) {
		cout << vec1[i]->toString() << "\n";
	}

	return 0;
}

```

## 3.РЕЗУЛЬТАТИ РОБОТИ


Результат роботи показано на рис 3.1.


<p align="center">

![призначення класів](https://github.com/kit25a/se-cpp/blob/master/pavlov-viacheslav/doc/pavlov06/screen/res1.PNG?raw=true)
 Рисунок 3.1 результат роботи
</p>

##ВИСНОВКИ
 В результаті лабораторної роботи було отримано навички розробки програм з власними контейнерами. 