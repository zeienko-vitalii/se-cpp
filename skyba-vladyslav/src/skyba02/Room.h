/**
 * @file Room.h
 * Contains the declaration of the "Room" object.
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.09.25
 */
#pragma once
using namespace std;
#ifndef ROOM_H_
#define ROOM_H_
/**
 * Class containing the implementation of a Room.
 */
class Room {

public:

	float length;
	float widht;
	float height;

public:
/**
* Default constructor
*/
	Room();
/**
 * Constructor for all fields.
 * @param length
 * @param width
 * @param height
 */

	Room(float length, float widht,	float height);

/**
* Getter length
* @return length
*/
	float getLength() const;
/**
* Getter width
* @return width
*/
    float getWidht() const;
/**
* Getter height
* @return height
*/
	float getHeight() const;

	/**
	* Setter length
	* @param length
	*/
	void setLength(float length);

	/**
	* Setter width
	* @param width
	*/
	void setWidht(float widht);

	/**
	* Setter height
	* @param height
	*/
	void setHeight(float height);


/**
* Result Volume the Room
* @param
*/
	float Volume() const;

/**
* Destructor
*/
	virtual ~Room();
};

#endif /* ROOM_H_ */
