# Тема 4: Статические методы, перегрузка операторов и методов {#mainpage}

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
В соответствии с вариантом #15
| Прикладная область | Перегружаемые методы Data2 | Перегружаемые операторы Data2 |
| :-: | :-: | :-: | 
| Клавиатура |setData | == для сравнения кода кнопки с числом\n-= удаляет из имени кнопки заданный символ|

## Структура проекта
| Project name | Visual Studio project structure |
| :-: | :-: |
| khalin04 | ![imghot 1](screenshots/khalin04_struct.JPG) |
| khalin04_tests | ![imghot 1](screenshots/khalin04_tests_struct.JPG) |

<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>
## Описание разработанных типов данных
| Project name | Classes |
| :-: | :-: |
| khalin04 | ![imghot 1](screenshots/class_list.jpg) |


## Диаграмма классов
| Project name | Class diagram |
| :-: | :-: |
| khalin04 | ![imghot 1](screenshots/khalin04_cd.png) |
| khalin04_tests | ![imghot 1](screenshots/khalin04_tests_cd.jpg) |


## Разработанные методы и функции
См. раздел <b>members</b> на заголовочных страницах соответствующих типов данных


## Ссылки на файлы проекта
| Имя файла | Описание|
| :-: | :-: |
| Event.h | Contains Event class declaration |
| SimpleEvent.h | Contains SimpleEvent class declaration |
| EventArgs.h | Contains ScreenView EventArgs declaration |
| SpecViewEventArgs.h | Contains SpecViewEventArgs class declaration |
| EventListener.h | Contains EventListener class declaration |
| Sender.h | Contains a declaration of the Sender |
| SimpleTimer.h | Contains SimpleTimer class declaration |
| KeyboardButton.h | Contains KeyboardButton class declaration |
| SpecView.h | Contains SpecView class declaration |
| TimeManager.h | Contains TimeManager class declaration |
| Event.cpp | Contains Event class implementation |
| SimpleEvent.cpp | Contains SimpleEvent class implementation |
| EventArgs.cpp | Contains ScreenView EventArgs implementation |
| SpecViewEventArgs.cpp | Contains SpecViewEventArgs class implementation |
| EventListener.cpp | Contains EventListener class implementation |
| SimpleTimer.cpp | Contains SimpleTimer class implementation |
| KeyboardButton.cpp | Contains KeyboardButton class implementation |
| TimeManager.cpp | Contains TimeManager class implementation |


## Текст программы
| File name | Description |
| :-: | :-: |
| <a href="_event_8h_source.html">Event</a> | Contains Event class implementation |
| <a href="_simple_event_8h_source.html">SimpleEvent</a> | Contains SimpleEvent class implementation |
| <a href="_screen_view_8h_source.html">ScreenView</a> | Contains ScreenView EventArgs implementation |
| <a href="_spec_view_event_args_8h_source.html">SpecViewEventArgs</a> | Contains SpecViewEventArgs class implementation |
| <a href="_event_listener_8h_source.html">EventListener</a> | Contains EventListener class implementation |
| <a href="_simple_timer_8h_source.html">SimpleTimer</a> | Contains SimpleTimer class implementation |
| <a href="_keyboard_button_8h_source.html">KeyboardButton</a> | Contains KeyboardButton class implementation |
| <a href="_time_manager_8h_source.html">TimeManager</a> | Contains TimeManager class implementation |

## Результаты работы
![imghot 2](screenshots/gtest.JPG)
<div align="center">Рисунок 1 - GoogleTest</b></div><br>
![imghot 2](screenshots/leaks.JPG)
<div align="center">Рисунок 2 - Memory leaks detecting</b></div><br>
![imghot 2](screenshots/demo.JPG)
<div align="center">Рисунок 3 - Demo</b></div>

## Выводы
В ходе лабораторной работы были получены практические навыки работы с Win32-таймером; реализована система событий для взаимодействия с таймером