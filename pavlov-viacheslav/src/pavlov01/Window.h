/**
 * @file Window.h
 * Contains the declaration of the "Window" object.
 * @author pavlov-vs
 * @version 0.0.1
 * @date 2017.09.09
 */

#pragma once
using namespace std;

/**
 * Class containing the implementation of a window.
 * <br><b>windowId</b> - id of current window
 * <br><b>x1</b> - first x coordinate of the window
 * <br><b>y1</b> - first y coordinate of the window
 * <br><b>x2</b> - second x coordinate of the window
 * <br><b>y2</b> - second y coordinate of the window
 */
class Window {
	/**
	 * Used to output a formatted object to a stream.
	 * @param oSt - stream to which we output
	 * @param Window - object which we output
	 * @return formatted stream with data
	 */
	friend ostream& operator <<(ostream& oSt, Window Window);

	/**
	 * Used to input an object from a stream.
	 * @param iSt - stream from which we input
	 * @param Window -  object which we input
	 */
	friend void operator >>(istream& iSt, Window &Window);
private:
	///Id of current window.
	int windowId;
	///First x coordinate of the window.
	int x1;
	///First y coordinate of the window.
	int y1;
	///Second x coordinate of the window.
	int x2;
	///Second y coordinate of the window.
	int y2;

public:
	/**
	 * Default constructor, all fields are set to 0.
	 */
	Window();

	/**
	 *
	 */
	virtual ~Window();

	/**
	 * Constructor for all fields.
	 * @param windowId - window id which must be set
	 * @param x1 - x1 coordinate which must be set
	 * @param y1 - y1 coordinate which must be set
	 * @param x2 - x2 coordinate which must be set
	 * @param y2 - y2 coordinate which must be set
	 */
	Window(int windowId, int x1, int y1, int x2, int y2);

	/**
	 * Getter of windowId.
	 * @return windowId
	 */
	int getWindowId();
	/**
	 * Setter of windowId.
	 * @param windowId - window id which must be set
	 */
	void setWindowId(int windowId);

	/**
	 * Getter of x1 coordinate.
	 * @return x1
	 */
	int getX1();
	/**
	 * Setter of x1 coordinate.
	 * @param x1 - x1 coordinate which must be set
	 */
	void setX1(int x1);

	/**
	 * Getter of y1 coordinate
	 * @return y1
	 */
	int getY1();
	/**
	 * Setter of y1 coordinate.
	 * @param y1 - y1 coordinate which must be set
	 */
	void setY1(int y1);

	/**
	 * Getter of x2 coordinate
	 * @return x2
	 */
	int getX2();
	/**
	 * Setter of x2 coordinate.
	 * @param x2 - x2 coordinate which must be set
	 */
	void setX2(int x2);

	/**
	 * Getter of y2 coordinate
	 * @return y2
	 */
	int getY2();
	/**
	 * Setter of y2 coordinate.
	 * @param y2 - y2 coordinate which must be set
	 */
	void setY2(int y2);

};

