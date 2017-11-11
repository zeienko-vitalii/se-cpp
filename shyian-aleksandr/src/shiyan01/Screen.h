/**
 * @file Screen.h
 * ���������� ������ Screen
 * @author Shyian
 * @version 1.0.0
 * @date 11.11.2017
 */

#include "Button.h"

/**
 * ����������� ������ � ������
 */
class CScreen
{
public :
	///������� ������� ������
	CButton iButton;

	/**
	 * ����������� ��� ���������.
	 */
	CScreen(void);
	/**
	 * ����������� � ����������.
	 * @param aButton ����������� � �������� ��������� ������ CScreen::SetContent
	 */
	CScreen(CButton aButton);

	/**
	 * ������ ����������.
	 */
	~CScreen();

	/**
	 * ������ ���� CScreen::iButton
	 * @param aButton ������� �������� ���� CButton::iButton
	 */
	void setContent(CButton aButton);

	/**
	 * ����������� ������ ������.
	 */
	void showContent(void) ;
};
