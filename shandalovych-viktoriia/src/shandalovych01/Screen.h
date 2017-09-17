/*
 * Screen.h
 *
 *  Created on: 10 сент. 2017 г.
 *      Author: Viktotia
 */

#ifndef Screen_H_
#define Screen_H_

class Screen {
public:
	Screen();
	Screen(Wheel wheel);

	virtual ~Screen();
	void ViewWheel();
	private:
		///Object which must be viewed.
		Wheel wheel;
};

#endif /* Screen_H_ */
