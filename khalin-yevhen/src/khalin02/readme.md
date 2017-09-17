# Тема 2: Права доступа, модификатор const {#mainpage}

## Цель
Получить навыки передачи объектов в методы с использованием прав доступа и const-модификаторов


## Общее задание
- Разделить в <Data1> права доступа private, public
- Реализовать класс отображения <View2> для <Data1>
- <View2> должен иметь дополнительно к индивидуальному заданию следующие методы: setDataSource(const Data1* data): void; printData(const Data1* data): void

## Прикладная область
В соответствии с вариантом #15
| Прикладная область | Имя класса данных | Приватные поля | Отображение | Const-методы |
| :-: | :-: | :-: | :-: | :-: |
| Клавиатура | Кнопка | Button::form; Button::state; const GraphScreen::button | text format | Data1::isRoundPressed(): bool |


## Структура проекта
| Visual Studio |
| :-: |
| ![imghot 1](screenshots/struct.JPG) |


## Описание разработанных типов данных
| Classes |
| :-: |
| ![imghot 1](screenshots/classlist.JPG) |


## Диаграмма классов
![imghot 1](screenshots/diagram.JPG)
<br><br>


## Разработанные методы и функции
| Class | Methods |
| :-: | :-: | 
| Button | ![imghot 1](screenshots/btnMthds.JPG) |
| GraphScreen | ![imghot 1](screenshots/graphMthds.JPG) |


## Ссылки на файлы проекта
| Имя файла | Описание|
| :-: | :-: |
| Button.h | Contains Button class declaration |
| ButtonForm.h | Contains a declaration of the Button forms |
| GraphScreen.h | Contains GraphScreen class declaration |
| Button.cpp | Contains Button class implementation |
| GraphScreen.cpp | Contains GraphScreen class declaration |
| main.cpp | Contains the entry point to the console application |


## Текст программы
| Имя файла | Описание |
| :-: | :-: |
|<a href="_button_8h_source.html">Button</a> | Button class implementation | 
|<a href="_graph_screen_8h_source">GraphScreen</a> | GraphScreen class implementation | 


## Результаты работы
| Изображения |
| :-: | 
|![imghot 2](screenshots/res.JPG) |


## Выводы
В ходе выполнения лабораторной работы была проверена невозможность получения доступа к неконстантным методам из константной ссылки на объект / получение доступа к состоянию и поведению объекта из константного метода.