#include "JarScreen.h"
#include <string>
#include <iostream>
using namespace std;
///Конструктор без параметра
JarScreen::JarScreen()
{
	cout << "JarScreen constructor\n";
}

///Деструктор
JarScreen::~JarScreen()
{
	cout << "JarScreen destructor\n";
}

///Конструктор для всіх полей
JarScreen::JarScreen(Jar data) : data(data), Screen(data)
{
	cout << "JarScreen constructor with parametrs\n";
}

///Функція відображення даних об'єкта класу Jar
void JarScreen::viewJar()
{
	cout << "Тип кришки = " << data.getTypeOfCap() << endl;
	cout << "Матеріал = " << data.getMaterial() << endl;
}

///Виводить заголовок відображення
void JarScreen::showHeader()
{
	cout << "\n================================\n";
	cout << "\n        Jar data\n";
	cout << "\n================================\n";
}
///Виводить головну інформацію про об'єкт
void JarScreen::showContent()
{
	view();
	viewJar();
}
///Виводить нижній колонтитул відображення
void JarScreen::showFooter()
{
	cout << "\n________________________________\n";
}