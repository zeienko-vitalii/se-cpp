#ifndef SRC_SHANDALOVYCH02_GRAPHSCREEN_H_
#define SRC_SHANDALOVYCH02_GRAPHSCREEN_H_

#include "Monitor.h"
 /**
  * Класс который выводит псевдографикой колесо
  * @param - объект, который должен выводиться
  */
class GraphScreen: public BaseScreen {
private:
	const Monitor* monitor;
public:

	/**
	 * Конструктор без параметров.
	 */
	GraphScreen();
	/**
	 * Конструктор для записи объекта, который выводим.
	 * @param  monitor - объект, который выводим.
	 */
	GraphScreen( Monitor* monitor);
	/**
     * Деструктор.
	 */
	virtual ~GraphScreen();
	/**
	 *  Уснавливает данные для внутреннего объекта этого класса
	 *   @param  monitor - объект, который выводим.
	 */
	void setDataSource (const Monitor* monitor);
	/**
	 * Выводит данные из объекта данных
	 * @param  monitor - объект, который выводим.
	 */
	void PrintData (const Monitor& monitor);
	/**
	 * Выводит данные из внутреннего объекта этого класса.
	 */
	void PrintData ();

	virtual void showHeader() override;

		virtual void showContent() override;

		virtual void showFooter() override;
};

#endif /* SRC_GRAPHSCREEN_H_ */
