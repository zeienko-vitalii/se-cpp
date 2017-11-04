# Тема 3: Наследование и виртуальность

## Цель
Получить навыки разработки собственных иерархий классов с использованием принципа расширения и виртуальности

## Общее задание
- Создать класс <Data2>, используя наследование от <Data1> с добавлением новых полей
- Выделить базовый класс <BaseView> для <View1> и <View2> с функцией BaseView::Display(): void и следующими виртуальными функциями, которые из нее вызываются: showHeader, showContent, showFooter
- Пренести основной функционал отображения в базовый класс, реализовав специфическое поведение в соответствующих виртуальных методах
- Создать класс <View3>, который задает специфику отображения для объектов <Data2>
- Показать работу виртуальности на примере использования наследника через указатель на базовый класс 

## Прикладная область
В соответствии с вариантом #17
![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko03/source/Image01.png)


## Структура проекта

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko03/source/Image02.png)


## Описание разработанных типов данных

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko03/source/Image03.png)


## Диаграмма классов

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko03/source/Image04.png)

## Разработанные методы и функции
См. раздел <b>members</b> на заголовочных страницах соответствующих типов данных


## Ссылки на файлы проекта

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko03/source/Image05.png)



## Текст программы

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko03/source/Image06.png)


## Результаты работы

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko03/source/Image07.png)


## Выводы
В ходе выполнения лабораторной работы были закреплены навыки разработки иерархий классов с использованием полиморфизма для задания отличного поведения объектов классов потомков от базовых классов с одинаковой сигнатурой определения