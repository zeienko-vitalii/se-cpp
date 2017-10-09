/**
 * @file Graphics.h
 * Содержит класс для просмотра объектов Room
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.09.25
 */
#ifndef GRAPHICS_H_
#define GRAPHICS_H_

class Graphics {
private:

	const Room* room;


public:

	Graphics();


	void setData(const Room *room);


	void Data(const Room& room);


	void Data();

	virtual ~Graphics();
};

#endif /* GRAPHICS_H_ */
