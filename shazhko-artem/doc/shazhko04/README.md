# Тема 4: Статические методы, перегрузка операторов и методов

## Цель
Научиться уместно использовать статические методы, использовать перегрузку операторов и методов

## Общее задание
- Определить в классе <View2> статический метод OnTimerAction. Данный метод должен отображать на экране <Data1>
- Выбрать для Win32-таймера собственный интервал повторных вызовов
- Установить реализованный метод OnTimerAction на вызов в таймере
- Таймер должен срабатывать всего 4 раза
- Метод должен выводить на экран данные про полученный объект
- Дополнительные 4 балла добавляются за отдельную реализацию класса по работе с таймером
- Реализовать перегруженные операторы и методы в соответствии с индивидуальным заданием

## Прикладная область
В соответствии с вариантом #16
| Прикладная область | Перегружаемые методы Data2 | Перегружаемые операторы |
| :-: | :-: | :-: | 
| Колесо |setData | == в Data2 для диаметра\n= в Data2 устанавливает производителя и название |

## Структура проекта
| Project name | Visual Studio project structure |
|![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko04/source/Image01.png)


<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>
## Описание разработанных типов данных
| Project name | Classes |
|![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko04/source/Image02.png)


## Диаграмма классов
| Project name | Class diagram |
| :-: | :-: |
|![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko04/source/Image03.png)

## Разработанные методы и функции
Был разработан фабричный метод
|![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko04/source/Image04.png)

## Ссылки на файлы проекта
|![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko04/source/Image05.png)


## Текст программы
|![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko04/source/Image06.png)

## Результаты работы
|![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko04/source/Image07.png)
|![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/shazhko-artem/doc/shazhko04/source/Image08.png)


## Выводы
В ходе лабораторной работы были получены практические навыки работы с Win32-таймером; реализована система событий для взаимодействия с таймером