# Тема 6: Контейнеры

## Цель
Получить навыки создания собственных контейнеров на базе существующих классов

## Общее задание
- Определить класс коллекции <Container> для сохранения объектов в соответствии со своей прикладной областью
- В коллекции должен быть перегружен оператор []
- Класс должен выполнять сохранения данных в файл и дальнейшую загрузку из файла 
- Загрузку и сохранение в файл осуществлять с помощью библиотеки FileStoreLibrary

## Прикладная область
- Колеса

## Индивидуальное задание
- Коллекцию реализовать на основе списков


## Структура проекта

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko06/source/Image01.png)


## Описание разработанных типов данных

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko06/source/Image02.png)

## Диаграмма классов

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko06/source/Image03.png)
<div align="center">Рисунок 1 -Диаграмма классов контейнеров</b></div><br>

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko06/source/Image03.1.png)
<div align="center">Рисунок 2 -Диаграмма классов для сохранения данных из контейнеров</b></div><br>

## Разработанные методы и функции
См. раздел <b>members</b> на заголовочных страницах соответствующих типов данных

<br><br>
## Ссылки на файлы проекта

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko06/source/Image04.png)
## Текст программы

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko06/source/Image05.png)
![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko06/source/Image05.1.png)

## Результаты работы
![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko06/source/Image06.png)
<div align="center">Рисунок 1 - Загружаемые данные из файла в коллекцию типа CarWheel</b></div><br>

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko06/source/Image07.png)
<div align="center">Рисунок 2 - Результат демонстрации удаления</b></div><br>

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko06/source/Image08.png)
<div align="center">Рисунок 3 - Результат демонстрации добавления с выводом данных в файл</b></div><br>

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko06/source/Image09.png)
<div align="center">Рисунок 4 - Загружаемые данные из файла в коллекцию типа Wheel</b></div><br>

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko06/source/Image10.png)
<div align="center">Рисунок 5 - Результат добавления одного элемента типа Wheel и выводомв всей коллекции в файла</b></div><br>

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko06/source/Image11.png)
<div align="center">Рисунок 5 - Утечки памяти нет</b></div><br>


![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko06/source/Image12.png)
<div align="center">Рисунок 5 - Выполнение тестов</b></div><br>

## Выводы
В ходе лабораторной работы были получены практические навыки создания собственных контейнеров для объектов хранения ранее разработанных классов