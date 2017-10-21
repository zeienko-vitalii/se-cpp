/**
 * @file Screen.h
 * Contains class for viewing of Room objects.
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.09.25
 */
#ifndef SCREEN_H_
#define SCREEN_H_
/**
 *Class which views information of Room object
 * room - object which must be viewed
 */
class Screen {
public:

Room room;

public:
/**
*Default constructor
*/
	Screen();
/**
*Constructor for all fields Room
* @param room - room, which must be set
*/
	Screen(Room room);
/**
*Outputs information about `window` into console
*/
	void Output();
/**
* Virtual destructor
*/
	virtual ~Screen();
};

#endif /* SCREEN_H_ */
