# Тема 6: Контейнеры {#mainpage}

## Цель
Получить навыки создания собственных контейнеров на базе существующих классов

## Общее задание
- Определить класс коллекции <Container> для сохранения объектов в соответствии со своей прикладной областью
- В коллекции должен быть перегружен оператор []
- Класс должен выполнять сохранения данных в файл и дальнейшую загрузку из файла 
- Загрузку и сохранение в файл осуществлять с помощью библиотеки FileStoreLibrary

## Прикладная область
- Клавиатура

## Индивидуальное задание
- Коллекцию реализовать на основе списков



## Структура проекта
|Project name | Picture |
| :-: | :-: |
|khalin06 |![imghot 1](screenshots/str_kh06.JPG) |
|khalin06_tests |![imghot 1](screenshots/str_kh06_tests.JPG) |


## Описание разработанных типов данных
| Classes |
| :-: |
| ![imghot 1](screenshots/kh06_classes.jpg) |
<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

## Диаграмма классов
| Class diagram |
| :-: |
|  ![imghot 1](screenshots/ClassDiagram.jpg) |


## Разработанные методы и функции
См. раздел <b>members</b> на заголовочных страницах соответствующих типов данных

<br><br>
## Ссылки на файлы проекта
| Имя файла | Описание|
| :-: | :-: |
| LinkedList.h | Contains LinkedList class declaration |

## Текст программы
| File name | Description |
| :-: | :-: |
| <a href="_linked_list_8h_source.html">LinkedList</a> | Contains LinkedList class implementation |
<br><br><br><br><br><br><br><br><br><br><br><br><br>

## Результаты работы
![imghot 2](screenshots/res_saving.JPG)
<div align="center">Рисунок 1 - Добавляемые данные в список</b></div><br>

![imghot 2](screenshots/res_file.JPG)
<div align="center">Рисунок 2 - Созданный файл</b></div><br>

![imghot 2](screenshots/res_file2.JPG)
<div align="center">Рисунок 3 - Содержимое созданного файла</b></div><br>

![imghot 2](screenshots/res_loaded.JPG)
<div align="center">Рисунок 4 - Результат восстановление списка из файла</b></div><br>

![imghot 2](screenshots/tests.JPG)
<div align="center">Рисунок 5 - Результат выполнения тестов</b></div><br>

## Выводы
В ходе лабораторной работы были получены практические навыки создания собственных контейнеров для объектов хранения ранее разработанных классов