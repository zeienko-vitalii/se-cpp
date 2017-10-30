/**
 * @file Room.h
 * Contains the declaration of the "Room" object.
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.10.02
 */
#include <string>
using namespace std;
#ifndef ROOM_H_
#define ROOM_H_
/**
 Class containing the implementation of a Room.
 */
class Room {
public:
	float length;
	float widht;
	float height;
	/**
    * Default constructor
    */
	Room();
	/**
    * Constructor for all fields
    */

	Room(float length, float widht, float height);

	virtual string toString();

	/**
    * Getter of Room Length.
    */
	float getLength() const;
	/**
    * Getter of Room Width.
    */
	float getWidht() const;
	/**
	* Getter of Room Height.
	*/
	float getHeight() const;
	/**
	* Setter of Room length.
	*/
	void setLength(float length);
	/**
	* Setter of Room Width.
	*/
	void setWidht(float widht);
	/**
    * Setter of Room Height.
    */
	void setHeight(float height);
	/**
	* Result Volume the Room
	*/
	float Volume() const;

	virtual ~Room();
};

#endif /* ROOM_H_ */
