#ifndef SRC_SHANDALOVYCH02_GRAPHSCREEN_H_
#define SRC_SHANDALOVYCH02_GRAPHSCREEN_H_

#include "Monitor.h"
 /**
  * Класс который выводит псевдографикой колесо
  * @param - объект, который должен выводиться
  */
class GraphScreen {
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
	 * Выводит данные извнутреннего объекта этого класса.
	 */
	void PrintData ();
};

#endif /* SRC_GRAPHSCREEN_H_ */
