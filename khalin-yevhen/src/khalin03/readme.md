# Тема 3: Наследование и виртуальность {#mainpage}

## Цель
Получить навыки разработки собственных иерархий классов с использованием принципа расширения и виртуальности


## Общее задание
- Создать класс <Data2>, используя наследование от <Data1> с добавлением новых полей
- Выделить базовый класс <BaseView> для <View1> и <View2> с функцией BaseView::Display(): void и следующими виртуальными функциями, которые из нее вызываются: showHeader, showContent, showFooter
- Пренести основной функционал отображения в базовый класс, реализовав специфическое поведение в соответствующих виртуальных методах
- Создать класс <View3>, который задает специфику отображения для объектов <Data2>
- Показать работу виртуальности на примере использования наследника через указатель на базовый класс 

## Прикладная область
В соответствии с вариантом #15
| Прикладная область | Имя класса Data2 | Поля Data2 |
| :-: | :-: | :-: | 
| Клавиатура | Кнопка клавиатуры | код клавиши, имя клавиши|

## Структура проекта
| Project name | Visual Studio project structure |
| :-: | :-: |
| khalin03 | ![imghot 1](screenshots/khalin03_struct.JPG) |
| khalin03_tests | ![imghot 1](screenshots/khalin03_tests_struct.JPG) |

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>
## Описание разработанных типов данных
| Project name | Classes |
| :-: | :-: |
| khalin03 | ![imghot 1](screenshots/khalin03_classes.JPG) |
| khalin03_tests | ![imghot 1](screenshots/khalin03_tests_classes.JPG) |


## Диаграмма классов
| Project name | Class diagram |
| :-: | :-: |
| khalin03 | ![imghot 1](screenshots/khalin03_cd.JPG) |
| khalin03_tests | ![imghot 1](screenshots/khalin03_tests_cd.JPG) |

<br><br><br><br><br><br><br><br><br>
## Разработанные методы и функции
См. раздел <b>members</b> на заголовочных страницах соответствующих типов данных


## Ссылки на файлы проекта
| Имя файла | Описание|
| :-: | :-: |
| BaseView.h | Contains BaseView class declaration |
| GraphView.h | Contains GraphView class declaration |
| ScreenView.h | Contains ScreenView class declaration |
| SpecView.h | Contains SpecView class declaration |
| Button.h | Contains Button class declaration |
| ButtonForm.h | Contains a declaration of the Button forms |
| KeyboardButton.h | Contains KeyboardButton class declaration |
| Utilities.h | Contains different utilities |
| BaseView.cpp | Contains BaseView class implementation |
| GraphView.cpp | Contains GraphView class implementation |
| ScreenView.cpp | Contains ScreenView class implementation |
| SpecView.cpp | Contains SpecView class implementation |
| Button.cpp | Contains Button class implementation |
| KeyboardButton.cpp | Contains KeyboardButton class implementation |
| main.cpp | Contains the entry point to the console application |


## Текст программы
| File name | Description |
| :-: | :-: |
|<a href="_button_8h_source.html">Button</a> | Button class implementation | 
|<a href="_base_view_8h_source.html">BaseView</a> | BaseView class implementation | 
|<a href="_graph_view_8h_source.html">GraphView</a> | BaseView class implementation | 
|<a href="_keyboard_button_8h_source.html">KeyboardButton</a> | KeyboardButton class implementation | 
|<a href="_screen_view_8h_source.html">ScreenView</a> | ScreenView class implementation | 
|<a href="_spec_view_8h_source.html">SpecView</a> | SpecView class implementation | 
|<a href="_utilities_8h_source.html">utilities</a> | utilities implementation | 

## Результаты работы
| Project name | Results |
| :-: | :-: | 
| khalin03  |![imghot 2](screenshots/khalin03_res.JPG) |
| khalin03_tests  |![imghot 2](screenshots/khalin03_tests_res.JPG) |


## Выводы
В ходе выполнения лабораторной работы были закреплены навыки разработки иерархий классов с использованием полиморфизма для задания отличного поведения объектов классов потомков от базовых классов с одинаковой сигнатурой определения