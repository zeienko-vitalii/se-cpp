# Тема 5: Абстрактные классы, интерфейсы, сериализация {#mainpage}

## Цель
Научиться использовать интерфейсы для работы классов на примере сериализации

## Общее задание
- Реализовать для каждого из классов данных своей иерархии возможность сохранения и загрузки данных с помощью класса CFileStorage, который выдается к лабораторной работе в виде библиотеки
- Показать бинарный дамп сохраненного файла
- В выводах отметить недостатки класса CFileStorage

## Структура проекта
| Visual Studio |
| :-: |
|![imghot 1](screenshots/struct.JPG) |


## Описание разработанных типов данных
| Classes |
| :-: |
| ![imghot 1](screenshots/clist.jpg) |


## Диаграмма классов
| Class diagram |
| :-: |
|  ![imghot 1](screenshots/dia.jpg) |


## Разработанные методы и функции
См. раздел <b>members</b> на заголовочных страницах соответствующих типов данных

<br><br>
## Ссылки на файлы проекта
| Имя файла | Описание|
| :-: | :-: |
| PrintableButton.h | Contains PrintableButton class declaration |
| PrintableKeyboardButton.h | Contains SimpleEvent class declaration |
| PrintableButton.cpp | Contains PrintableButton class implementation |
| PrintableKeyboardButton.cpp | Contains PrintableKeyboardButton class implementation |


## Текст программы
| File name | Description |
| :-: | :-: |
| <a href="_printable_button_8h_source.html">PrintableButton</a> | Contains PrintableButton class implementation |
| <a href="_printable_keyboard_button_8h_source.html">PrintableKeyboardButton</a> | Contains PrintableKeyboardButton class implementation |

## Результаты работы
![imghot 2](screenshots/file.JPG)
<div align="center">Рисунок 1 - Output file</b></div><br>
![imghot 2](screenshots/leaks.JPG)
<div align="center">Рисунок 2 - Memory leaks detecting</b></div><br>
![imghot 2](screenshots/res.JPG)
<div align="center">Рисунок 3 - Demo</b></div>

## Выводы
В ходе лабораторной работы были получены практические навыки работы с библиотекой CFileStorage