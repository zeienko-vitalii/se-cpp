/**
 * @file Graphics.h
 * Graphical output of Window object.
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.09.25
 */
#ifndef GRAPHICS_H_
#define GRAPHICS_H_
/**
 * Class which views Room object with use of pseudo-graphic.
 * room - object which must be viewed.
 */
class Graphics {
private:

	const Room* room;


public:
	/**
	 * Default constructor, room set to default.
	 */
	Graphics();

/**
* Sets data to interior object of this class.
* @param data - object to be viewed
*/
	void setData(const Room *room);

	/**
    * Prints data from room object.
	* @param room - object to be viewed
	*/
	void Data(const Room& room);

	/**
	* Prints data from interior object of this class.
	*/
	void Data();

	virtual ~Graphics();
};

#endif /* GRAPHICS_H_ */
