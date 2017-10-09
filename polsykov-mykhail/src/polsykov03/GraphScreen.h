#ifndef SRC_SHANDALOVYCH02_GRAPHSCREEN_H_
#define SRC_SHANDALOVYCH02_GRAPHSCREEN_H_

#include "Monitor.h"
 /**
  * ����� ������� ������� �������������� ������
  * @param - ������, ������� ������ ����������
  */
class GraphScreen: public BaseScreen {
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
	 * ������� ������ �� ����������� ������� ����� ������.
	 */
	void PrintData ();

	virtual void showHeader() override;

		virtual void showContent() override;

		virtual void showFooter() override;
};

#endif /* SRC_GRAPHSCREEN_H_ */
