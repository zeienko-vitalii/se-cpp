/*
 * Screen.h
 *
 *  Created on: 10 ����. 2017 �.
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
