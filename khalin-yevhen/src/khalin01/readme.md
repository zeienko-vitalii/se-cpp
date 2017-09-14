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
<br><br><br><br><br><br><br><br><br><br><br><br><br>
## Результаты работы
| Описание | Изображение |
| :-: | :-: | 
| Выполнение программы | ![imghot 2](screenshots/res.JPG) |
| Описание вывода | ![imghot 2](screenshots/resСomment.JPG) |





## Выводы
В ходе выполнения лабораторной работы было проведено исследование жизненного цикла объектов, созданных в стеке:

- При передаче объекта в функцию в качестве аргумента по значению, создается его локальная копия с вызовом конструктора копирования 
- При выходе из зоны видимости места инициализации осуществляется вызов деструктора созданного объекта, вызывающего деструкторы размещенных в нем объектов с помощью композиции