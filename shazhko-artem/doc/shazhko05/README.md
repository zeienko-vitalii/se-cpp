# Тема 5: Абстрактные классы, интерфейсы, сериализация

## Цель
Научиться использовать интерфейсы для работы классов на примере сериализации

## Общее задание
- Реализовать для каждого из классов данных своей иерархии возможность сохранения и загрузки данных с помощью класса CFileStorage, который выдается к лабораторной работе в виде библиотеки
- Показать бинарный дамп сохраненного файла
- В выводах отметить недостатки класса CFileStorage

## Структура проекта
| Visual Studio |
| :-: |
![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko05/source/Image01.png)


## Описание разработанных типов данных
| Classes |
| :-: |
![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko05/source/Image002.png)


## Диаграмма классов
| Class diagram |
| :-: |
![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko05/source/Image003.png)


## Разработанные методы и функции
Для работы с вводом-выводом данных была разработана абстрактная фабрика, которая в будущем позволит без труда вводить новые классы по работе с ввода-вывода

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko05/source/Image04.png)
Рисунок 2.1 – Абстрактная фабрика

<br><br>
## Ссылки на файлы проекта

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko05/source/Image05.png)


## Текст программы

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko05/source/Image06.png)

## Результаты работы
![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko05/source/Image07.png)

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko05/source/Image08.png)

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko05/source/Image09.png)

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko05/source/Image10.png)

## Выводы
В ходе лабораторной работы были получены практические навыки работы с библиотекой CFileStorage