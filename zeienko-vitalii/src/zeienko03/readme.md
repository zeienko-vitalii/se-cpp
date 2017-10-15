# Тема 3: Спадкування та віртальність. {#mainpage}

## Мета

Отримати навики розробки власних ієрархій класів із використанням принципу розширення та віртуальності.


## 1. Загальне завдання
	Створити клас Data2, використовуючи спадкування від Data1 із додаванням нових полів. 
	Розподілити та обгрунтувати права доступу до полів. <br>
	Виділити базовий клас BaseView для View1 та View2 із функцією BaseView::Display() та наступними 
	віртуальними функціями, котрі викликаються з неї:
	protected:
	BaseView::showHeader();
	BaseView::showContent();
	BaseView::showFooter();
	Перенести основний функціонал відображення в базовий клас, реалізувавши спеціфічну поведінку у відповідних віртуальних 
	методах. Після вказаних модифікацій View1 та View2 повинні працювати аналогічно, як у роботі №2
	із об'єктами класу Data1 та нащадками.
	Створити клас View3, котрий задає специфіку відображення для об'єктів Data2.
	Вибрати необхідне місце у ієрархії для цього класу. 
	Показати роботу віртуальності на прикладі використання нащадка через 
	покажчик на базоваий клас для об'єкту Data1 та об'єкту Data2 із використанням View-класів.
	Предметна область: Мишки
	Назва Data2: Мишка комп'ютерна
	Поля Data2: 
	* інтерфейс з'єднання
	* тип сенсора

## 2. Розробка пограми
### 2.1. Засоби ООП
У розробленій програмі були використані наступні засоби ООП: <br>
- інкапсуляція
- спадкування
- поліморфізм
<br>

### 2.2. Ієрархія та структура класів
На рис. 2.1 наведена ієрархія класів: BaseView, ManipulatorView, GraphicalView and ComputerManipulatorView.
Та на рис. 2.2 зображена ієрархія  класів Manipulator та ComputerManipulator.
<br>

 Hierarchy |
---------- |
![img_HierarchyFormBaseView](https://github.com/kit25a/se-cpp/tree/master/zeienko-vitalii/src/zeienko03/html/screenshot/hierarchy_classBV.png)|
Рисунок 2.1 - Ієрархія класів: BaseView, ManipulatorView, GraphicalView and ComputerManipulatorView|
 <br>

| Hierarchy |
| :-: |
|![img_HierarchyFromManipulator](https://github.com/kit25a/se-cpp/tree/master/zeienko-vitalii/src/zeienko03/html/screenshot/hierarchy_classManipulator.png)|
|Рисунок 2.2 - Ієрархія  класів Manipulator та ComputerManipulator|
 <br>

### 2.3. Опис програми
У даній роботі були додані декілька класів: ComputerManipulator та ComputerManipulatorView, а також був додан 
новий файл Utility.h, у котрому знаходиться функція instanceof для перевірки спадкування. 
На рисунку 2.3 наведена структура розробленого проекту: 
<br><br><br><br><br><br>
<br><br><br><br><br><br>
 Project structure |
---------- |
![img_project_struct](https://github.com/kit25a/se-cpp/tree/master/zeienko-vitalii/src/zeienko03/html/screenshot/project.png)|
 Рисунок 2.3 - Структура проект|
<br>
 
### 2.4. Важливі фрагменти програми
У розробленій програмі слід зауважити увагу на спрацбовуванні віртуальних методів.
Викликаючи метод BaseView::display(), у котрому визиваються перевизначені методи: showHeader(), showContent(), showFooter() у нащадках класа BaseView, 
за допомогою покажчика BaseView на посилку об'єкта нижче стоючого класу в ієрархії спадкування буде виводитися інформація про об'єкт чию
посилку було передано покажчику BaseView.
Дане ствердження продемонстроване у п. Результат роботи, рисунок 3.1.
На рисунку 2.4 приведений фрагмент функції main().
 Function main() |
---------- |
![img_main](https://github.com/kit25a/se-cpp/tree/master/zeienko-vitalii/src/zeienko03/html/screenshot/main.png)|
Рисунок 2.4. – Фрагмент функції main() |
<br>

Для даного проекту були розроблені модульні тести за допомогою GoogleTest Framework.
Ці тести перевіряють працювання окремого модуля класів Manipulator та ComputerManipulаtor.
Функція визову на виконання всіх тестів зображена на рисунку 2.5 
<br><br><br><br><br><br>
<br><br><br><br><br><br>
 Unit Test main() function |
---------- |
![img_unittest_main](https://github.com/kit25a/se-cpp/tree/master/zeienko-vitalii/src/zeienko03/html/screenshot/unittest_main.png)|
Рисунок 2.5. – Функція main() GoogleTest Framework|

Призначення спроектованих класів наведено на рис. 2.6.  
 Predestination structure |
---------- |
![img_predestination_of_classes](https://github.com/kit25a/se-cpp/tree/master/zeienko-vitalii/src/zeienko03/html/screenshot/class_description.png)|
Рисунок 2.6. – Призначення спроектованих класів|
<br>
## 3. Результат работы
Результат роботи програми зображений на рисунку 3.1.
 Output to the console |
---------- |
![img_result](https://github.com/kit25a/se-cpp/tree/master/zeienko-vitalii/src/zeienko03/html/screenshot/result.png)|
Рисунок 3.1. – Результат виконання програми|

Результат виконання всіх модульних тестів зображений на рисунку 3.2.
Тести відсортировані за класом тестування.

 Unit Tests Result |
---------- |
![img_unitTest_result](https://github.com/kit25a/se-cpp/tree/master/zeienko-vitalii/src/zeienko03/html/screenshot/unitTest.png)|
Рисунок 3.1. – Результат тестування|


## Висновок
В ході виконання лабораторної роботи були отримані навики розробки власних ієрархій класів із використанням принципу розширення та віртуальності.
