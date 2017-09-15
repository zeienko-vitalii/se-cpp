/**
 * @file Screen.h
 * Contains class for viewing of Window objects.
 * @author pavlov-vs
 * @version 0.0.1
 * @date 2017.09.09
 */
#pragma once

using namespace std;

/**
 * Class which views information of Window object.
 * window - object which must be viewed.
 */
class Screen {

public:
	/**
	 * Default constructor, window set to default.
	 */
	Screen();
	/**
	 * Constructor for all fields.
	 * @param window - window which must be set
	 */
	Screen(Window window);
	virtual ~Screen();

	/**
	 *Outputs information about `window` into console.
	 */
	void viewWindow();
private:
	///Object which must be viewed.
	Window window;
};
