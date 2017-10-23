/*
 *@file AutoWheel.h  —одержит описание объекта " олесо автомобил€"
 *
 * @date 8 окт. 2017 г.
 * @Author: Viktotia
 */

#ifndef AUTOWHEEL_H_
#define AUTOWHEEL_H_
#include<string>
#include "Wheel.h"

/**
 *   ласс, который содержит описание колеса автомобил€ и €вл€етс€ наследником класса колесо. <br>
 *  diameter - диаметр колеса. <br>
 *  width - ширина колеса. <br>
 *  unit - единица измерени€ размеров колеса. <br>
 *  rubberNamem - название резины <br>
 *  manufacturerRubber - производитель резины <br>
 */
class AutoWheel: public Wheel {
public:
	/**
	 *   онструктор колеса без параметров.
	 */
	AutoWheel();
	/**
		 *  онструктор дл€ установки начальных значений.
		 * @param diameter - Ќачальное значение диаметра.
		 * @param width - Ќачальное значение ширины.
		 * @param unit - Ќачальное значение единицы измерени€.
		 * @param rubberNamem - Ќачальное значение название резины.
		 * @param manufacturerRubber - Ќачальное значение производитель резины.
		 */
	AutoWheel(int diameter, int width, string unit, string rubberNamem,
			string manufacturerRubber);

	/**
	 * ƒеструктор.
	 */
	virtual ~AutoWheel();

	/**
	 * √еттер производитель резины колеса автомобил€.
	 * @return производитель резины колеса автомобил€.
	 */
	const string& getManufacturerRubber();

	/**
		 * —еттер диаметра.
		 * @param manufacturerRubber - производитель резины колеса.
		 */
	void setManufacturerRubber(const string& manufacturerRubber);

	/**
	 * √еттер название резины колеса автомобил€.
	 * @return название резины колеса автомобил€.
	 */
	const string& getRubberName();

	/**
	 * —еттер название резины.
	 * @param rubberName - название резины колеса.
	 */
	void setRubberName(const string& rubberName);
	virtual string ToString();

private:
	///название резины
	string rubberName;
	///производитель резины
	string manufacturerRubber;
};

#endif /* AUTOWHEEL_H_ */
