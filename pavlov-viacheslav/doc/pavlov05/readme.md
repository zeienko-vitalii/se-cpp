# Лабораторна робота № 5: Абстрактні класи, інтерфейси, серіалізація

## Мета 
Навчитись застосовувати інтерфеси для роботи класів на прикладі задачі серіалізації.
## 1.ІНДИВІДУАЛЬНЕ ЗАВДАННЯ

Реалізувати для кожного із класів даних своєї ієрархії можливість збереження та завантаження даних за допомогою класу `CFileStorage` Який видається до лабораторної роботи у вигляді бібліотеки.
Показати у звіті бінарний дамп збереженого файлу та відмітити дані із власних об'єктів.
У висновках відмітити недоліки класу `CFileStorage` та запропонувати механізм виправлення. 
 

## 2.РОЗРОБКА ПРОГРАМИ
### 2.1 Засоби ООП
В ході розробки програми були використані такі засоби ООП:
- Абстракція - кожен об'єкт описує свою особливу сутність, яка визначається його полями.
- Інкапсуляція - поля об'єктів закриті для користувача,натомість ми даємо доступ до даних за допомогою геттерів та сеттерів, так користувач має можливість отримати готові дані, а не обробляти їх, для подпльшого вікористання. 
- Наслідування - для виділення спільного деяких сутностей у одну базову сутність.

### 2.2 Іерархія та структура класів
На рис 2.1 дивись іерархію класів


<p align="center">

![Іерархія класів](https://raw.githubusercontent.com/kit25a/se-cpp/master/pavlov-viacheslav/doc/pavlov05/screen/classGraph.png)

 Рисунок 2.1 іерархія класів
</p>


### 2.3 Опис програми
На рис 2.2 дивись структуру проекту.

<p align="center">

![структурa проекту](https://github.com/kit25a/se-cpp/blob/master/pavlov-viacheslav/doc/pavlov05/screen/projectStruct.PNG?raw=true)
 Рисунок 2.2 структурa проекту
</p>

На рис 2.3 дивись призначення класів.


<p align="center">

![призначення класів](https://raw.githubusercontent.com/kit25a/se-cpp/master/pavlov-viacheslav/doc/pavlov05/screen/classes.PNG)
 Рисунок 2.3 призначення класів
</p>

У цій лабораторній роботі класс `Window`, та його нащадок `Button` реалізують інтерфейс `MStorageInterface`. У цих классах реалізовано методи `OnStore(std::ostream& aStream)` та `OnLoad(std::istream& aStream)` Для збереження даних усі значення полів переводяться у послідовність бітів та зберігаються у файл. 

### 2.4 Важливі фрагменти програми
У программі слід зауважити увагу на таких моментах: 

#### Клас `Window` функція запису у файл:

```
void Window::OnStore(std::ostream& aStream) {
	aStream << toBitsetString();
}
```
Ця функція не перевизначається у наслідниках.

#### Клас `Window` функція переводу у послідовність бітів:
```
string Window::toBitsetString() {

	string res;
	res += bitset<32>(this->getWindowId()).to_string();
	res += bitset<32>(this->getX1()).to_string();
	res += bitset<32>(this->getX2()).to_string();
	res += bitset<32>(this->getY1()).to_string();
	res += bitset<32>(this->getY2()).to_string();

	return res;
}

```

#### Клас `Button` функція переводу у послідовність бітів:
```
string Button::toBitsetString() {
	string res = Window::toBitsetString();

	for (unsigned int i = 0; i < this->getLabel().length(); i++) {
		res += bitset<9>(this->getLabel().at(i)).to_string();
	}
	res += " ";
	for (unsigned int i = 0; i < this->getBorderColor().length(); i++) {
		res += bitset<9>(this->getBorderColor().at(i)).to_string();
	}
	res += " ";
	return res;
}

```

#### Клас `Window` функція відновлення з файлу:
```
void Window::OnLoad(std::istream& aStream) {

	bitset<32> input;
	aStream >> input;
	this->windowId = input.to_ulong();
	aStream >> input;
	this->x1 = input.to_ulong();
	aStream >> input;
	this->x2 = input.to_ulong();
	aStream >> input;
	this->y1 = input.to_ulong();
	aStream >> input;
	this->y2 = input.to_ulong();

}

```

#### Клас `Button` функція відновлення з файлу:
```
void Button::OnLoad(std::istream& aStream) {

	Window::OnLoad(aStream);
	string tmpStr;
	bitset<8> input;

	while (aStream.get() != ' ') {
		aStream >> input;
		tmpStr += (char) input.to_ulong();
	}
	this->setLabel(tmpStr);
	tmpStr.clear();

	while (aStream.get() != ' ') {
		aStream >> input;
		tmpStr += (char) input.to_ulong();
	}
	this->setBorderColor(tmpStr);
}

```

#### Демонстрація роботи програми:

```
int main() {

	Window test(1, 100, 100, 100, 100);
	CFileStorage *testStorage = CFileStorage::Create(test, "Test.bin");
	testStorage->Store();
	Window test2;
	testStorage = CFileStorage::Create(test2, "Test.bin");
	testStorage->Load();
	cout << test2;

	Button btest(1, 100, 100, 100, 100, "label", "borderColor");
	CFileStorage *testStorageB = CFileStorage::Create(btest, "Test2.bin");
	testStorageB->Store();
	Button btest2;
	testStorageB = CFileStorage::Create(btest2, "Test2.bin");

	testStorageB->Load();
	cout << btest2.toString();
	return 0;
}

```

## 3.РЕЗУЛЬТАТИ РОБОТИ


Результат роботи показано на рис 3.1.


<p align="center">

![призначення класів](https://github.com/kit25a/se-cpp/blob/master/pavlov-viacheslav/doc/pavlov05/screen/res1.PNG?raw=true)
 Рисунок 3.1 результат роботи
</p>

Вміст файлів зі збереженеми даними показано на рис 3.2.


<p align="center">

![призначення класів](https://github.com/kit25a/se-cpp/blob/master/pavlov-viacheslav/doc/pavlov05/screen/res2.PNG?raw=true)
 Рисунок 3.2 вміст файлів зі збереженими даними
</p>

##ВИСНОВКИ
 В результаті лабораторної роботи було розроблено програму з використанням інтерфейсів. Були виявлені такі недоліки інтерфейсу:
- При збереженні об'єкту потрібно перезаписати файл, з попередніми данними, або створити новий файл, нема можливості зберегти у один файл декілька об'єктів. 
	Рішення: створити функцію для збереження масиву, або створити можливість користовачу вибрати, чи хоче він перезаписати дані, або дописати у файл.
- Нема перевірки на `nullptr` у конструкторі, що може привести до помилок. 
	Рішення: перевіряти на `nullptr` при створенні об'єкту.
- При запису у файл функція `OnStore` приймає поток запису, при цьому класи реалізуючі інтерфейс `MStorageInterface` мають доступ до нього, та можуть пошкодити файл, або змінити його на nullptr.
	Рішення: замінити `OnStore` на функцію, яка буде повертати дані об'єкту у потрібному реалізатору вигляді, та записувати у методі `Store` у файл результат нової функції.