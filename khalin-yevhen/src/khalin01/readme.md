# Тема 1: Стековые объекты. Конструктор, деструктор, отображение, передача {#mainpage}

## Цель
Научиться создавать объекты. Получить навыки создания объекта на стеке а также передачу объекта по значению


## Общее задание
- Создать класс данных и класс отображения данных
- Объект отображения конструируется на стеке функции main() объектом данных, который заранее создан на стеке
- Передавать класс данных как значение
- Класс данных имеет все публичные поля и методы
- Класс отображения только выполняет отображения данных
- В соответствии с индивидуальным заданием определить класс по варианту, разработать программу, которая демонстрирует использование классов

## Прикладная область
В соответствии с вариантом #15
| Прикладная область | Имя класса данных | Поля класса данных | Отображение |
| :-: | :-: | :-: | :-: |
| Клавиатура | Кнопка | state (true / false) | text format |


## Структура проекта
| Visual Studio |
| :-: |
| ![imghot 1](screenshots/struct.JPG) |


## Описание разработанных типов данных
| Classes |
| :-: |
| ![imghot 1](screenshots/classes.JPG) |


## Диаграмма классов
![imghot 1](screenshots/cdiagramm.JPG)
<br><br><br><br><br><br><br>

## Иерархия классов
![imghot 1](screenshots/ext.JPG)


## Описание разработанных методов и функций
| Class | Methods |
| :-: | :-: | 
| Button | ![imghot 1](screenshots/buttonMethods.JPG) |
| Screen | ![imghot 1](screenshots/screenMthds.JPG) |
| Logger | ![imghot 1](screenshots/logerMthds.JPG) |
| Printable | ![imghot 1](screenshots/printableMethods.JPG) |



## Ссылки на файлы проекта
| Имя файла | Описание|
| :-: | :-: | 
| Button.h | Contains Button class declaration |
| Screen.h | Contains Screen class declaration |
| Logger.h | Contains Logger class declaration |
| Button.cpp | Contains Button class implementation |
| Screen.cpp | Contains Screen class declaration |
| Logger.cpp | Contains Logger class declaration |

## Текст программы
| Имя файла | Описание |
| :-: | :-: |
|<a href="_button_8h_source.html">Button</a> | Button class implementation | 
|<a href="_screen_8h_source.html">Screen</a> | Screen class implementation | 
|<a href="_logger_8h_source.html">Logger</a> | Logger class implementation | 
<br><br><br><br><br><br><br><br><br>
## Результаты работы
![imghot 2](screenshots/res.JPG)


## Выводы
Исходя из результатов выполнения программы, приведенных в пункте **Результат работы**, видно, что объект конструктор по умолчанию объекта Button вызывается: 

1. в теле функции main
2. в конструкторе класса Screen,
3. списком инициализации класса Screen

Далее выполняется тело конструктора Screen (инициализация объекта Screen завершена). При выходе из тела конструктора отрабатывает деструктор переданного в этот конструктор объекта Button <i>~Button()</i>. После выхода из функции *testObjLifeCycle*, вызывается деструктор объекта отображения <i>~Screen()</i>, который освобождает ресурсы данного объекта, вызывая деструктор размещенного в нем объекта Button <i>~Button()</i>. В конце удаляется объект Button, созданный в теле функции main <i>~Button()</i>.