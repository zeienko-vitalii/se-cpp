/**
 * @file Button.h
 * ���������� ������ Button
 * @author Shyian
 * @version 1.0.0
 * @date 11.11.2017
 */

#ifndef BUTTON_H
#define BUTTON_H

/**
 * �������� ������� ������ CButton
 */
class CButton
{
public:
	/// ������� ��������� ������(���/����)
	bool iOnState;
	///������� ����� ������(�������������,��������)
	enum Shape { RECTANGULAR, OVAL } iShape;

	/**
	 * ����������� ��� ���������.
	 */
	CButton(void);

	/**
	 * ����������� � ����� �����������.
	 * @param aOnState ����������� � �������� ������� ��������� ������ CButton::SetParameters
	 * @param aShape ����������� � �������� ������� ��������� ������ CButton::SetParameters
	 */
	CButton(bool aOnState, Shape aShape);

	/**
	 * ����������� �����������.
	 * @param aButton �������� ������ � ������� ��� �����������
	 */
	CButton(const CButton& aButton);

	/**
	 * ������ ����������.
	 */
	~CButton();

	/**
	 * ������ ����� CButton::iOnState � CButton::iShape
	 * @param aOnState ������� �������� ���� CButton::iOnState
	 * @param aShape ������� �������� ���� CButton::iShape
	 */
	void setParameters(bool aOnState, Shape aShape);

};

#endif
