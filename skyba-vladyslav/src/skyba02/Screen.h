/**
 * @file Screen.h
 * �������� ����� ��� ��������� �������� Room
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.09.25
 */
#ifndef SCREEN_H_
#define SCREEN_H_
/**
 *�����, ������� ������������� ���������� �� ������� Room.
 * room - ������, ������� ������ ���� ����������
 */
class Screen {
public:

Room room;

public:
/**
*����������� �� ���������
*/
	Screen();
/**
*����������� ��� ���� ����� Room
* @param room - room, ������� ������ ���� �����������
*/
	Screen(Room room);
/**
*������� ���������� � 'room` � �������
*/
	void Output();
/**
* ����������� ����������
*/
	virtual ~Screen();
};

#endif /* SCREEN_H_ */
