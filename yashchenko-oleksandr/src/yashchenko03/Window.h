/**
 * @file Window.h
 * Declaration of class Window.
 * @author Ященко Олександр
 * @version 0.0.3
 * @date 2017.10.20
 */

#ifndef WINDOW_H_
#define WINDOW_H_

/**
 * Storing information about window
 */
class Window {
public:
	/**
	 * Constructor without parameters
	 */
	Window(void);

	/**
	 * Constructor
	 * @param aId sets Window::iId
	 * @param aX1 sets Window::iX1
	 * @param aY1 sets Window::iY1
	 * @param aX2 sets Window::iX2
	 * @param aY2 sets Window::iY2
	 */
	Window(int aId, int aX1, int aY1, int aX2, int aY2);

	/**
	 * Copying contrustor
	 * @param window object with data to copy
	 */
	Window(const Window& window);

	/**
	 * Empty destructor
	 */
	~Window();
private:
	int iId; ///< Window identification number
public:
	int iX1; ///< X1 coordinate
	int iY1; ///< Y1 coordinate
	int iX2; ///< X2 coordinate
	int iY2; ///< Y2 coordinate

	/**
	 * Returns Window::iId.
	 * @return iId
	 */
	const int getId() const;

	/**
	 * Sets id value.
	 */
	void setId();

	/**
	 * Counts width of window.
	 * @return width
	 */
	const int width() const;

	/**
	 * Counts height of window.
	 * @return height
	 */
	const int height() const;
};

#endif // WINDOW_H_

