/**
 * @file main.cpp
 * Реализация функции main().
 * @author shyian
 * @version 1.0.0
 * @date 11.11.2017
 */

#include "Button.h"
#include "Screen.h"
#include "conio.h"

/**
 * Точка входа программы.
 * @return код завершения
 */
int main(void)
{
	CButton button;
	button.setParameters(true,button.RECTANGULAR);

	CScreen view1(button);
	view1.showContent();

	CButton* secondButton = new CButton();
	secondButton->setParameters(false, secondButton->RECTANGULAR);

	CScreen view2(*secondButton);
	view2.showContent();

	CButton* thirdButton = new CButton();
	thirdButton->setParameters(true,thirdButton->OVAL);

	CScreen view3(*thirdButton);
	view3.showContent();

	_getch();
	return 0;
}
