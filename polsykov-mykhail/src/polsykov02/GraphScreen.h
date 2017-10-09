#ifndef SRC_SHANDALOVYCH02_GRAPHSCREEN_H_
#define SRC_SHANDALOVYCH02_GRAPHSCREEN_H_

#include "Monitor.h"
 /**
  * ����� ������� ������� �������������� ������
  * @param - ������, ������� ������ ����������
  */
class GraphScreen {
private:
	const Monitor* monitor;
public:

	/**
	 * ����������� ��� ����������.
	 */
	GraphScreen();
	/**
	 * ����������� ��� ������ �������, ������� �������.
	 * @param  monitor - ������, ������� �������.
	 */
	GraphScreen( Monitor* monitor);
	/**
     * ����������.
	 */
	virtual ~GraphScreen();
	/**
	 *  ����������� ������ ��� ����������� ������� ����� ������
	 *   @param  monitor - ������, ������� �������.
	 */
	void setDataSource (const Monitor* monitor);
	/**
	 * ������� ������ �� ������� ������
	 * @param  monitor - ������, ������� �������.
	 */
	void PrintData (const Monitor& monitor);
	/**
	 * ������� ������ ������������� ������� ����� ������.
	 */
	void PrintData ();
};

#endif /* SRC_GRAPHSCREEN_H_ */
