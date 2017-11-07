/**
 * @file WindowVector.h
 * Contains the declaration of the "WindowVector" class.
 * @author pavlov-vs
 * @version 0.0.1
 * @date 2017.09.09
 */

#pragma once
#include"Window.h"
using namespace std;

/**
 * Class-container for Window objects.
 *
 * Based on Array.
 * After adding to vCapacity position resizes according to the formula "newCapacity = (oldvCapacity * 3) / 2 + 1"
 * <br><b>vSize</b> - amount of objects in container.
 * <br><b>vCapacity</b> - max amount of elements before resize.
 * <br><b>vector</b> - dynamic array for Window objects.
 */
class WindowVector {
private:
	///amount of objects in container.
	int vSize;
	///max amount of elements before resize.
	int vCapacity;
	///dynamic array for Window objects.
	Window* vector;

	/**
	 * Resizes vector when it up to overflow.
	 */
	void resize();
public:
	WindowVector();
	virtual ~WindowVector();
	/**
	 * Pushes element to the end of vector.
	 *
	 * @param win - element to add.
	 */
	void push(const Window& win);
	/**
	 * Gets element from asked position.
	 *
	 * @param pos - position from which to get an element
	 * @return element from asked position. In case if pos < 0 || pos > size returns new Window element and types error message.
	 */
	Window* get(int pos);

	/**
	 * Gets size of vector which corresponds to amount of elements in vector.
	 */
	int size();

	/**
	 * Removes element from asked position.
	 *
	 * In case if pos < 0 || pos > size types error message.
	 * @param pos - position from which to remove an element.
	 */
	void remove(int pos);

	/**
	 * Deletes all elements from vector;
	 */
	void clean();

	/**
	 * Saves all elements to file.
	 * @param filename - name of file to save.
	 */
	void save(string filename);

	/**
	 * Loads all elements from file.
	 * @param filename - name of file from which to load.
	 */
	void load(string filename);

	/**
	 * Gets element from asked position.
	 *
	 * @param pos - position from which to get an element
	 * @return element from asked position. In case if pos < 0 || pos > size returns new Window element and types error message.
	 */
	Window* operator[](int pos) {
		return get(pos);
	}
};
